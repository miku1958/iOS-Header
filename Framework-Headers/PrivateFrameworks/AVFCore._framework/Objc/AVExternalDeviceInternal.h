//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVDispatchOnce, AVWeakReference, NSArray, NSData, NSMutableDictionary;
@protocol AVExternalDeviceDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVExternalDeviceInternal : NSObject
{
    struct OpaqueFigEndpoint *_figEndpoint;
    id<AVExternalDeviceDelegate> _delegate;
    AVWeakReference *_weakReference;
    NSArray *_HIDs;
    AVDispatchOnce *_makeHIDsOnlyOnce;
    NSData *_MFiCertSerial;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_oemIcons;
    NSArray *_screenInfo;
    NSObject<OS_dispatch_queue> *_viewAreasQueue;
    NSMutableDictionary *_currentViewAreas;
    AVDispatchOnce *_makeIconsOnlyOnce;
}

@end

