//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptureDeviceInput;

@interface AVCaptureDeviceInternal : NSObject
{
    int openRefCount;
    int configLockRefCount;
    int configLockPid;
    BOOL usingDevice;
    AVCaptureDeviceInput *activeInput;
}

@end

