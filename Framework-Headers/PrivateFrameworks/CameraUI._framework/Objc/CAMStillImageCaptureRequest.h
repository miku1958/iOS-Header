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
#import <CameraUI/CAMPossibleOriginalRequest-Protocol.h>
#import <CameraUI/CAMTimelapseRequest-Protocol.h>
#import <CameraUI/NSCopying-Protocol.h>
#import <CameraUI/NSMutableCopying-Protocol.h>

@class NSString, NSURL;
@protocol CAMStillImageCaptureRequestDelegate;

@interface CAMStillImageCaptureRequest : CAMCaptureRequest <CAMPossibleOriginalRequest, CAMEffectFilterTypeProvider, CAMBurstIdentifierProvider, NSCopying, NSMutableCopying, CAMBurstRequest, CAMIrisRequest, CAMTimelapseRequest>
{
    NSString *_originalPersistenceUUID;
    NSString *_timelapseIdentifier;
    long long _effectFilterType;
    unsigned long long _maximumBurstLength;
    long long _flashMode;
    long long _hdrMode;
    long long _irisMode;
    BOOL _wantsPortraitEffect;
    BOOL _usesStillImageStabilization;
    BOOL _wantsAutoDuoImageFusion;
    BOOL _wantsAudioForCapture;
    BOOL _wantsSquareCrop;
    BOOL _wantsHighResolutionStills;
    struct CGSize _desiredPreviewSize;
    NSString *_burstIdentifier;
    NSString *_irisIdentifier;
    NSURL *_localVideoDestinationURL;
    NSString *_videoPersistenceUUID;
    NSString *_originalIrisIdentifier;
    NSURL *_originalLocalVideoDestinationURL;
    NSString *_originalVideoPersistenceUUID;
    id<CAMStillImageCaptureRequestDelegate> _delegate;
}

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
@property (readonly, copy, nonatomic) NSURL *localVideoDestinationURL; // @synthesize localVideoDestinationURL=_localVideoDestinationURL;
@property (readonly, nonatomic) unsigned long long maximumBurstLength; // @synthesize maximumBurstLength=_maximumBurstLength;
@property (readonly, copy, nonatomic) NSString *originalIrisIdentifier; // @synthesize originalIrisIdentifier=_originalIrisIdentifier;
@property (readonly, copy, nonatomic) NSURL *originalLocalVideoDestinationURL; // @synthesize originalLocalVideoDestinationURL=_originalLocalVideoDestinationURL;
@property (readonly, copy, nonatomic) NSString *originalPersistenceUUID; // @synthesize originalPersistenceUUID=_originalPersistenceUUID;
@property (readonly, copy, nonatomic) NSString *originalVideoPersistenceUUID; // @synthesize originalVideoPersistenceUUID=_originalVideoPersistenceUUID;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *timelapseIdentifier; // @synthesize timelapseIdentifier=_timelapseIdentifier;
@property (readonly, nonatomic) BOOL usesStillImageStabilization; // @synthesize usesStillImageStabilization=_usesStillImageStabilization;
@property (readonly, copy, nonatomic) NSString *videoPersistenceUUID; // @synthesize videoPersistenceUUID=_videoPersistenceUUID;
@property (readonly, nonatomic) BOOL wantsAudioForCapture; // @synthesize wantsAudioForCapture=_wantsAudioForCapture;
@property (readonly, nonatomic) BOOL wantsAutoDuoImageFusion; // @synthesize wantsAutoDuoImageFusion=_wantsAutoDuoImageFusion;
@property (readonly, nonatomic) BOOL wantsHighResolutionStills; // @synthesize wantsHighResolutionStills=_wantsHighResolutionStills;
@property (readonly, nonatomic) BOOL wantsPortraitEffect; // @synthesize wantsPortraitEffect=_wantsPortraitEffect;
@property (readonly, nonatomic) BOOL wantsSquareCrop; // @synthesize wantsSquareCrop=_wantsSquareCrop;

- (void).cxx_destruct;
- (id)captureRequest;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithRequest:(id)arg1 distinctPersistence:(BOOL)arg2;
- (id)irisIdentifierForOriginal:(BOOL)arg1;
- (id)irisLocalVideoDestinationURLForOriginal:(BOOL)arg1;
- (id)irisStillImagePersistenceUUIDForOriginal:(BOOL)arg1;
- (id)irisVideoPersistenceUUIDForOriginal:(BOOL)arg1;
- (BOOL)isOriginalLocalVideoDestinationURL:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (BOOL)shouldPersistToLivePhotoDirectory;

@end

