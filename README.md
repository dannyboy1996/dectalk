# Fonix DECtalk

These files were shared by their original developer [late Edward Bruckert](https://bluegrasspals.com/pipermail/dectalk/2020-June/005253.html) on the DECtalk list in [Oct](https://bluegrasspals.com/pipermail/dectalk/2015-October/004517.html)/[Nov](https://bluegrasspals.com/pipermail/dectalk/2015-November/004535.html) 2015 and preserved on a HTTP server on [grossgang.com](https://keybase.pub/datajake1999/Grossgang/tts/DECtalk%20source%20code%20archive/Ad%202.zip). Another developer also added more code in 09/2022 which is also preserved in the [grossgang.com keybase filesystem](https://keybase.pub/datajake1999/Grossgang/tts/DECtalk%20source%20code%20archive/).

## Branches of Interest

- `master` Literally just the source code dumped into the `/src` folder.
- `develop` Working Linux/Windows binaries with i386, x64_64 and aarch64 builds working.

## Building

```sh
# Run all these commands in the /src directory...
# Generates configure files
autoreconf -si

# Executes configure files
./configure

# Builds DECtalk with ALL cores (remove -j for single core)
make -j
```

The built files will be found in the `/dist` folder.

### Ubuntu

If you're building on Ubuntu, obtain the following dependencies:

```sh
apt-get install build-essential libpulse-dev libgtk2.0-dev unzip
```

(libgtk2.0-dev is only needed if you want the graphical frontend, libpulse-dev if you want pulseaudio audio-output)

## Dockerised Builds

To build DECtalk without setting up a local build environment, run `sudo docker-compose up` (and make sure you have Docker and docker-compose installed!)

## Building on Windows

1. Download and Install Visual C++ 6.0. Newer versions might also work.
2. Build the dapi/src/devdtk43 project to build dectalk.dll.
3. To build the dictionaries run dapi/src/builddic.bat after building the dictionary compiler (dapi/src/dic).
4. Build any desired sample apps, or anything else you might want compiled such as SAPI5.

## The Team

![A photograph of members captioned as: "The DECtalk Team". From left to right, stands Ron Gemma, Trung Ly, Nick Shin, Matt Schnee, Kevin Bruckert, Ed Lazar, Carl Leeber, Tom Kopee, Ed Bruckert, Ginger Lin and Rick Rahko.](./src/samples/speak/TEAM03.BMP "The original DECtalk developers!")
