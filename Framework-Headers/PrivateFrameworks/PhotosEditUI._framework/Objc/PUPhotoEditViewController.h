//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosEditUI/PUEditViewController.h>

#import <PhotosEditUI/CAMLightingControlDelegate-Protocol.h>
#import <PhotosEditUI/NUMediaViewDelegatePrivate-Protocol.h>
#import <PhotosEditUI/PHLivePhotoViewDelegate-Protocol.h>
#import <PhotosEditUI/PLDismissableViewController-Protocol.h>
#import <PhotosEditUI/PUEditPluginSessionDelegate-Protocol.h>
#import <PhotosEditUI/PUImageEditPluginSessionDataSource-Protocol.h>
#import <PhotosEditUI/PUOneUpAssetTransitionViewController-Protocol.h>
#import <PhotosEditUI/PUPhotoEditApertureToolbarDelegate-Protocol.h>
#import <PhotosEditUI/PUPhotoEditIrisModelChangeObserver-Protocol.h>
#import <PhotosEditUI/PUPhotoEditLayoutSource-Protocol.h>
#import <PhotosEditUI/PUPhotoEditResourceLoaderDelegate-Protocol.h>
#import <PhotosEditUI/PUPhotoEditToolControllerDelegate-Protocol.h>
#import <PhotosEditUI/PUPhotoEditToolbarDelegate-Protocol.h>
#import <PhotosEditUI/PUVideoEditPluginSessionDataSource-Protocol.h>
#import <PhotosEditUI/PUViewControllerSpecChangeObserver-Protocol.h>
#import <PhotosEditUI/PXChangeObserver-Protocol.h>
#import <PhotosEditUI/PXPhotoLibraryUIChangeObserver-Protocol.h>
#import <PhotosEditUI/UIGestureRecognizerDelegate-Protocol.h>
#import <PhotosEditUI/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <PhotosEditUI/UIScrollViewDelegate-Protocol.h>

@class CAMBadgeTextView, CAMLightingControl, CAMLightingNameBadge, NSArray, NSObject, NSString, NSURL, NUBufferRenderClient, NUMediaView, PFCoalescer, PLEditSource, PLPhotoEditAggregateSession, PLPhotoEditModel, PLPhotoEditMutableModel, PLPhotoEditRenderer, PUAdjustmentsToolController, PUAutoAdjustmentController, PUCropToolController, PUEditPluginSession, PUEditableMediaProvider, PUFiltersToolController, PUMediaDestination, PUPhotoEditApertureToolbar, PUPhotoEditIrisModel, PUPhotoEditLivePhotoToolbar, PUPhotoEditResourceLoader, PUPhotoEditSnapshot, PUPhotoEditToolController, PUPhotoEditToolbar, PUPhotoEditValuesCalculator, PUPhotoEditViewControllerSpec, PUProgressIndicatorView, PURedeyeToolController, PUTouchingGestureRecognizer, PUTrimToolController, PXImageLayerModulator, PXUIAssetBadgeView, UIAlertController, UIButton, UIImageView, UILongPressGestureRecognizer, UITapGestureRecognizer, UIViewController, _PPTState;
@protocol OS_dispatch_source, PUEditableAsset, PUPhotoEditViewControllerPresentationDelegate, PUPhotoEditViewControllerSessionDelegate;

@interface PUPhotoEditViewController : PUEditViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, PUPhotoEditToolControllerDelegate, PUVideoEditPluginSessionDataSource, PUImageEditPluginSessionDataSource, PUEditPluginSessionDelegate, PXPhotoLibraryUIChangeObserver, PUOneUpAssetTransitionViewController, PLDismissableViewController, PUPhotoEditIrisModelChangeObserver, PHLivePhotoViewDelegate, PUPhotoEditResourceLoaderDelegate, PUViewControllerSpecChangeObserver, NUMediaViewDelegatePrivate, PUPhotoEditToolbarDelegate, PXChangeObserver, CAMLightingControlDelegate, PUPhotoEditApertureToolbarDelegate, PUPhotoEditLayoutSource>
{
    NSArray *__allTools;
    PUPhotoEditToolController *_currentEditingTool;
    UIViewController *_currentTool;
    BOOL _switchingToolsAnimated;
    NUMediaView *_mediaView;
    BOOL _isImageFrameReady;
    BOOL _isImageZooming;
    NUBufferRenderClient *_renderImageClient;
    BOOL _isAnimatingLayoutOrientation;
    PUTouchingGestureRecognizer *_livePhotoTouchRecognizer;
    BOOL _livePhotoIsPlaying;
    NSArray *_mainToolbarConstraints;
    NSArray *_alternateToolbarConstraints;
    NSArray *_secondaryToolbarConstraints;
    NSArray *_livePhotoToolbarConstraints;
    NSArray *_currentToolViewConstraints;
    NSArray *_placeholderImageViewConstraints;
    NSArray *_previewingOriginalBadgeConstraints;
    NSArray *_rawDecodeBadgeConstraints;
    NSArray *_depthBadgeConstraints;
    NSArray *_progressIndicatorViewConstraints;
    NSArray *_lightingControlConstraints;
    NSArray *_lightingNameBadgeConstraints;
    PUPhotoEditToolbar *_mainToolbar;
    PUPhotoEditToolbar *_alternateToolbar;
    PUPhotoEditToolbar *_secondaryToolbar;
    NSArray *_coreToolButtons;
    NSArray *_mainToolButtons;
    NSArray *_secondaryToolButtons;
    UIButton *_cancelButton;
    UIButton *_mainActionButton;
    UIButton *_secondMainActionButton;
    UIButton *_secondSecondActionButton;
    long long _mainButtonAction;
    BOOL _toolbarButtonsValid;
    PUPhotoEditLivePhotoToolbar *_livePhotoToolbar;
    UIButton *_muteLivePhotoButton;
    UIButton *_livePhotoButton;
    UIButton *_depthToolbarButton;
    UIButton *_depthBadge;
    BOOL _canModifyDepth;
    PUPhotoEditApertureToolbar *_apertureToolbar;
    PFCoalescer *_apertureUpdateCoalescer;
    UIButton *_pluginButton;
    UIButton *_redEyeButton;
    PUEditPluginSession *_pluginSession;
    BOOL _pluginWorkImageVersionIsValid;
    long long _pluginWorkImageVersion;
    PUPhotoEditSnapshot *_stashedSnapshot;
    NSURL *_pluginFullSizeImageURL;
    NSString *_pluginFullSizeImageSandboxExtensionToken;
    NSString *_pluginSessionIdentifier;
    UIButton *_autoEnhanceButton;
    PUAutoAdjustmentController *_autoEnhanceController;
    BOOL _photoTakenWithoutFlash;
    UIImageView *_placeholderImageView;
    BOOL _placeholderImageViewTransitioningOut;
    UITapGestureRecognizer *_togglePreviewTapGestureRecognizer;
    UILongPressGestureRecognizer *_togglePreviewPressGestureRecognizer;
    NSArray *_toggleOriginalInitialPoints;
    CAMBadgeTextView *_previewingOriginalBadge;
    unsigned long long _togglePreviewOriginalOffRequestID;
    PXUIAssetBadgeView *_rawDecodeBadge;
    BOOL _shouldShowRawDecodeBadge;
    PUProgressIndicatorView *_progressIndicatorView;
    id _progressIndicatorInteractionDisablingToken;
    int _inProgressSaveRequestID;
    NSObject<OS_dispatch_source> *_saveProgressTimer;
    BOOL _didLoadTools;
    BOOL _needToReloadTools;
    PUCropToolController *_cropController;
    PUFiltersToolController *_filtersController;
    PUAdjustmentsToolController *_adjustmentsController;
    PUTrimToolController *_trimController;
    BOOL _trimControllerVisible;
    BOOL _trimControllerScrubberNeedsVisualUpdate;
    _PPTState *_pptState;
    BOOL __isCachingVideo;
    BOOL _isEmbeddedEdit;
    BOOL _canModifyPortraitEffects;
    BOOL _isStageLightDisabled;
    CAMLightingControl *_lightingControl;
    CAMLightingNameBadge *_lightingNameBadge;
    BOOL _previewViewHidden;
    BOOL __hasLoadedRaw;
    BOOL __penultimateAvailable;
    BOOL __isLoadingAdjustments;
    BOOL __revertingToOriginal;
    BOOL __shouldBePreviewingOriginal;
    BOOL __canAnimateNextAutoEnhance;
    long long _layoutOrientation;
    PUPhotoEditViewControllerSpec *_photoEditSpec;
    id<PUEditableAsset> _photo;
    PUEditableMediaProvider *_mediaProvider;
    PUMediaDestination *_mediaDestination;
    id<PUPhotoEditViewControllerPresentationDelegate> _presentationDelegate;
    id<PUPhotoEditViewControllerSessionDelegate> _sessionDelegate;
    PXImageLayerModulator *_imageLayerModulator;
    NSArray *_placeholderImageFilters;
    PUPhotoEditValuesCalculator *__valuesCalculator;
    PLPhotoEditRenderer *__mainRenderer;
    PURedeyeToolController *__redEyeController;
    PLPhotoEditAggregateSession *__aggregateSession;
    PUPhotoEditResourceLoader *__resourceLoader;
    long long __workImageVersion;
    PLPhotoEditMutableModel *__photoEditModel;
    PLPhotoEditModel *__uneditedPhotoEditModel;
    PUPhotoEditIrisModel *__photoEditIrisModel;
    PLEditSource *__editSource;
    NSString *__editSourceUTI;
    PLEditSource *__originalImageEditSource;
    long long __originalImageExifOrientation;
    long long __originalExifOrientation;
    CDUnknownBlockType __nextRenderCompletionBlock;
    long long __assetChangeDismissalState;
    long long __saveCompetionDismissalState;
    long long __previewRenderType;
    PLPhotoEditRenderer *__previewingOriginalRenderer;
    UIAlertController *__cancelConfirmationAlert;
    UIAlertController *__revertConfirmationAlert;
    UIAlertController *__jpegPreviewForRawConfirmationAlert;
    UIAlertController *__irisRevertConfirmationAlert;
    UIAlertController *__livePhotoToolsAlert;
    long long _mediaViewEdgeInsetsUpdateDisableCount;
    CDUnknownBlockType _ppt_afterRenderBlock;
    CDUnknownBlockType _ppt_afterAutoenhanceBlock;
    CDUnknownBlockType _ppt_willBeginPlaybackBlock;
    CDUnknownBlockType _ppt_didEndPlaybackBlock;
    struct CGSize __layoutReferenceSize;
    struct CGSize __lastKnownPreviewImageSize;
    CDStruct_1b6d18a9 __initialSeekTime;
    CDStruct_1b6d18a9 __originalStillImageTime;
    CDStruct_1b6d18a9 __originalVideoDuration;
}

@property (strong, nonatomic, setter=_setAggregateSession:) PLPhotoEditAggregateSession *_aggregateSession; // @synthesize _aggregateSession=__aggregateSession;
@property (nonatomic, setter=_setAssetChangeDismissalState:) long long _assetChangeDismissalState; // @synthesize _assetChangeDismissalState=__assetChangeDismissalState;
@property (nonatomic, setter=_setCanAnimateNextAutoEnhance:) BOOL _canAnimateNextAutoEnhance; // @synthesize _canAnimateNextAutoEnhance=__canAnimateNextAutoEnhance;
@property (weak, nonatomic, setter=_setCancelConfirmationAlert:) UIAlertController *_cancelConfirmationAlert; // @synthesize _cancelConfirmationAlert=__cancelConfirmationAlert;
@property (strong, nonatomic, setter=_setEditSource:) PLEditSource *_editSource; // @synthesize _editSource=__editSource;
@property (strong, nonatomic, setter=_setEditSourceUTI:) NSString *_editSourceUTI; // @synthesize _editSourceUTI=__editSourceUTI;
@property (nonatomic, setter=_setHasLoadedRaw:) BOOL _hasLoadedRaw; // @synthesize _hasLoadedRaw=__hasLoadedRaw;
@property (nonatomic, setter=_setInitialSeekTime:) CDStruct_1b6d18a9 _initialSeekTime; // @synthesize _initialSeekTime=__initialSeekTime;
@property (weak, nonatomic, setter=_setIrisRevertConfirmationAlert:) UIAlertController *_irisRevertConfirmationAlert; // @synthesize _irisRevertConfirmationAlert=__irisRevertConfirmationAlert;
@property (nonatomic, setter=_setIsCachingVideo:) BOOL _isCachingVideo;
@property (readonly, nonatomic) BOOL _isEnabledLivePhoto;
@property (nonatomic, setter=_setIsLoadingAdjustments:) BOOL _isLoadingAdjustments; // @synthesize _isLoadingAdjustments=__isLoadingAdjustments;
@property (readonly, nonatomic) BOOL _isLoopingVideo;
@property (readonly, nonatomic) BOOL _isVideoOn;
@property (weak, nonatomic, setter=_setJpegPreviewForRawConfirmationAlert:) UIAlertController *_jpegPreviewForRawConfirmationAlert; // @synthesize _jpegPreviewForRawConfirmationAlert=__jpegPreviewForRawConfirmationAlert;
@property (nonatomic, setter=_setLastKnownPreviewImageSize:) struct CGSize _lastKnownPreviewImageSize; // @synthesize _lastKnownPreviewImageSize=__lastKnownPreviewImageSize;
@property (nonatomic, setter=_setLayoutReferenceSize:) struct CGSize _layoutReferenceSize; // @synthesize _layoutReferenceSize=__layoutReferenceSize;
@property (weak, nonatomic, setter=_setLivePhotoToolsAlert:) UIAlertController *_livePhotoToolsAlert; // @synthesize _livePhotoToolsAlert=__livePhotoToolsAlert;
@property (strong, nonatomic, setter=_setMainRenderer:) PLPhotoEditRenderer *_mainRenderer; // @synthesize _mainRenderer=__mainRenderer;
@property (copy, nonatomic, setter=_setNextRenderCompletionBlock:) CDUnknownBlockType _nextRenderCompletionBlock; // @synthesize _nextRenderCompletionBlock=__nextRenderCompletionBlock;
@property (nonatomic, setter=_setOriginalExifOrientation:) long long _originalExifOrientation; // @synthesize _originalExifOrientation=__originalExifOrientation;
@property (strong, nonatomic, setter=_setOriginalImageEditSource:) PLEditSource *_originalImageEditSource; // @synthesize _originalImageEditSource=__originalImageEditSource;
@property (nonatomic, setter=_setOriginalImageExifOrientation:) long long _originalImageExifOrientation; // @synthesize _originalImageExifOrientation=__originalImageExifOrientation;
@property (nonatomic, setter=_setOriginalStillImageTime:) CDStruct_1b6d18a9 _originalStillImageTime; // @synthesize _originalStillImageTime=__originalStillImageTime;
@property (nonatomic, setter=_setOriginalVideoDuration:) CDStruct_1b6d18a9 _originalVideoDuration; // @synthesize _originalVideoDuration=__originalVideoDuration;
@property (nonatomic, getter=_isPenultimateAvailable, setter=_setPenultimateAvailable:) BOOL _penultimateAvailable; // @synthesize _penultimateAvailable=__penultimateAvailable;
@property (strong, nonatomic, setter=_setPhotoEditIrisModel:) PUPhotoEditIrisModel *_photoEditIrisModel; // @synthesize _photoEditIrisModel=__photoEditIrisModel;
@property (strong, nonatomic, setter=_setPhotoEditModel:) PLPhotoEditMutableModel *_photoEditModel; // @synthesize _photoEditModel=__photoEditModel;
@property (nonatomic, setter=_setPreviewRenderType:) long long _previewRenderType; // @synthesize _previewRenderType=__previewRenderType;
@property (strong, nonatomic, setter=_setPreviewingOriginalRenderer:) PLPhotoEditRenderer *_previewingOriginalRenderer; // @synthesize _previewingOriginalRenderer=__previewingOriginalRenderer;
@property (strong, nonatomic, setter=_setRedEyeController:) PURedeyeToolController *_redEyeController; // @synthesize _redEyeController=__redEyeController;
@property (strong, nonatomic, setter=_setResourceLoader:) PUPhotoEditResourceLoader *_resourceLoader; // @synthesize _resourceLoader=__resourceLoader;
@property (weak, nonatomic, setter=_setRevertConfirmationAlert:) UIAlertController *_revertConfirmationAlert; // @synthesize _revertConfirmationAlert=__revertConfirmationAlert;
@property (nonatomic, getter=_isRevertingToOriginal, setter=_setRevertingToOriginal:) BOOL _revertingToOriginal; // @synthesize _revertingToOriginal=__revertingToOriginal;
@property (nonatomic, setter=_setSaveCompletionDismissalState:) long long _saveCompetionDismissalState; // @synthesize _saveCompetionDismissalState=__saveCompetionDismissalState;
@property (nonatomic, setter=_setShouldBePreviewingOriginal:) BOOL _shouldBePreviewingOriginal; // @synthesize _shouldBePreviewingOriginal=__shouldBePreviewingOriginal;
@property (copy, nonatomic, setter=_setUneditedPhotoEditModel:) PLPhotoEditModel *_uneditedPhotoEditModel; // @synthesize _uneditedPhotoEditModel=__uneditedPhotoEditModel;
@property (strong, nonatomic, setter=_setValuesCalculator:) PUPhotoEditValuesCalculator *_valuesCalculator; // @synthesize _valuesCalculator=__valuesCalculator;
@property (nonatomic, setter=_setWorkImageVersion:) long long _workImageVersion; // @synthesize _workImageVersion=__workImageVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PXImageLayerModulator *imageLayerModulator; // @synthesize imageLayerModulator=_imageLayerModulator;
@property (nonatomic, setter=_setLayoutOrientation:) long long layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
@property (readonly, nonatomic) PUMediaDestination *mediaDestination; // @synthesize mediaDestination=_mediaDestination;
@property (readonly, nonatomic) PUEditableMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property (nonatomic) long long mediaViewEdgeInsetsUpdateDisableCount; // @synthesize mediaViewEdgeInsetsUpdateDisableCount=_mediaViewEdgeInsetsUpdateDisableCount;
@property (readonly, nonatomic) id<PUEditableAsset> photo; // @synthesize photo=_photo;
@property (readonly, nonatomic) PUPhotoEditViewControllerSpec *photoEditSpec; // @synthesize photoEditSpec=_photoEditSpec;
@property (readonly, copy, nonatomic) NSArray *placeholderImageFilters; // @synthesize placeholderImageFilters=_placeholderImageFilters;
@property (copy) CDUnknownBlockType ppt_afterAutoenhanceBlock; // @synthesize ppt_afterAutoenhanceBlock=_ppt_afterAutoenhanceBlock;
@property (copy) CDUnknownBlockType ppt_afterRenderBlock; // @synthesize ppt_afterRenderBlock=_ppt_afterRenderBlock;
@property (copy) CDUnknownBlockType ppt_didEndPlaybackBlock; // @synthesize ppt_didEndPlaybackBlock=_ppt_didEndPlaybackBlock;
@property (copy) CDUnknownBlockType ppt_willBeginPlaybackBlock; // @synthesize ppt_willBeginPlaybackBlock=_ppt_willBeginPlaybackBlock;
@property (weak, nonatomic) id<PUPhotoEditViewControllerPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property (readonly, nonatomic) struct CGRect previewViewFrame;
@property (nonatomic, getter=isPreviewViewHidden) BOOL previewViewHidden; // @synthesize previewViewHidden=_previewViewHidden;
@property (weak, nonatomic) id<PUPhotoEditViewControllerSessionDelegate> sessionDelegate; // @synthesize sessionDelegate=_sessionDelegate;
@property (readonly) Class superclass;

+ (id)_defaultRenderPipelineFilters;
+ (BOOL)_isForceTouchEnabled;
+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (id)photoEditLog;
+ (double)toggleOriginalLongPressDelay;
- (void).cxx_destruct;
- (id)_allTools;
- (void)_captureSnapshotOfBasePhotoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_checkPhotoTakenWithoutFlashWithURL:(id)arg1;
- (void)_clearBadgeConstraints;
- (id)_composition;
- (void)_configureEnablenessOfControlButton:(id)arg1 animated:(BOOL)arg2;
- (id)_createMediaView;
- (struct UIEdgeInsets)_currentToolPreviewInsets;
- (id)_defaultInitialEditingTool;
- (id)_depthButtonIcon;
- (id)_depthButtonTitle;
- (void)_editPluginSession:(id)arg1 checkVideoEnabled:(BOOL)arg2 loadVideoComplementURLWithHandler:(CDUnknownBlockType)arg3;
- (void)_handleAssetChangeTimeoutWithAsset:(id)arg1;
- (void)_handleAutoEnhanceButton:(id)arg1;
- (void)_handleCancelButton:(id)arg1;
- (void)_handleDepthEffectButton:(id)arg1;
- (void)_handleDidLoadAdjustmentsAndBaseImageWithResult:(id)arg1;
- (void)_handleDidLoadOriginalWithResult:(id)arg1;
- (void)_handleDoneButton:(id)arg1;
- (void)_handleLivePhotoButton:(id)arg1;
- (void)_handleLivePhotoTouchRecognizer:(id)arg1;
- (void)_handleMainActionButton:(id)arg1;
- (void)_handleMediaViewReady:(id)arg1 statistics:(id)arg2;
- (void)_handleMuteLivePhotoButton:(id)arg1;
- (void)_handlePluginButton:(id)arg1;
- (void)_handleResourceLoadChange;
- (void)_handleRevertButton:(id)arg1;
- (void)_handleRevertResult:(id)arg1 error:(id)arg2;
- (void)_handleTogglePreviewPressGesture:(id)arg1;
- (void)_handleTogglePreviewTapGesture:(id)arg1;
- (void)_handleToolbarToolButton:(id)arg1;
- (BOOL)_hasLoopingVideoAdjustment;
- (BOOL)_hasUnsavedChanges;
- (CDStruct_910f5d27)_imageModulationOptions;
- (void)_invalidateTrimControlScrubberThumbnails;
- (BOOL)_isLoopingVideo:(BOOL)arg1;
- (BOOL)_isPreviewingOriginal;
- (BOOL)_isReadyToRender;
- (BOOL)_isSaveProgressAvailable;
- (BOOL)_isWaitingForAssetChange;
- (BOOL)_isWaitingForSaveCompletion;
- (id)_livePhotoGestureRecognizer;
- (void)_loadOriginalImageIfNeeded;
- (void)_loadPhotoEditResourcesIfNeeded;
- (void)_loadToolsIfNeeded;
- (void)_loadToolsIfNeeded:(BOOL)arg1;
- (struct UIEdgeInsets)_mediaViewEdgeInsets;
- (id)_newToolButtonForTool:(id)arg1;
- (void)_notifyDelegateSaveFinishedIfReadyWithAsset:(id)arg1;
- (id)_orientedCIImageFromUIImage:(id)arg1;
- (void)_performDiscardAction;
- (void)_performRevertAction;
- (void)_photoEditModelDidChange:(id)arg1;
- (struct CGRect)_placeholderViewFrame;
- (void)_ppt_conditionallyExecuteAfterRender;
- (id)_preferredStatusBarHideAnimationParameters;
- (void)_presentErrorAndDismissEditorWithTitle:(id)arg1 message:(id)arg2;
- (void)_presentErrorAndDismissEditorWithTitle:(id)arg1 message:(id)arg2 additionalAction:(id)arg3;
- (void)_presentWarningForIrisRemovesEditsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_reloadToolbarButtonsIfNeeded;
- (void)_removePlaceholderImageViewIfNeeded;
- (void)_requestDismissTransitionViewContentsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_resetModelAndBaseImagesToWorkImageVersion:(long long)arg1;
- (void)_restoreSnapshot:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (int)_revertToOriginalWithCompletionHandler:(CDUnknownBlockType)arg1;
- (int)_saveOnlyDepthEditsCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)_setOriginalImageURL:(id)arg1 withOriginalImageUTI:(id)arg2;
- (void)_setPlaceholderImage:(id)arg1 filters:(id)arg2;
- (void)_setPlaybackEnabled:(BOOL)arg1;
- (void)_setupImagePluginSession;
- (void)_setupToolsIfNeeded;
- (void)_setupVideoPluginSession;
- (BOOL)_shouldDisplayDepthButtonInToolbar;
- (BOOL)_shouldDisplayRedEyeTool;
- (BOOL)_shouldShowDepthControl;
- (BOOL)_shouldShowLightingControl;
- (void)_showCancelAndRevertOptionsAllowResetTool:(BOOL)arg1;
- (void)_showJpegPreviewForRawRevertAlert;
- (void)_startMonitoringSaveProgressIfNeeded;
- (void)_startWaitingForAssetChange;
- (void)_startWaitingForSaveRequestID:(int)arg1;
- (void)_stopMonitoringSaveProgress;
- (void)_stopWaitingForAssetChangeWithAsset:(id)arg1 success:(BOOL)arg2;
- (void)_stopWaitingForSaveRequestWithAsset:(id)arg1;
- (void)_transitionToEditingTool:(id)arg1 animated:(BOOL)arg2;
- (void)_transitionToNewToolViewController:(id)arg1 oldToolViewController:(id)arg2 animationBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4 animated:(BOOL)arg5;
- (void)_updateAlternateToolbarAnimated:(BOOL)arg1;
- (void)_updateApertureSliderLength;
- (void)_updateAutoEnhanceButtonAnimated:(BOOL)arg1;
- (void)_updateBackgroundColor;
- (void)_updateDepthEffectAnimated:(BOOL)arg1;
- (void)_updateEditModelWithApertureValue;
- (void)_updateEditModelWithPortraitEffect:(long long)arg1;
- (void)_updateLayoutOrientationWithViewSize:(struct CGSize)arg1 transitionCoordinator:(id)arg2;
- (void)_updateLightingHierarchy;
- (void)_updateLightingNameBadgeForOrientation:(long long)arg1 expanded:(BOOL)arg2;
- (void)_updateLivePhotoButton:(id)arg1;
- (void)_updateLivePhotoButtonAnimated:(BOOL)arg1;
- (void)_updateLivePhotoPlaybackGestureRecognizer;
- (void)_updateLivePhotoTrimControl;
- (void)_updateMainActionButtonAnimated:(BOOL)arg1;
- (void)_updateMediaViewEdgeInsets;
- (void)_updateMediaViewLayoutWithCoordinator:(id)arg1 layoutOrientation:(long long)arg2;
- (void)_updateModelDependentControlsAnimated:(BOOL)arg1;
- (void)_updateMuteButtonAnimated:(BOOL)arg1;
- (void)_updateMutedState;
- (void)_updatePenultimateAvailableWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updatePhotoEditIrisModel;
- (void)_updatePlaceholderImage;
- (void)_updatePluginButtonAnimated:(BOOL)arg1;
- (void)_updatePluginSession;
- (void)_updatePluginWorkImageVersion;
- (void)_updatePortraitControls:(BOOL)arg1;
- (void)_updatePreviewingOriginal;
- (void)_updatePreviewingOriginalBadge;
- (void)_updateProgressIndicatorAnimated:(BOOL)arg1;
- (void)_updateRenderedPreviewForceRender:(BOOL)arg1;
- (void)_updateSaveProgress;
- (void)_updateSpecDependentUIPieces;
- (void)_updateSubviewsOrdering;
- (void)_updateTogglePreviewGestureRecognizer;
- (void)_updateToolbarBackgroundAnimated:(BOOL)arg1;
- (void)_updateToolbarButtonPositions;
- (void)_updateToolbarsAnimated:(BOOL)arg1;
- (void)_updateToolbarsContentPadding;
- (void)_updateTraitCollectionAndLayoutReferenceSize;
- (void)_updateTraitCollectionAndLayoutReferenceSize:(struct CGSize)arg1;
- (void)_updateValuesCalculator;
- (BOOL)_wantsTrimControl;
- (void)apertureToolbar:(id)arg1 didChangeValue:(double)arg2;
- (BOOL)apertureToolbarShouldRotateLabelsWithOrientation:(id)arg1;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (void)dealloc;
- (void)didFinishWithAsset:(id)arg1 savedChanges:(BOOL)arg2;
- (void)didFinishWithChanges:(BOOL)arg1;
- (void)dismissAccessibilityHUDForPhotoEditToolbar:(id)arg1;
- (void)editPluginSession:(id)arg1 commitContentEditingOutput:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)editPluginSession:(id)arg1 didEndWithCompletionType:(unsigned long long)arg2;
- (void)editPluginSession:(id)arg1 loadAdjustmentDataWithHandler:(CDUnknownBlockType)arg2;
- (void)editPluginSession:(id)arg1 loadDisplaySizeImageWithHandler:(CDUnknownBlockType)arg2;
- (void)editPluginSession:(id)arg1 loadFullSizeImageWithHandler:(CDUnknownBlockType)arg2;
- (void)editPluginSession:(id)arg1 loadPlaceholderImageWithHandler:(CDUnknownBlockType)arg2;
- (void)editPluginSession:(id)arg1 loadVideoComplementURLWithHandler:(CDUnknownBlockType)arg2;
- (void)editPluginSession:(id)arg1 loadVideoURLWithHandler:(CDUnknownBlockType)arg2;
- (void)editPluginSessionAvailabilityDidChange:(id)arg1;
- (void)editPluginSessionWillBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithPhoto:(id)arg1 mediaProvider:(id)arg2 mediaDestination:(id)arg3;
- (void)lightingControl:(id)arg1 willChangeExpanded:(BOOL)arg2;
- (void)lightingControlDidChangeSelectedLightingType:(id)arg1;
- (void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2;
- (void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2;
- (id)mainLivePhotoView;
- (void)mediaViewDidEndZooming:(id)arg1;
- (void)mediaViewDidFinishPreparingVideo:(id)arg1;
- (void)mediaViewDidFinishRendering:(id)arg1 withStatistics:(id)arg2;
- (void)mediaViewDidStartPreparingVideo:(id)arg1;
- (void)mediaViewDidUpdateLivePhoto:(id)arg1;
- (void)mediaViewIsReadyForVideoPlayback:(id)arg1;
- (void)mediaViewWillBeginZooming:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)oneUpAssetTransition:(id)arg1 animateTransitionWithContext:(id)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(CDUnknownBlockType)arg2;
- (void)oneUpAssetTransitionDidEnd:(id)arg1;
- (void)oneUpAssetTransitionWillBegin:(id)arg1;
- (void)photoEditResourceLoadRequest:(id)arg1 didCompleteWithResult:(id)arg2;
- (void)photoEditResourceLoadRequest:(id)arg1 downloadDidFailWithError:(id)arg2;
- (void)photoEditResourceLoadRequest:(id)arg1 downloadProgress:(double)arg2;
- (void)photoEditResourceLoadRequest:(id)arg1 mediaLoadDidFailWithError:(id)arg2;
- (void)photoEditResourceLoadRequestDidCompleteDownload:(id)arg1;
- (void)photoEditResourceLoadRequestWillBeginDownload:(id)arg1;
- (id)photoEditToolbar:(id)arg1 accessibilityHUDItemForButton:(id)arg2;
- (void)photoEditToolbar:(id)arg1 showAccessibilityHUDForItem:(id)arg2;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)ppt_applyAutoenhance:(CDUnknownBlockType)arg1;
- (void)ppt_cancelEdits;
- (void)ppt_configureSelectedSliderWithSteps:(long long)arg1;
- (void)ppt_executeAfterRender:(CDUnknownBlockType)arg1;
- (void)ppt_playLivePhotoWithWillBeginPlaybackBlock:(CDUnknownBlockType)arg1 didEndPlaybackBlock:(CDUnknownBlockType)arg2;
- (id)ppt_renderStatisticsDictionaryForTimeInterval:(double)arg1;
- (void)ppt_save;
- (void)ppt_scrollBWSlider:(CDUnknownBlockType)arg1;
- (void)ppt_scrollColorSlider:(CDUnknownBlockType)arg1;
- (void)ppt_scrollLightSlider:(CDUnknownBlockType)arg1;
- (void)ppt_scrollSelectedSliderByDelta;
- (void)ppt_selectAdjustmentsController:(CDUnknownBlockType)arg1;
- (void)ppt_selectCropController:(CDUnknownBlockType)arg1;
- (void)ppt_selectFiltersController:(CDUnknownBlockType)arg1;
- (void)ppt_selectNextLightingEffect:(CDUnknownBlockType)arg1;
- (BOOL)prefersStatusBarHidden;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (BOOL)pu_wantsNavigationBarVisible;
- (BOOL)pu_wantsTabBarVisible;
- (BOOL)pu_wantsToolbarVisible;
- (double)px_HDRFocus;
- (double)px_imageModulationIntensity;
- (void)setPlaceholderImage:(id)arg1;
- (void)switchToEditingTool:(id)arg1 animated:(BOOL)arg2;
- (void)toolController:(id)arg1 didChangePreferredPreviewViewInsetsAnimated:(BOOL)arg2;
- (struct CGPoint)toolController:(id)arg1 originalPointFromViewPoint:(struct CGPoint)arg2 view:(id)arg3;
- (void)toolController:(id)arg1 updateModelDependentControlsAnimated:(BOOL)arg2;
- (struct CGPoint)toolController:(id)arg1 viewPointFromOriginalPoint:(struct CGPoint)arg2 view:(id)arg3;
- (void)toolControllerDidChangeIsPerformingLiveInteraction:(id)arg1;
- (void)toolControllerDidChangePreferredAlternateToolbarButton:(id)arg1;
- (void)toolControllerDidChangeWantsDefaultPreviewView:(id)arg1;
- (void)toolControllerDidFinish:(id)arg1;
- (void)toolControllerDidFinishLoadingThumbnails:(id)arg1;
- (id)toolControllerHitEventForwardView:(id)arg1;
- (CDStruct_910f5d27)toolControllerImageModulationOptions:(id)arg1;
- (id)toolControllerLivePhoto:(id)arg1;
- (id)toolControllerMainContainerView:(id)arg1;
- (id)toolControllerMainRenderer:(id)arg1;
- (struct CGSize)toolControllerOriginalImageSize:(id)arg1;
- (struct CGSize)toolControllerOriginalOrientedImageSize:(id)arg1;
- (id)toolControllerPreviewView:(id)arg1;
- (id)toolControllerRequestComposition:(id)arg1;
- (void)toolControllerRequestLivePhoto:(id)arg1 filters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)toolControllerUneditedPhotoEditModel:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateViewConstraints;
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

