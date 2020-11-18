//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVCaptureOutput.h>

#import <AVFoundation/AVCaptureDataOutputDelegateOverride-Protocol.h>

@class AVCaptureDepthDataOutputInternal, NSObject, NSString;
@protocol AVCaptureDepthDataOutputDelegate, OS_dispatch_queue;

@interface AVCaptureDepthDataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride>
{
    AVCaptureDepthDataOutputInternal *_internal;
}

@property (nonatomic) BOOL alwaysDiscardsLateDepthData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<AVCaptureDepthDataOutputDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property (readonly, nonatomic) id delegateOverride;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFilteringEnabled) BOOL filteringEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)new;
- (id)addConnection:(id)arg1 error:(id *)arg2;
- (BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)arg1;
- (BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)arg1;
- (BOOL)canAddConnectionForMediaType:(id)arg1;
- (id)connectionMediaTypes;
- (void)dealloc;
- (id)init;
- (void)removeConnection:(id)arg1;
- (void)setDelegate:(id)arg1 callbackQueue:(id)arg2;
- (void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(id)arg2;

@end

