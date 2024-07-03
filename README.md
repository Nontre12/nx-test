# NX-TEST

## Docker environment

1. Build  
   `docker build -t nx-test .`
2. Run  
   `docker run --rm -it -v "$(pwd):/app" --workdir=/app nx-test bash`
3. Build Applet  
   `make`
4. Deployment  
   `nxlink -s -a 192.168.x.x app.nro`

## Dependencies

- dkp-libs/catnip=0.1.0-1
- dkp-libs/deko3d=0.5.0-1
- dkp-libs/devkita64-cmake=1.1.2-1
- dkp-libs/libnx=4.7.0-1
- dkp-libs/switch-cmake=1.5.1-1
- dkp-libs/switch-examples=20231028-1
- dkp-libs/switch-pkg-config=0.28-4
- dkp-linux/devkit-env=1.0.1-2
- dkp-linux/devkitA64=r26.1-2
- dkp-linux/devkitA64-gdb=14.1-1
- dkp-linux/general-tools=1.4.4-1
- dkp-linux/switch-tools=1.12.0-1
- dkp-linux/uam=1.1.0-1
