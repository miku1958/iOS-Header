//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMStillImageCaptureRequest.h>

#import <CameraUI/CAMMutableCaptureRequestLocation-Protocol.h>
#import <CameraUI/CAMMutableCaptureRequestOrigin-Protocol.h>
#import <CameraUI/CAMMutableCaptureRequestPersistence-Protocol.h>
#import <CameraUI/CAMMutableCaptureRequestPower-Protocol.h>

@class CLLocation, NSString, NSURL;
@protocol CAMStillImageCaptureRequestDelegate;

@interface CAMMutableStillImageCaptureRequest : CAMStillImageCaptureRequest <CAMMutableCaptureRequestPersistence, CAMMutableCaptureRequestLocation, CAMMutableCaptureRequestPower, CAMMutableCaptureRequestOrigin>
{
}

@property (nonatomic) unsigned int assertionIdentifier;
@property (copy, nonatomic) NSString *burstIdentifier; // @dynamic burstIdentifier;
@property (nonatomic) long long captureDevice; // @dynamic captureDevice;
@property (nonatomic) long long captureMode; // @dynamic captureMode;
@property (nonatomic) long long captureOrientation; // @dynamic captureOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long deferredPersistenceOptions;
@property (weak, nonatomic) id<CAMStillImageCaptureRequestDelegate> delegate; // @dynamic delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize desiredPreviewSize; // @dynamic desiredPreviewSize;
@property (nonatomic) long long effectFilterType; // @dynamic effectFilterType;
@property (nonatomic) long long flashMode; // @dynamic flashMode;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long hdrMode; // @dynamic hdrMode;
@property (copy, nonatomic) NSString *irisIdentifier; // @dynamic irisIdentifier;
@property (nonatomic) long long irisMode; // @dynamic irisMode;
@property (copy, nonatomic) NSURL *localDestinationURL;
@property (copy, nonatomic) NSURL *localVideoDestinationURL; // @dynamic localVideoDestinationURL;
@property (strong, nonatomic) CLLocation *location;
@property (nonatomic) double loggingVideoZoomFactor; // @dynamic loggingVideoZoomFactor;
@property (nonatomic) unsigned long long maximumBurstLength; // @dynamic maximumBurstLength;
@property (nonatomic) long long origin;
@property (copy, nonatomic) NSString *originalIrisIdentifier; // @dynamic originalIrisIdentifier;
@property (copy, nonatomic) NSURL *originalLocalVideoDestinationURL; // @dynamic originalLocalVideoDestinationURL;
@property (copy, nonatomic) NSString *originalPersistenceUUID; // @dynamic originalPersistenceUUID;
@property (copy, nonatomic) NSString *originalVideoPersistenceUUID; // @dynamic originalVideoPersistenceUUID;
@property (nonatomic) long long persistenceOptions;
@property (copy, nonatomic) NSString *persistenceUUID;
@property (nonatomic) long long physicalButtonType; // @dynamic physicalButtonType;
@property (nonatomic) unsigned short sessionIdentifier; // @dynamic sessionIdentifier;
@property (nonatomic) BOOL shouldDelayRemotePersistence;
@property (nonatomic) BOOL shouldExtractDiagnosticsFromMetadata;
@property (nonatomic) BOOL shouldPersistDiagnosticsToSidecar;
@property (readonly) Class superclass;
@property (nonatomic) long long temporaryPersistenceOptions;
@property (copy, nonatomic) NSString *timelapseIdentifier; // @dynamic timelapseIdentifier;
@property (nonatomic) unsigned long long userInitiationTime; // @dynamic userInitiationTime;
@property (nonatomic) BOOL usesStillImageStabilization; // @dynamic usesStillImageStabilization;
@property (copy, nonatomic) NSString *videoPersistenceUUID; // @dynamic videoPersistenceUUID;
@property (nonatomic) BOOL wantsAudioForCapture; // @dynamic wantsAudioForCapture;
@property (nonatomic) BOOL wantsAutoDualCameraFusion; // @dynamic wantsAutoDualCameraFusion;
@property (nonatomic) BOOL wantsHighResolutionStills; // @dynamic wantsHighResolutionStills;
@property (nonatomic) BOOL wantsPortraitEffect; // @dynamic wantsPortraitEffect;
@property (nonatomic) BOOL wantsSquareCrop; // @dynamic wantsSquareCrop;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)setCapturedFromPhotoBooth:(BOOL)arg1;

@end

