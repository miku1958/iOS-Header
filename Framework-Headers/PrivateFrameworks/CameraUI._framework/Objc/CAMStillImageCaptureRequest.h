//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMCaptureRequest.h>

#import <CameraUI/CAMBurstIdentifierProvider-Protocol.h>
#import <CameraUI/CAMBurstRequest-Protocol.h>
#import <CameraUI/CAMEffectFilterTypeProvider-Protocol.h>
#import <CameraUI/CAMIrisRequest-Protocol.h>
#import <CameraUI/CAMTimelapseRequest-Protocol.h>
#import <CameraUI/NSCopying-Protocol.h>
#import <CameraUI/NSMutableCopying-Protocol.h>

@class NSArray, NSString, NSURL;
@protocol CAMStillImageCaptureRequestDelegate;

@interface CAMStillImageCaptureRequest : CAMCaptureRequest <CAMEffectFilterTypeProvider, CAMBurstIdentifierProvider, NSCopying, NSMutableCopying, CAMBurstRequest, CAMIrisRequest, CAMTimelapseRequest>
{
    NSString *_EV0PersistenceUUID;
    NSString *_timelapseIdentifier;
    long long _effectFilterType;
    long long _lightingEffectType;
    unsigned long long _maximumBurstLength;
    long long _flashMode;
    long long _hdrMode;
    long long _irisMode;
    BOOL _wantsPortraitEffect;
    NSArray *_adjustmentFilters;
    NSArray *_originalFilters;
    BOOL _usesStillImageStabilization;
    BOOL _wantsAutoDualCameraFusion;
    BOOL _wantsAudioForCapture;
    BOOL _wantsSquareCrop;
    BOOL _wantsHighResolutionStills;
    struct CGSize _desiredPreviewSize;
    NSString *_burstIdentifier;
    NSString *_irisIdentifier;
    NSURL *_localVideoDestinationURL;
    NSString *_videoPersistenceUUID;
    NSString *_EV0IrisIdentifier;
    NSURL *_EV0LocalVideoDestinationURL;
    NSString *_EV0VideoPersistenceUUID;
    unsigned long long _userInitiationTime;
    double _loggingVideoZoomFactor;
    id<CAMStillImageCaptureRequestDelegate> _delegate;
}

@property (readonly, copy, nonatomic) NSString *EV0IrisIdentifier; // @synthesize EV0IrisIdentifier=_EV0IrisIdentifier;
@property (readonly, copy, nonatomic) NSURL *EV0LocalVideoDestinationURL; // @synthesize EV0LocalVideoDestinationURL=_EV0LocalVideoDestinationURL;
@property (readonly, copy, nonatomic) NSString *EV0PersistenceUUID; // @synthesize EV0PersistenceUUID=_EV0PersistenceUUID;
@property (readonly, copy, nonatomic) NSString *EV0VideoPersistenceUUID; // @synthesize EV0VideoPersistenceUUID=_EV0VideoPersistenceUUID;
@property (readonly, nonatomic) NSArray *adjustmentFilters; // @synthesize adjustmentFilters=_adjustmentFilters;
@property (readonly, copy, nonatomic) NSString *burstIdentifier; // @synthesize burstIdentifier=_burstIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<CAMStillImageCaptureRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) struct CGSize desiredPreviewSize; // @synthesize desiredPreviewSize=_desiredPreviewSize;
@property (readonly, nonatomic) long long effectFilterType; // @synthesize effectFilterType=_effectFilterType;
@property (readonly, nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long hdrMode; // @synthesize hdrMode=_hdrMode;
@property (readonly, copy, nonatomic) NSString *irisIdentifier; // @synthesize irisIdentifier=_irisIdentifier;
@property (readonly, nonatomic) long long irisMode; // @synthesize irisMode=_irisMode;
@property (readonly, nonatomic) long long lightingEffectType; // @synthesize lightingEffectType=_lightingEffectType;
@property (readonly, copy, nonatomic) NSURL *localVideoDestinationURL; // @synthesize localVideoDestinationURL=_localVideoDestinationURL;
@property (readonly, nonatomic) double loggingVideoZoomFactor; // @synthesize loggingVideoZoomFactor=_loggingVideoZoomFactor;
@property (readonly, nonatomic) unsigned long long maximumBurstLength; // @synthesize maximumBurstLength=_maximumBurstLength;
@property (readonly, nonatomic) NSArray *originalFilters; // @synthesize originalFilters=_originalFilters;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *timelapseIdentifier; // @synthesize timelapseIdentifier=_timelapseIdentifier;
@property (readonly, nonatomic) unsigned long long userInitiationTime; // @synthesize userInitiationTime=_userInitiationTime;
@property (readonly, nonatomic) BOOL usesStillImageStabilization; // @synthesize usesStillImageStabilization=_usesStillImageStabilization;
@property (readonly, copy, nonatomic) NSString *videoPersistenceUUID; // @synthesize videoPersistenceUUID=_videoPersistenceUUID;
@property (readonly, nonatomic) BOOL wantsAudioForCapture; // @synthesize wantsAudioForCapture=_wantsAudioForCapture;
@property (readonly, nonatomic) BOOL wantsAutoDualCameraFusion; // @synthesize wantsAutoDualCameraFusion=_wantsAutoDualCameraFusion;
@property (readonly, nonatomic) BOOL wantsHighResolutionStills; // @synthesize wantsHighResolutionStills=_wantsHighResolutionStills;
@property (readonly, nonatomic) BOOL wantsPortraitEffect; // @synthesize wantsPortraitEffect=_wantsPortraitEffect;
@property (readonly, nonatomic) BOOL wantsSquareCrop; // @synthesize wantsSquareCrop=_wantsSquareCrop;

- (void).cxx_destruct;
- (id)captureRequest;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithRequest:(id)arg1 distinctPersistence:(BOOL)arg2;
- (id)irisIdentifierForEV0:(BOOL)arg1;
- (id)irisLocalVideoDestinationURLForEV0:(BOOL)arg1;
- (id)irisStillImagePersistenceUUIDForEV0:(BOOL)arg1;
- (id)irisVideoPersistenceUUIDForEV0:(BOOL)arg1;
- (BOOL)isEV0LocalVideoDestinationURL:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (BOOL)shouldPersistToLivePhotoDirectory;

@end

