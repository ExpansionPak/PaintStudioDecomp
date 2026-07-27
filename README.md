# PaintStudioDecomp

[![build](https://img.shields.io/github/actions/workflow/status/ExpansionPak/PaintStudioDecomp/ubuntu-build.yml?branch=main&label=build)](https://github.com/ExpansionPak/PaintStudioDecomp/actions/workflows/ubuntu-build.yml)
[![Code](https://img.shields.io/endpoint?url=https://raw.githubusercontent.com/ExpansionPak/PaintStudioDecomp/gh-pages/badges/code.json&cacheSeconds=300)](https://raw.githubusercontent.com/ExpansionPak/PaintStudioDecomp/gh-pages/badges/progress.json)
[![Data](https://img.shields.io/endpoint?url=https://raw.githubusercontent.com/ExpansionPak/PaintStudioDecomp/gh-pages/badges/data.json&cacheSeconds=300)](https://raw.githubusercontent.com/ExpansionPak/PaintStudioDecomp/gh-pages/badges/progress.json)

[<img src="https://decomp.dev/ExpansionPak/PaintStudioDecomp.svg?w=512&h=256" width="512" height="256">](https://decomp.dev/ExpansionPak/PaintStudioDecomp)

This is a work-in-progress decompilation of [Mario Artist: Paint Studio (1999)](https://en.wikipedia.org/wiki/Mario_Artist) for the [64DD](https://en.wikipedia.org/wiki/64DD)

It is built directly on top of [LuigiBlood's original decompilation of the game](https://github.com/LuigiBlood/paintstudio_decomp).

Required base ROM file:

- `dmpj.d64` with MD5 `3546bc6d93928a28285a91478bc41b68`

Convert a Mario Artist Paint Studio NDD dump to D64 with LuigiBlood's [leo64dd_python](https://github.com/LuigiBlood/leo64dd_python) tool.
The RAM area should be only `0xFF`.
You can create the dmpj.d64 file by taking a .ndd file (md5 `8485643e5830cd67ed4c0a5fd49e2491`) and running `python3 leo64ddfile.py d64 <path-to-ndd-file> <path-to-repo>/dmpj.d64`

## Quick Start

This repository uses Git submodules. Make sure to either clone the repository with the `--recurse-submodules` flag or to run `git submodule update --init --recursive` after the initial clone.

When pulling updates, you can update all submodules with `git submodule update --recursive`.

If dependencies are already installed and `dmpj.d64` is in the repo root:

```sh
python3 -m venv .venv
source .venv/bin/activate
python3 -m pip install -r requirements.txt
python3 -m pip install -r tools/splat/requirements.txt
make setup
make
```

## Prerequisites

- Python 3
- `make`
- `git`
- `curl`
- `md5sum`
- a MIPS binutils toolchain that provides one of these prefixes:
	- `mips-linux-gnu-*`
	- `mipsel-linux-gnu-*`
	- `mips64-elf-*`
	- `mips-elf-*`

`make setup` will:

- initialize/update submodules
- download IDO 7.1 into `tools/ido_recomp/<host>/7.1`
- run `tools/splat` to regenerate `asm/`, `bin/`, and `assets/` from `dmpj.d64`

## Linux/WSL

Ubuntu/Debian:

```sh
sudo apt-get update
sudo apt-get install -y \
	binutils-mips-linux-gnu \
	gcc \
	git \
	libc-dev \
	libc6-dev \
	make \
	ninja-build \
	openssl \
	python3 \
	python3-pip \
	python3.12-venv \
	curl
```

## macOS

Install Xcode Command Line Tools first if they are not already installed:

```sh
xcode-select --install
```

Download [Homebrew](https://brew.sh/) and install the required packages using it:

```sh
brew install \
	coreutils \
	git \
	make \
	mipsel-linux-gnu-binutils \
	python
```

## Diffing a Function

This repo uses [asm-differ](https://github.com/simonlindholm/asm-differ) (`tools/asm-differ`, a submodule) to compare your current C output against the target assembly for a function.

Before diffing for the first time, snapshot a known-good build as the baseline to diff against:

```sh
make
cp -r build expected/build
```

Then diff a function by name (or address):

```sh
python3 tools/asm-differ/diff.py -mo func_80007D64
```

- `-m` rebuilds automatically via `make` before diffing
- `-o` diffs the object file so symbol names resolve
- add `-w` to re-run automatically whenever the source file is saved

Run `python3 tools/asm-differ/diff.py --help` for the full list of options.

## Using decomp.me

Functions can also be matched entirely in the browser using [decomp.me](https://decomp.me/), which doesn't require a local build environment. This is useful for getting help from others, or for working without a full local setup.

decomp.me uses `asm-differ` as its diff viewer, the same tool `tools/asm-differ` provides locally. Because both sides use the same diffing logic, the score and diff output you see on decomp.me are exactly what you'd get from `tools/asm-differ/diff.py` locally.

Go to [decomp.me/new](https://decomp.me/new) and create a new scratch:

- **Platform**: Nintendo 64
- **Preset**: Mario Paint Studio
- **Compiler**: `ido7.1`
- **Diff Label**: `asm label from where function begins`
- **Target assembly**: paste the contents of the function's `.s` file
- **Context**: paste the contents of `ctx.c`
