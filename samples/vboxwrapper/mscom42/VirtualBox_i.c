

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Tue Jul 15 12:59:09 2014
 */
/* Compiler settings for Z:\home\vbox\tinderbox\4.2-sdk\out\linux.amd64\release\bin\sdk\bindings\mscom\idl\VirtualBox.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_VirtualBox,0x46137EEC,0x703B,0x4fe5,0xAF,0xD4,0x7C,0x9B,0xBB,0xBA,0x02,0x59);


MIDL_DEFINE_GUID(IID, IID_IVirtualBoxErrorInfo,0xf91e6e91,0x49e1,0x4fd2,0xb2,0x1e,0x26,0x90,0x03,0x35,0x0d,0x06);


MIDL_DEFINE_GUID(IID, IID_IDHCPServer,0x6cfe387c,0x74fb,0x4ca7,0xbf,0xf6,0x97,0x3b,0xec,0x8a,0xf7,0xa3);


MIDL_DEFINE_GUID(IID, IID_IVirtualBox,0x3b2f08eb,0xb810,0x4715,0xbe,0xe0,0xbb,0x06,0xb9,0x88,0x0a,0xd2);


MIDL_DEFINE_GUID(IID, IID_IVFSExplorer,0x003d7f92,0xd38e,0x487f,0xb7,0x90,0x8c,0x5e,0x86,0x31,0xcb,0x2f);


MIDL_DEFINE_GUID(IID, IID_IAppliance,0x3059cf9e,0x25c7,0x4f0b,0x9f,0xa5,0x3c,0x42,0xe4,0x41,0x67,0x0b);


MIDL_DEFINE_GUID(IID, IID_IVirtualSystemDescription,0xd7525e6c,0x531a,0x4c51,0x8e,0x04,0x41,0x23,0x50,0x83,0xa3,0xd8);


MIDL_DEFINE_GUID(IID, IID_IInternalMachineControl,0xdca36a92,0x703c,0x4649,0x98,0xa4,0xf4,0x0c,0x1e,0xf0,0xc3,0x36);


MIDL_DEFINE_GUID(IID, IID_IBIOSSettings,0x38b54279,0xdc35,0x4f5e,0xa4,0x31,0x83,0x5b,0x86,0x7c,0x6b,0x5e);


MIDL_DEFINE_GUID(IID, IID_IPCIAddress,0xD88B324F,0xDB19,0x4D3B,0xA1,0xA9,0xBF,0x5B,0x12,0x71,0x99,0xA8);


MIDL_DEFINE_GUID(IID, IID_IPCIDeviceAttachment,0x91f33d6f,0xe621,0x4f70,0xa7,0x7e,0x15,0xf0,0xe3,0xc7,0x14,0xd5);


MIDL_DEFINE_GUID(IID, IID_IMachine,0x22781af3,0x1c96,0x4126,0x9e,0xdf,0x67,0xa0,0x20,0xe0,0xe8,0x58);


MIDL_DEFINE_GUID(IID, IID_IVRDEServerInfo,0x714434a1,0x58c3,0x4aab,0x90,0x49,0x76,0x52,0xc5,0xdf,0x11,0x3b);


MIDL_DEFINE_GUID(IID, IID_IConsole,0xdb7ab4ca,0x2a3f,0x4183,0x92,0x43,0xc1,0x20,0x8d,0xa9,0x23,0x92);


MIDL_DEFINE_GUID(IID, IID_IHostNetworkInterface,0x87a4153d,0x6889,0x4dd6,0x96,0x54,0x2e,0x9f,0xf0,0xae,0x8d,0xec);


MIDL_DEFINE_GUID(IID, IID_IHost,0x30678943,0x32df,0x4830,0xb4,0x13,0x93,0x1b,0x25,0xac,0x86,0xa0);


MIDL_DEFINE_GUID(IID, IID_ISystemProperties,0x1d7aca29,0x97f0,0x4287,0x98,0x74,0xa6,0x0e,0xc4,0xf8,0x0e,0xa6);


MIDL_DEFINE_GUID(IID, IID_IGuestOSType,0x6d968f9a,0x858b,0x4c50,0xbf,0x17,0x24,0x1f,0x06,0x9e,0x94,0xc2);


MIDL_DEFINE_GUID(IID, IID_IAdditionsFacility,0x54992946,0x6af1,0x4e49,0x98,0xec,0x58,0xb5,0x58,0xb7,0x29,0x1e);


MIDL_DEFINE_GUID(IID, IID_IGuestSession,0x57eb82a8,0x822b,0x42c1,0x9d,0x1c,0x5c,0x54,0xbc,0x3d,0x32,0x50);


MIDL_DEFINE_GUID(IID, IID_IProcess,0x08864d56,0x96ab,0x418b,0xad,0xbc,0x5a,0x67,0x95,0x32,0xae,0xb0);


MIDL_DEFINE_GUID(IID, IID_IGuestProcess,0xdfa39a36,0x5d43,0x4840,0xa0,0x25,0x67,0xea,0x95,0x6b,0x31,0x11);


MIDL_DEFINE_GUID(IID, IID_IDirectory,0x1b70dd03,0x26d7,0x483a,0x88,0x77,0x89,0xbb,0xb0,0xf8,0x7b,0x70);


MIDL_DEFINE_GUID(IID, IID_IGuestDirectory,0xaf4a8ce0,0x0725,0x42b7,0x88,0x26,0x46,0xe3,0xc7,0xba,0x73,0x57);


MIDL_DEFINE_GUID(IID, IID_IFile,0xb702a560,0x6139,0x4a8e,0xa8,0x92,0xbb,0xf1,0x4b,0x97,0xbf,0x97);


MIDL_DEFINE_GUID(IID, IID_IGuestFile,0x60661aec,0x145f,0x4d11,0xb8,0x0e,0x8e,0xa1,0x51,0x59,0x80,0x93);


MIDL_DEFINE_GUID(IID, IID_IFsObjInfo,0x4047ba30,0x7006,0x4966,0xae,0x86,0x94,0x16,0x4e,0x5e,0x20,0xeb);


MIDL_DEFINE_GUID(IID, IID_IGuestFsObjInfo,0xd5cf678e,0x3484,0x4e4a,0xac,0x55,0x32,0x9e,0x15,0x46,0x2e,0x18);


MIDL_DEFINE_GUID(IID, IID_IGuest,0x19c32350,0x0618,0x4ede,0xb0,0xc3,0x2b,0x43,0x11,0xbf,0x0d,0x9b);


MIDL_DEFINE_GUID(IID, IID_IProgress,0xc20238e4,0x3221,0x4d3f,0x88,0x91,0x81,0xce,0x92,0xd9,0xf9,0x13);


MIDL_DEFINE_GUID(IID, IID_ISnapshot,0x0472823b,0xc6e7,0x472a,0x8e,0x9f,0xd7,0x32,0xe8,0x6b,0x84,0x63);


MIDL_DEFINE_GUID(IID, IID_IMediumAttachment,0x5ee464d6,0x0613,0x4331,0xb1,0x54,0x7c,0xe1,0x21,0x70,0xef,0x9f);


MIDL_DEFINE_GUID(IID, IID_IMedium,0x29989373,0xb111,0x4654,0x84,0x93,0x2e,0x11,0x76,0xcb,0xa8,0x90);


MIDL_DEFINE_GUID(IID, IID_IMediumFormat,0x9bd5b655,0xea47,0x4637,0x99,0xf3,0xaa,0xd0,0x94,0x8b,0xe3,0x5b);


MIDL_DEFINE_GUID(IID, IID_IKeyboard,0xf6916ec5,0xa881,0x4237,0x89,0x8f,0x7d,0xe5,0x8c,0xf8,0x86,0x72);


MIDL_DEFINE_GUID(IID, IID_IMouse,0x05044a52,0x7811,0x4f00,0xae,0x3a,0x0a,0xb7,0xff,0x70,0x7b,0x10);


MIDL_DEFINE_GUID(IID, IID_IFramebuffer,0xb7ed347a,0x5765,0x40a0,0xae,0x1c,0xf5,0x43,0xeb,0x4d,0xde,0xaf);


MIDL_DEFINE_GUID(IID, IID_IFramebufferOverlay,0x0bcc1c7e,0xe415,0x47d2,0xbf,0xdb,0xe4,0xc7,0x05,0xfb,0x0f,0x47);


MIDL_DEFINE_GUID(IID, IID_IDisplay,0xb83ee395,0x8679,0x40ca,0x8d,0x60,0x1a,0x0c,0xbe,0x72,0x49,0x30);


MIDL_DEFINE_GUID(IID, IID_INetworkAdapter,0xefa0f965,0x63c7,0x4c60,0xaf,0xdf,0xb1,0xcc,0x99,0x43,0xb9,0xc0);


MIDL_DEFINE_GUID(IID, IID_ISerialPort,0x937f6970,0x5103,0x4745,0xb7,0x8e,0xd2,0x8d,0xcf,0x14,0x79,0xa8);


MIDL_DEFINE_GUID(IID, IID_IParallelPort,0x0c925f06,0xdd10,0x4b77,0x8d,0xe8,0x29,0x4d,0x73,0x8c,0x32,0x14);


MIDL_DEFINE_GUID(IID, IID_IMachineDebugger,0xa9abbb7c,0xd678,0x43b2,0xbe,0xd2,0x19,0xec,0x0e,0x32,0x30,0x3d);


MIDL_DEFINE_GUID(IID, IID_IUSBController,0x01e6f13a,0x0580,0x452f,0xa4,0x0f,0x74,0xe3,0x2a,0x5e,0x49,0x21);


MIDL_DEFINE_GUID(IID, IID_IUSBDevice,0xf8967b0b,0x4483,0x400f,0x92,0xb5,0x8b,0x67,0x5d,0x98,0xa8,0x5b);


MIDL_DEFINE_GUID(IID, IID_IUSBDeviceFilter,0xd6831fb4,0x1a94,0x4c2c,0x96,0xef,0x8d,0x0d,0x61,0x92,0x06,0x6d);


MIDL_DEFINE_GUID(IID, IID_IHostUSBDevice,0x173b4b44,0xd268,0x4334,0xa0,0x0d,0xb6,0x52,0x1c,0x9a,0x74,0x0a);


MIDL_DEFINE_GUID(IID, IID_IHostUSBDeviceFilter,0x4cc70246,0xd74a,0x400f,0x82,0x22,0x39,0x00,0x48,0x9c,0x03,0x74);


MIDL_DEFINE_GUID(IID, IID_IAudioAdapter,0x921873db,0x5f3f,0x4b69,0x91,0xf9,0x7b,0xe9,0xe5,0x35,0xa2,0xcb);


MIDL_DEFINE_GUID(IID, IID_IVRDEServer,0xd38de40a,0xc2c1,0x4e95,0xb5,0xa4,0x16,0x7b,0x05,0xf5,0x69,0x4c);


MIDL_DEFINE_GUID(IID, IID_ISharedFolder,0x8388da11,0xb559,0x4574,0xa5,0xb7,0x2b,0xd7,0xac,0xd5,0xce,0xf8);


MIDL_DEFINE_GUID(IID, IID_IInternalSessionControl,0xcddf451c,0xa006,0x4c33,0x82,0x45,0x63,0xb3,0xc9,0xae,0x65,0x86);


MIDL_DEFINE_GUID(IID, IID_ISession,0x12F4DCDB,0x12B2,0x4EC1,0xB7,0xCD,0xDD,0xD9,0xF6,0xC5,0xBF,0x4D);


MIDL_DEFINE_GUID(IID, IID_IStorageController,0xa1556333,0x09b6,0x46d9,0xbf,0xb7,0xfc,0x23,0x9b,0x7f,0xbe,0x1e);


MIDL_DEFINE_GUID(IID, IID_IPerformanceMetric,0x2a1a60ae,0x9345,0x4019,0xad,0x53,0xd3,0x4b,0xa4,0x1c,0xbf,0xe9);


MIDL_DEFINE_GUID(IID, IID_IPerformanceCollector,0xe22e1acb,0xac4a,0x43bb,0xa3,0x1c,0x17,0x32,0x16,0x59,0xb0,0xc6);


MIDL_DEFINE_GUID(IID, IID_INATEngine,0x26451b99,0x3b2d,0x4dcb,0x8e,0x4b,0xd6,0x36,0x54,0x21,0x81,0x75);


MIDL_DEFINE_GUID(IID, IID_IExtPackPlugIn,0x58000040,0xe718,0x4746,0xbb,0xce,0x4b,0x86,0xd9,0x6d,0xa4,0x61);


MIDL_DEFINE_GUID(IID, IID_IExtPackBase,0xf79b75d8,0x2890,0x4f34,0xff,0xff,0xff,0xff,0xa1,0x44,0xe8,0x2c);


MIDL_DEFINE_GUID(IID, IID_IExtPack,0x431685da,0x3618,0x4ebc,0xb0,0x38,0x83,0x3b,0xa8,0x29,0xb4,0xb2);


MIDL_DEFINE_GUID(IID, IID_IExtPackFile,0xb6b49f55,0xefcc,0x4f08,0xb4,0x86,0x56,0xe8,0xd8,0xaf,0xb1,0x0b);


MIDL_DEFINE_GUID(IID, IID_IExtPackManager,0x3295e6ce,0xb051,0x47b2,0x95,0x14,0x2c,0x58,0x8b,0xfe,0x75,0x54);


MIDL_DEFINE_GUID(IID, IID_IBandwidthGroup,0xbadea2d7,0x0261,0x4146,0x89,0xf0,0x6a,0x57,0xcc,0x34,0x83,0x3d);


MIDL_DEFINE_GUID(IID, IID_IBandwidthControl,0xe2eb3930,0xd2f4,0x4f87,0xbe,0x17,0x07,0x07,0xe3,0x0f,0x01,0x9f);


MIDL_DEFINE_GUID(IID, IID_IVirtualBoxClient,0x5fe0bd48,0x1181,0x40d1,0x99,0x1f,0x3b,0x02,0xf2,0x69,0xa8,0x23);


MIDL_DEFINE_GUID(IID, IID_IEventSource,0x9b6e1aee,0x35f3,0x4f4d,0xb5,0xbb,0xed,0x0e,0xce,0xfd,0x85,0x38);


MIDL_DEFINE_GUID(IID, IID_IEventListener,0x67099191,0x32e7,0x4f6c,0x85,0xee,0x42,0x23,0x04,0xc7,0x1b,0x90);


MIDL_DEFINE_GUID(IID, IID_IEvent,0x0ca2adba,0x8f30,0x401b,0xa8,0xcd,0xfe,0x31,0xdb,0xe8,0x39,0xc0);


MIDL_DEFINE_GUID(IID, IID_IReusableEvent,0x69bfb134,0x80f6,0x4266,0x8e,0x20,0x16,0x37,0x1f,0x68,0xfa,0x25);


MIDL_DEFINE_GUID(IID, IID_IMachineEvent,0x92ed7b1a,0x0d96,0x40ed,0xae,0x46,0xa5,0x64,0xd4,0x84,0x32,0x5e);


MIDL_DEFINE_GUID(IID, IID_IMachineStateChangedEvent,0x5748F794,0x48DF,0x438D,0x85,0xEB,0x98,0xFF,0xD7,0x0D,0x18,0xC9);


MIDL_DEFINE_GUID(IID, IID_IMachineDataChangedEvent,0xabe94809,0x2e88,0x4436,0x83,0xd7,0x50,0xf3,0xe6,0x4d,0x05,0x03);


MIDL_DEFINE_GUID(IID, IID_IMediumRegisteredEvent,0x53fac49a,0xb7f1,0x4a5a,0xa4,0xef,0xa1,0x1d,0xd9,0xc2,0xa4,0x58);


MIDL_DEFINE_GUID(IID, IID_IMachineRegisteredEvent,0xc354a762,0x3ff2,0x4f2e,0x8f,0x09,0x07,0x38,0x2e,0xe2,0x50,0x88);


MIDL_DEFINE_GUID(IID, IID_ISessionStateChangedEvent,0x714a3eef,0x799a,0x4489,0x86,0xcd,0xfe,0x8e,0x45,0xb2,0xff,0x8e);


MIDL_DEFINE_GUID(IID, IID_IGuestPropertyChangedEvent,0x3f63597a,0x26f1,0x4edb,0x8d,0xd2,0x6b,0xdd,0xd0,0x91,0x23,0x68);


MIDL_DEFINE_GUID(IID, IID_ISnapshotEvent,0x21637b0e,0x34b8,0x42d3,0xac,0xfb,0x7e,0x96,0xda,0xf7,0x7c,0x22);


MIDL_DEFINE_GUID(IID, IID_ISnapshotTakenEvent,0xd27c0b3d,0x6038,0x422c,0xb4,0x5e,0x6d,0x4a,0x05,0x03,0xd9,0xf1);


MIDL_DEFINE_GUID(IID, IID_ISnapshotDeletedEvent,0xc48f3401,0x4a9e,0x43f4,0xb7,0xa7,0x54,0xbd,0x28,0x5e,0x22,0xf4);


MIDL_DEFINE_GUID(IID, IID_ISnapshotChangedEvent,0x07541941,0x8079,0x447a,0xa3,0x3e,0x47,0xa6,0x9c,0x79,0x80,0xdb);


MIDL_DEFINE_GUID(IID, IID_IMousePointerShapeChangedEvent,0xa6dcf6e8,0x416b,0x4181,0x8c,0x4a,0x45,0xec,0x95,0x17,0x7a,0xef);


MIDL_DEFINE_GUID(IID, IID_IMouseCapabilityChangedEvent,0xd633ad48,0x820c,0x4207,0xb4,0x6c,0x6b,0xd3,0x59,0x66,0x40,0xd5);


MIDL_DEFINE_GUID(IID, IID_IKeyboardLedsChangedEvent,0x6DDEF35E,0x4737,0x457B,0x99,0xFC,0xBC,0x52,0xC8,0x51,0xA4,0x4F);


MIDL_DEFINE_GUID(IID, IID_IStateChangedEvent,0x4376693C,0xCF37,0x453B,0x92,0x89,0x3B,0x0F,0x52,0x1C,0xAF,0x27);


MIDL_DEFINE_GUID(IID, IID_IAdditionsStateChangedEvent,0xD70F7915,0xDA7C,0x44C8,0xA7,0xAC,0x9F,0x17,0x34,0x90,0x44,0x6A);


MIDL_DEFINE_GUID(IID, IID_INetworkAdapterChangedEvent,0x08889892,0x1EC6,0x4883,0x80,0x1D,0x77,0xF5,0x6C,0xFD,0x01,0x03);


MIDL_DEFINE_GUID(IID, IID_ISerialPortChangedEvent,0x3BA329DC,0x659C,0x488B,0x83,0x5C,0x4E,0xCA,0x7A,0xE7,0x1C,0x6C);


MIDL_DEFINE_GUID(IID, IID_IParallelPortChangedEvent,0x813C99FC,0x9849,0x4F47,0x81,0x3E,0x24,0xA7,0x5D,0xC8,0x56,0x15);


MIDL_DEFINE_GUID(IID, IID_IStorageControllerChangedEvent,0x715212BF,0xDA59,0x426E,0x82,0x30,0x38,0x31,0xFA,0xA5,0x2C,0x56);


MIDL_DEFINE_GUID(IID, IID_IMediumChangedEvent,0x0FE2DA40,0x5637,0x472A,0x97,0x36,0x72,0x01,0x9E,0xAB,0xD7,0xDE);


MIDL_DEFINE_GUID(IID, IID_IClipboardModeChangedEvent,0xcac21692,0x7997,0x4595,0xa7,0x31,0x3a,0x50,0x9d,0xb6,0x04,0xe5);


MIDL_DEFINE_GUID(IID, IID_IDragAndDropModeChangedEvent,0xe90b8850,0xac8e,0x4dff,0x80,0x59,0x41,0x00,0xae,0x2c,0x3c,0x3d);


MIDL_DEFINE_GUID(IID, IID_ICPUChangedEvent,0x4da2dec7,0x71b2,0x4817,0x9a,0x64,0x4e,0xd1,0x2c,0x17,0x38,0x8e);


MIDL_DEFINE_GUID(IID, IID_ICPUExecutionCapChangedEvent,0xdfa7e4f5,0xb4a4,0x44ce,0x85,0xa8,0x12,0x7a,0xc5,0xeb,0x59,0xdc);


MIDL_DEFINE_GUID(IID, IID_IGuestKeyboardEvent,0x88394258,0x7006,0x40d4,0xb3,0x39,0x47,0x2e,0xe3,0x80,0x18,0x44);


MIDL_DEFINE_GUID(IID, IID_IGuestMouseEvent,0x1f85d35c,0xc524,0x40ff,0x8e,0x98,0x30,0x70,0x00,0xdf,0x09,0x92);


MIDL_DEFINE_GUID(IID, IID_IVRDEServerChangedEvent,0xa06fd66a,0x3188,0x4c8c,0x87,0x56,0x13,0x95,0xe8,0xcb,0x69,0x1c);


MIDL_DEFINE_GUID(IID, IID_IVRDEServerInfoChangedEvent,0xdd6a1080,0xe1b7,0x4339,0xa5,0x49,0xf0,0x87,0x81,0x15,0x59,0x6e);


MIDL_DEFINE_GUID(IID, IID_IUSBControllerChangedEvent,0x93BADC0C,0x61D9,0x4940,0xA0,0x84,0xE6,0xBB,0x29,0xAF,0x3D,0x83);


MIDL_DEFINE_GUID(IID, IID_IUSBDeviceStateChangedEvent,0x806da61b,0x6679,0x422a,0xb6,0x29,0x51,0xb0,0x6b,0x0c,0x6d,0x93);


MIDL_DEFINE_GUID(IID, IID_ISharedFolderChangedEvent,0xB66349B5,0x3534,0x4239,0xB2,0xDE,0x8E,0x15,0x35,0xD9,0x4C,0x0B);


MIDL_DEFINE_GUID(IID, IID_IRuntimeErrorEvent,0x883DD18B,0x0721,0x4CDE,0x86,0x7C,0x1A,0x82,0xAB,0xAF,0x91,0x4C);


MIDL_DEFINE_GUID(IID, IID_IEventSourceChangedEvent,0xe7932cb8,0xf6d4,0x4ab6,0x9c,0xbf,0x55,0x8e,0xb8,0x95,0x9a,0x6a);


MIDL_DEFINE_GUID(IID, IID_IExtraDataChangedEvent,0x024F00CE,0x6E0B,0x492A,0xA8,0xD0,0x96,0x84,0x72,0xA9,0x4D,0xC7);


MIDL_DEFINE_GUID(IID, IID_IVetoEvent,0x9a1a4130,0x69fe,0x472f,0xac,0x10,0xc6,0xfa,0x25,0xd7,0x50,0x07);


MIDL_DEFINE_GUID(IID, IID_IExtraDataCanChangeEvent,0x245d88bd,0x800a,0x40f8,0x87,0xa6,0x17,0x0d,0x02,0x24,0x9a,0x55);


MIDL_DEFINE_GUID(IID, IID_ICanShowWindowEvent,0xadf292b0,0x92c9,0x4a77,0x9d,0x35,0xe0,0x58,0xb3,0x9f,0xe0,0xb9);


MIDL_DEFINE_GUID(IID, IID_IShowWindowEvent,0xB0A0904D,0x2F05,0x4D28,0x85,0x5F,0x48,0x8F,0x96,0xBA,0xD2,0xB2);


MIDL_DEFINE_GUID(IID, IID_INATRedirectEvent,0x24eef068,0xc380,0x4510,0xbc,0x7c,0x19,0x31,0x4a,0x73,0x52,0xf1);


MIDL_DEFINE_GUID(IID, IID_IHostPCIDevicePlugEvent,0xa0bad6df,0xd612,0x47d3,0x89,0xd4,0xdb,0x39,0x92,0x53,0x39,0x48);


MIDL_DEFINE_GUID(IID, IID_IVBoxSVCAvailabilityChangedEvent,0x97c78fcd,0xd4fc,0x485f,0x86,0x13,0x5a,0xf8,0x8b,0xfc,0xfc,0xdc);


MIDL_DEFINE_GUID(IID, IID_IBandwidthGroupChangedEvent,0x334df94a,0x7556,0x4cbc,0x8c,0x04,0x04,0x30,0x96,0xb0,0x2d,0x82);


MIDL_DEFINE_GUID(IID, IID_IGuestMonitorChangedEvent,0x0f7b8a22,0xc71f,0x4a36,0x8e,0x5f,0xa7,0x7d,0x01,0xd7,0x60,0x90);


MIDL_DEFINE_GUID(IID, IID_IStorageDeviceChangedEvent,0x8a5c2dce,0xe341,0x49d4,0xaf,0xce,0xc9,0x59,0x79,0xf7,0xd7,0x0c);


MIDL_DEFINE_GUID(CLSID, CLSID_VirtualBox,0xB1A7A4F2,0x47B9,0x4A1E,0x82,0xB2,0x07,0xCC,0xD5,0x32,0x3C,0x3F);


MIDL_DEFINE_GUID(CLSID, CLSID_VirtualBoxClient,0xdd3fc71d,0x26c0,0x4fe1,0xbf,0x6f,0x67,0xf6,0x33,0x26,0x5b,0xba);


MIDL_DEFINE_GUID(CLSID, CLSID_Session,0x3C02F46D,0xC9D2,0x4F11,0xA3,0x84,0x53,0xF0,0xCF,0x91,0x72,0x14);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif


