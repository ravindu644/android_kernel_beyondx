- Only works with S10 5G Korean Variant.
- Rootable boot.img via Magisk (So, no root loss after reboots anymore).
- Nuked All the Samsung Securities.
- Enabled NTFS Write support and Overlayfs support.
- SELinux Enforcing/Permissive (Default is Enforcing)
- Tested on One UI 4.1's "G977NKSU6HWD3" baseband. <hr>
## Installation Method:
01. Download the TAR file from my github releases.
02. Install [Samsung USB Drivers and ODIN](https://drive.google.com/file/d/1rXszF_ylzWuPnOiiRLAQk_R_APA1lpuA/view?usp=sharing).
03. Put the device to the download mode and flash the downloaded tar via Odin's AP Block. <hr>
## Notes: 
01. If the device is bootlooping, you should perform a factory reset.
02. <s>Stock recovery will broke after installing this ramdisk patch, so use the TWRP kindly.</s> [Install Patched Stock recovery from here..!](https://github.com/ravindu644/android_kernel_beyondx/releases/tag/Recovery) <hr>
## 🧑‍💻 For Developers - > How to build ?
01. Put the necessary variables in build_kernel.sh
02. Type ``` ./build_kernel.sh ```.
03. Choose an Option and build.
04. Output will be in the "out" folder. rename dtb_xxx.img to dt.img, rename dtbo_xxx.img to dtbo.img. Then you have to port the ramdisk from any device.
05. I used the boot.img from my M21 and unpacked it using crb kitchen.
06. Then opened the "ramdisk" and deleted M21's fstab and place my fstab there.
07. Also I edited the ramdisk build.prop.
08. Open split_image and replace "cmdline, board, os patch level things, and place your compiled kernel"
09. Repack and flash the boot.img + dt.img + dtbo.img using odin.
10. Done.
## Credits and Thanks : [@ivanmeler](https://github.com/ivanmeler), [Kartik Gupta](https://github.com/ghazzor),[ @S1m3x](https://t.me/S1m3x), [Chaitanya Yeranagula](https://github.com/LMAO-armv8)
### Join My Updates Channel : [@SamsungTweaks](https://t.me/SamsungTweaks)
