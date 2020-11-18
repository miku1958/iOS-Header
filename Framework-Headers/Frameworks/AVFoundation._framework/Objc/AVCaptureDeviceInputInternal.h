//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptureDevice, AVWeakReference, NSArray;
@protocol AVCallbackCancellation;

@interface AVCaptureDeviceInputInternal : NSObject
{
    AVCaptureDevice *device;
    NSArray *ports;
    BOOL ready;
    BOOL builtInMicrophoneStereoAudioCaptureEnabled;
    float simulatedAperture;
    BOOL unifiedAutoExposureDefaultsEnabled;
    BOOL visionDataDeliveryEnabled;
    AVWeakReference *weakReference;
    id<AVCallbackCancellation> deviceOpenCallbackInvoker;
}

- (void)dealloc;

@end

