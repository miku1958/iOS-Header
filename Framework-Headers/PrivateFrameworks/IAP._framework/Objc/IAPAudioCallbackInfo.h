//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPDistributedNotificationCenter, NSLock;

@interface IAPAudioCallbackInfo : NSObject
{
    CDUnknownFunctionPointerType _deviceStateChangedCallback;
    void *_deviceStateChangedContext;
    CDUnknownFunctionPointerType _volumeChangedCallback;
    void *_volumeChangedContext;
    CDUnknownFunctionPointerType _pauseOnHeadphoneDisconnectChangedCallback;
    void *_pauseOnHeadphoneDisconnectChangedContext;
    CDUnknownFunctionPointerType _volumeControlSupportChangedCallback;
    void *_volumeControlSupportChangedContext;
    CPDistributedNotificationCenter *_dnCenter;
    CPDistributedNotificationCenter *_dnCenteriAP2;
    NSLock *_lock;
}

+ (id)sharedInstance;
- (void)_deviceStateChanged:(id)arg1;
- (void)_handleiAPDaemonDied:(id)arg1;
- (void)_pauseOnHeadphoneDisconnectChanged:(id)arg1;
- (void)_volumeChanged:(id)arg1;
- (void)_volumeControlSupportChanged:(id)arg1;
- (void)clearDeviceStateChangedCallback;
- (void)clearPauseOnHeadphoneDisconnectChangedCallback;
- (void)clearVolumeChangedCallback;
- (void)clearVolumeControlSupportChangedCallback;
- (void)dealloc;
- (id)init;
- (void)setupDeviceStateChangedCallback:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2 andRunLoop:(struct __CFRunLoop *)arg3;
- (void)setupPauseOnHeadphoneDisconnectChangedCallback:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2 andRunLoop:(struct __CFRunLoop *)arg3;
- (void)setupVolumeChangedCallback:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2 andRunLoop:(struct __CFRunLoop *)arg3;
- (void)setupVolumeControlSupportChangedCallback:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2 andRunLoop:(struct __CFRunLoop *)arg3;
- (void)startNotificationCenterOnRunLoop:(struct __CFRunLoop *)arg1;

@end
