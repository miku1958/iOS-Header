//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;
@protocol OS_dispatch_semaphore;

@interface CMDeviceOrientationManagerInternal : NSObject
{
    struct os_unfair_lock_s fSampleLock;
    struct Dispatcher *fDeviceOrientationDispatcher;
    CDUnknownBlockType fDeviceOrientationHandler;
    NSOperationQueue *fDeviceOrientationQueue;
    NSObject<OS_dispatch_semaphore> *fDeviceOrientationSemaphore;
    BOOL fDidSignalSemaphore;
    int fOrientationCallbackMode;
    BOOL fEnableOrientationNotification;
    Sample_edc72402 fLatestDeviceOrientationSample;
    Sample_edc72402 fLastSignificantOrientationSample;
}

- (void)dealloc;
- (id)init;

@end

