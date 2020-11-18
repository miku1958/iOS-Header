//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraKit/CMKCameraView.h>

#import <PhotoLibrary/PLVideoViewDelegate-Protocol.h>

@class CMKStillImageCaptureResponse, NSDictionary, NSString, PLCropOverlay, PLPhotoTileViewController, PLVideoView, UIView;

@interface PLImagePickerCameraView : CMKCameraView <PLVideoViewDelegate>
{
    BOOL _allowsEditing;
    BOOL _showsCropRegion;
    BOOL _displayedInPopover;
    BOOL _cropOverlayUsesTelephonyUI;
    BOOL _wantsImageData;
    BOOL __manipulatingCrop;
    BOOL __shouldSkipPostcaptureReview;
    BOOL __retakingPhoto;
    int _photoSavingOptions;
    int __enabledGestures;
    int __windowEdgeClip;
    NSDictionary *_imagePickerOptions;
    PLPhotoTileViewController *_tileViewController;
    CMKStillImageCaptureResponse *__mostRecentCaptureResponse;
    PLCropOverlay *__cropOverlay;
    PLVideoView *__videoView;
}

@property (readonly, nonatomic) PLCropOverlay *_cropOverlay; // @synthesize _cropOverlay=__cropOverlay;
@property (nonatomic, setter=_setEnabledGestures:) int _enabledGestures; // @synthesize _enabledGestures=__enabledGestures;
@property (nonatomic, getter=_isManipulatingCrop, setter=_setManipulatingCrop:) BOOL _manipulatingCrop; // @synthesize _manipulatingCrop=__manipulatingCrop;
@property (readonly, nonatomic) CMKStillImageCaptureResponse *_mostRecentCaptureResponse; // @synthesize _mostRecentCaptureResponse=__mostRecentCaptureResponse;
@property (nonatomic, getter=_isRetakingPhoto, setter=_setRetakingPhoto:) BOOL _retakingPhoto; // @synthesize _retakingPhoto=__retakingPhoto;
@property (readonly, nonatomic) BOOL _shouldSkipPostcaptureReview; // @synthesize _shouldSkipPostcaptureReview=__shouldSkipPostcaptureReview;
@property (readonly, nonatomic) PLVideoView *_videoView; // @synthesize _videoView=__videoView;
@property (nonatomic, setter=_setWindowEdgeClip:) int _windowEdgeClip; // @synthesize _windowEdgeClip=__windowEdgeClip;
@property (nonatomic) BOOL allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property (nonatomic) BOOL controlsAreVisible; // @dynamic controlsAreVisible;
@property (nonatomic) BOOL cropOverlayUsesTelephonyUI; // @synthesize cropOverlayUsesTelephonyUI=_cropOverlayUsesTelephonyUI;
@property (strong, nonatomic) UIView *customOverlayView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisplayedInPopover) BOOL displayedInPopover; // @synthesize displayedInPopover=_displayedInPopover;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSDictionary *imagePickerOptions; // @synthesize imagePickerOptions=_imagePickerOptions;
@property (nonatomic) int photoSavingOptions; // @synthesize photoSavingOptions=_photoSavingOptions;
@property (nonatomic) BOOL showsCropRegion; // @synthesize showsCropRegion=_showsCropRegion;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PLPhotoTileViewController *tileViewController; // @synthesize tileViewController=_tileViewController;
@property (nonatomic) BOOL wantsImageData; // @synthesize wantsImageData=_wantsImageData;

- (BOOL)_allowsVideoEditing;
- (struct CGRect)_bottomBarFrame;
- (void)_createCropOverlayIfNecessary;
- (struct CGSize)_displaySizeForPreviewForCameraMode:(long long)arg1;
- (BOOL)_isLockedToPortraitOrientation;
- (void)_previewVideoAtPath:(id)arg1;
- (void)_resetImageTile;
- (BOOL)_shouldBlurWhenSessionStops;
- (BOOL)_shouldHideCancelButton;
- (BOOL)_shouldPausePreviewDuringCapture;
- (BOOL)_shouldStartPreviewWhenApplicationBecomesActive;
- (BOOL)_supportsPreviewingAfterCapture;
- (void)_updateImageEditability;
- (BOOL)_wantsCaptureAnimations;
- (BOOL)_wantsForcedPreviewAspectRatio;
- (BOOL)_wantsFullScreenPreview;
- (BOOL)_wantsOrientationAnimations;
- (BOOL)_wantsPreviewSizeAdjustmentForBars;
- (BOOL)_wantsSuspensionBlurs;
- (void)cameraControllerPreviewDidStart:(id)arg1;
- (void)captureController:(id)arg1 didCompleteResponse:(id)arg2 forStillImageRequest:(id)arg3 error:(id)arg4;
- (void)captureController:(id)arg1 didStopRecordingForVideoRequest:(id)arg2;
- (void)cropOverlay:(id)arg1 didFinishSaving:(id)arg2;
- (void)cropOverlayPause:(id)arg1;
- (void)cropOverlayPlay:(id)arg1;
- (void)cropOverlayWasCancelled:(id)arg1;
- (void)cropOverlayWasOKed:(id)arg1;
- (void)cropOverlayWasToggled:(id)arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 spec:(id)arg2;
- (void)performPostcapturePreviewForVideoAtPath:(id)arg1;
- (BOOL)photoTileViewControllerIsDisplayingLandscape:(id)arg1;
- (void)setAllowsImageEditing:(BOOL)arg1;
- (void)setAllowsMultipleModes:(BOOL)arg1;
- (void)verifyViewOrdering;
- (BOOL)videoViewCanBeginPlayback:(id)arg1;
- (void)videoViewDidBeginPlayback:(id)arg1;
- (void)videoViewDidEndPlayback:(id)arg1 didFinish:(BOOL)arg2;
- (void)videoViewDidPausePlayback:(id)arg1;
- (void)videoViewIsReadyToBeginPlayback:(id)arg1;
- (double)videoViewScrubberYOrigin:(id)arg1 forOrientation:(long long)arg2;
- (void)viewWillBeDisplayed;

@end

