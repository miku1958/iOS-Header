//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/PULivePhotoKeyFrameSelectionViewControllerDelegate-Protocol.h>
#import <PhotosUI/PXLivePhotoTrimScrubberDelegate-Protocol.h>
#import <PhotosUI/PXSlowMotionEditorDelegate-Protocol.h>
#import <PhotosUI/PXTrimToolPlayerObserver-Protocol.h>
#import <PhotosUI/UIPopoverPresentationControllerDelegate-Protocol.h>

@class AVPlayerItem, NSLayoutConstraint, NSNumber, NSString, PICompositionController, PLEditSource, PLPhotoEditRenderer, PULivePhotoKeyFrameSelectionViewController, PUTimeCodeOverlayView, PXLivePhotoTrimScrubber, PXLivePhotoTrimScrubberSnapStripController, PXLivePhotoTrimScrubberSpec, PXSlowMotionEditor, UIButton, UIImage, UILabel, UIView, UIVisualEffectView;
@protocol PUTrimToolControllerDelegate, PXTrimToolPlayerWrapper;

__attribute__((visibility("hidden")))
@interface PUTrimToolController : UIViewController <PXTrimToolPlayerObserver, PXLivePhotoTrimScrubberDelegate, UIPopoverPresentationControllerDelegate, PULivePhotoKeyFrameSelectionViewControllerDelegate, PXSlowMotionEditorDelegate>
{
    PXLivePhotoTrimScrubber *_trimScrubber;
    PXSlowMotionEditor *_slomoView;
    BOOL _needsUpdateRenderForVisualChanges;
    PUTimeCodeOverlayView *_timeCodeOverlayView;
    NSLayoutConstraint *_timeCodeHorizontalConstraint;
    PXLivePhotoTrimScrubberSpec *_spec;
    BOOL _disabled;
    BOOL _slomoEnabled;
    BOOL _slomoDraggingStartHandle;
    BOOL _playButtonEnabled;
    UIButton *_playPauseButton;
    id<PUTrimToolControllerDelegate> _delegate;
    id<PXTrimToolPlayerWrapper> _playerWrapper;
    PICompositionController *_compositionController;
    unsigned long long _state;
    PLEditSource *_editSource;
    PLEditSource *_overcaptureEditSource;
    UIVisualEffectView *_auxilaryContainerView;
    UIVisualEffectView *_scrubberPlayButtonContainerView;
    NSLayoutConstraint *_scrubberContainerToAuxiliaryContainerConstraint;
    PULivePhotoKeyFrameSelectionViewController *_livePhotoKeyFramePicker;
    PLPhotoEditRenderer *__renderer;
    AVPlayerItem *_currentVideoPlayerItem;
    PXLivePhotoTrimScrubberSnapStripController *_snapStripController;
    unsigned long long _playheadStyle;
    unsigned long long _internalState;
    NSNumber *_slomoTimeForPlayheadUpdate;
    UILabel *_debugTimeCodeLabel;
    UILabel *_debugPlayerTimeLabel;
    UILabel *_debugOriginalTimeLabel;
    UILabel *_debugTrimToolStateLabel;
    UILabel *_debugTrimToolPlayheadStyleLabel;
    UIView *_debugStartRectView;
    UIView *_debugEndRectView;
    UIView *_debugStartOffsetView;
    UIView *_debugEndOffsetView;
    CDStruct_1b6d18a9 _unadjustedStillImageTime;
    CDStruct_1b6d18a9 _originalStartTime;
    CDStruct_1b6d18a9 _originalEndTime;
    CDStruct_1b6d18a9 _suggestedKeyFrameTime;
    CDStruct_1b6d18a9 _cachedFrameDuration;
    CDStruct_1b6d18a9 _unadjustedAssetDuration;
    CDStruct_1b6d18a9 _debugPlayerTime;
}

@property (strong, nonatomic, setter=_setRenderer:) PLPhotoEditRenderer *_renderer; // @synthesize _renderer=__renderer;
@property (nonatomic) CDStruct_1b6d18a9 adjustedStillFrameTime;
@property (strong, nonatomic) UIVisualEffectView *auxilaryContainerView; // @synthesize auxilaryContainerView=_auxilaryContainerView;
@property (nonatomic) CDStruct_1b6d18a9 cachedFrameDuration; // @synthesize cachedFrameDuration=_cachedFrameDuration;
@property (strong, nonatomic) PICompositionController *compositionController; // @synthesize compositionController=_compositionController;
@property (readonly, nonatomic) CDStruct_1b6d18a9 currentStillFrameTime;
@property (strong, nonatomic) AVPlayerItem *currentVideoPlayerItem; // @synthesize currentVideoPlayerItem=_currentVideoPlayerItem;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) UIView *debugEndOffsetView; // @synthesize debugEndOffsetView=_debugEndOffsetView;
@property (strong, nonatomic) UIView *debugEndRectView; // @synthesize debugEndRectView=_debugEndRectView;
@property (strong, nonatomic) UILabel *debugOriginalTimeLabel; // @synthesize debugOriginalTimeLabel=_debugOriginalTimeLabel;
@property (nonatomic) CDStruct_1b6d18a9 debugPlayerTime; // @synthesize debugPlayerTime=_debugPlayerTime;
@property (strong, nonatomic) UILabel *debugPlayerTimeLabel; // @synthesize debugPlayerTimeLabel=_debugPlayerTimeLabel;
@property (strong, nonatomic) UIView *debugStartOffsetView; // @synthesize debugStartOffsetView=_debugStartOffsetView;
@property (strong, nonatomic) UIView *debugStartRectView; // @synthesize debugStartRectView=_debugStartRectView;
@property (strong, nonatomic) UILabel *debugTimeCodeLabel; // @synthesize debugTimeCodeLabel=_debugTimeCodeLabel;
@property (strong, nonatomic) UILabel *debugTrimToolPlayheadStyleLabel; // @synthesize debugTrimToolPlayheadStyleLabel=_debugTrimToolPlayheadStyleLabel;
@property (strong, nonatomic) UILabel *debugTrimToolStateLabel; // @synthesize debugTrimToolStateLabel=_debugTrimToolStateLabel;
@property (weak, nonatomic) id<PUTrimToolControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disabled; // @synthesize disabled=_disabled;
@property (strong, nonatomic) PLEditSource *editSource; // @synthesize editSource=_editSource;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long internalState; // @synthesize internalState=_internalState;
@property (weak, nonatomic) PULivePhotoKeyFrameSelectionViewController *livePhotoKeyFramePicker; // @synthesize livePhotoKeyFramePicker=_livePhotoKeyFramePicker;
@property (nonatomic) CDStruct_1b6d18a9 originalEndTime; // @synthesize originalEndTime=_originalEndTime;
@property (nonatomic) CDStruct_1b6d18a9 originalStartTime; // @synthesize originalStartTime=_originalStartTime;
@property (strong, nonatomic) PLEditSource *overcaptureEditSource; // @synthesize overcaptureEditSource=_overcaptureEditSource;
@property (strong, nonatomic) UIImage *placeholderImage;
@property (readonly, nonatomic) BOOL playButtonEnabled; // @synthesize playButtonEnabled=_playButtonEnabled;
@property (readonly, nonatomic) UIButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property (readonly, nonatomic) id<PXTrimToolPlayerWrapper> playerWrapper; // @synthesize playerWrapper=_playerWrapper;
@property (nonatomic) unsigned long long playheadStyle; // @synthesize playheadStyle=_playheadStyle;
@property (nonatomic) CDStruct_1b6d18a9 playheadTime;
@property (strong, nonatomic) NSLayoutConstraint *scrubberContainerToAuxiliaryContainerConstraint; // @synthesize scrubberContainerToAuxiliaryContainerConstraint=_scrubberContainerToAuxiliaryContainerConstraint;
@property (readonly, nonatomic) double scrubberHeight;
@property (strong, nonatomic) UIVisualEffectView *scrubberPlayButtonContainerView; // @synthesize scrubberPlayButtonContainerView=_scrubberPlayButtonContainerView;
@property (nonatomic) BOOL slomoDraggingStartHandle; // @synthesize slomoDraggingStartHandle=_slomoDraggingStartHandle;
@property (readonly, nonatomic, getter=isSlomoEnabled) BOOL slomoEnabled; // @synthesize slomoEnabled=_slomoEnabled;
@property (strong, nonatomic) NSNumber *slomoTimeForPlayheadUpdate; // @synthesize slomoTimeForPlayheadUpdate=_slomoTimeForPlayheadUpdate;
@property (strong, nonatomic) PXLivePhotoTrimScrubberSnapStripController *snapStripController; // @synthesize snapStripController=_snapStripController;
@property (readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property (nonatomic) CDStruct_1b6d18a9 suggestedKeyFrameTime; // @synthesize suggestedKeyFrameTime=_suggestedKeyFrameTime;
@property (readonly) Class superclass;
@property (nonatomic) CDStruct_1b6d18a9 unadjustedAssetDuration; // @synthesize unadjustedAssetDuration=_unadjustedAssetDuration;
@property (nonatomic) CDStruct_1b6d18a9 unadjustedStillImageTime; // @synthesize unadjustedStillImageTime=_unadjustedStillImageTime;

- (void).cxx_destruct;
- (BOOL)_allowsKeyFrameCreation;
- (void)_createRendererIfNeeded;
- (CDStruct_1b6d18a9)_currentPlayerScaledTimeFromOriginalTime:(CDStruct_1b6d18a9)arg1;
- (id)_currentVideoAsset;
- (CDStruct_1b6d18a9)_frameDuration;
- (void)_handlePlayPauseButton:(id)arg1;
- (void)_livePhotoKeyFramePickerDidDismiss:(id)arg1;
- (CDStruct_1b6d18a9)_originalTimeFromCurrentPlayerScaledTime:(CDStruct_1b6d18a9)arg1;
- (id)_playPauseButtonIfLoaded;
- (struct CGRect)_presentationRectFromLoupeRect;
- (void)_resetScrubberToStillPhotoFrame;
- (void)_seekToTimeForElement:(long long)arg1 exact:(BOOL)arg2;
- (void)_setState:(unsigned long long)arg1;
- (void)_showKeyFrameSelection;
- (id)_slomoMapperForCurrentConfiguration;
- (void)_updateCompositionController;
- (void)_updateDebugPlayerTimeLabel;
- (void)_updateDebugPlayheadStyleLabel;
- (void)_updateDebugTimeCodeLabel;
- (void)_updateDebugTrimToolStateLabel;
- (void)_updatePlayPauseButton;
- (void)_updatePlayerItem;
- (void)_updatePlayerWrapperTimeObserver;
- (void)_updatePlayerWrapperTrim;
- (void)_updatePlayheadStyle;
- (void)_updatePublicState;
- (void)_updateScrubberContents;
- (void)_updateScrubberPresentedPlayhead;
- (void)_updateScrubberTimes;
- (void)_updateSnappingDots;
- (void)_updateTimeCodeOverlay;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)compositonDidUpdateForPlayerWrapper:(id)arg1;
- (id)currentEditSource;
- (id)initWithPlayerWrapper:(id)arg1;
- (id)initWithPlayerWrapper:(id)arg1 playButtonEnabled:(BOOL)arg2 slomoEnabled:(BOOL)arg3;
- (void)livePhotoRenderDidChange:(BOOL)arg1;
- (void)pause;
- (void)play;
- (void)playerStatusChangedForPlayerWrapper:(id)arg1;
- (void)playerWrapper:(id)arg1 timeChanged:(CDStruct_1b6d18a9)arg2;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (void)releaseAVObjects;
- (void)setEditSource:(id)arg1 overcaptureEditSource:(id)arg2;
- (void)slowMotionEditorDidBeginEditing:(id)arg1 withStartHandle:(BOOL)arg2;
- (void)slowMotionEditorDidEndEditing:(id)arg1;
- (void)slowMotionEditorEndValueChanged:(id)arg1;
- (void)slowMotionEditorRequestForceUnzoom:(id)arg1;
- (BOOL)slowMotionEditorRequestForceZoom:(id)arg1;
- (void)slowMotionEditorStartValueChanged:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (BOOL)trimScrubber:(id)arg1 canBeginInteractivelyEditingElement:(long long)arg2;
- (void)trimScrubber:(id)arg1 debugEndOffset:(struct CGRect)arg2;
- (void)trimScrubber:(id)arg1 debugEndRect:(struct CGRect)arg2;
- (void)trimScrubber:(id)arg1 debugStartOffset:(struct CGRect)arg2;
- (void)trimScrubber:(id)arg1 debugStartRect:(struct CGRect)arg2;
- (void)trimScrubber:(id)arg1 didBeginInteractivelyEditingElement:(long long)arg2;
- (void)trimScrubber:(id)arg1 didChangeLoupeRect:(struct CGRect)arg2;
- (void)trimScrubber:(id)arg1 didChangeTimeForElement:(long long)arg2;
- (void)trimScrubber:(id)arg1 didEndInteractivelyEditingElement:(long long)arg2 successful:(BOOL)arg3;
- (void)trimScrubber:(id)arg1 didTapElement:(long long)arg2;
- (void)trimScrubber:(id)arg1 didZoomToMinimumValue:(double)arg2 maximumValue:(double)arg3;
- (void)trimScrubberAssetDurationDidChange:(id)arg1;
- (void)trimScrubberDidLayoutSubviews:(id)arg1;
- (void)trimScrubberDidUnzoom:(id)arg1;
- (void)updateViewConstraints;
- (void)userDidRequestToMakeKeyPhoto:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
