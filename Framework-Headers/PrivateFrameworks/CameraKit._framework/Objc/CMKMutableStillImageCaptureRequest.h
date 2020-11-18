//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraKit/CMKStillImageCaptureRequest.h>

@protocol CMKStillImageCaptureRequestDelegate;

@interface CMKMutableStillImageCaptureRequest : CMKStillImageCaptureRequest
{
}

@property (nonatomic) long long captureDevice; // @dynamic captureDevice;
@property (weak, nonatomic) id<CMKStillImageCaptureRequestDelegate> delegate; // @dynamic delegate;
@property (nonatomic) long long deviceOrientation; // @dynamic deviceOrientation;
@property (nonatomic) long long flashMode; // @dynamic flashMode;
@property (nonatomic) int hdrMode; // @dynamic hdrMode;
@property (nonatomic, getter=isTransient) BOOL transient; // @dynamic transient;
@property (nonatomic) BOOL usesStillImageStabilization; // @dynamic usesStillImageStabilization;
@property (nonatomic) BOOL wantsAudioForCapture; // @dynamic wantsAudioForCapture;

- (void)setParameter:(id)arg1 forKey:(id)arg2;

@end
