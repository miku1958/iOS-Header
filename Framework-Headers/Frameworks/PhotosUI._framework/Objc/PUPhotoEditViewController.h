//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUEditViewController.h>

#import <PhotosUI/NUMediaViewDelegatePrivate-Protocol.h>
#import <PhotosUI/PHLivePhotoViewDelegate-Protocol.h>
#import <PhotosUI/PICompositionControllerDelegate-Protocol.h>
#import <PhotosUI/PUEditPluginSessionDelegate-Protocol.h>
#import <PhotosUI/PUImageEditPluginSessionDataSource-Protocol.h>
#import <PhotosUI/PUOneUpAssetTransitionViewController-Protocol.h>
#import <PhotosUI/PUPhotoEditIrisModelChangeObserver-Protocol.h>
#import <PhotosUI/PUPhotoEditLayoutSource-Protocol.h>
#import <PhotosUI/PUPhotoEditResourceLoaderDelegate-Protocol.h>
#import <PhotosUI/PUPhotoEditToolControllerDelegate-Protocol.h>
#import <PhotosUI/PUPhotoEditToolbarDelegate-Protocol.h>
#import <PhotosUI/PUVideoEditPluginSessionDataSource-Protocol.h>
#import <PhotosUI/PUViewControllerSpecChangeObserver-Protocol.h>
#import <PhotosUI/PXChangeObserver-Protocol.h>
#import <PhotosUI/PXForcedDismissableViewController-Protocol.h>
#import <PhotosUI/PXPhotoLibraryUIChangeObserver-Protocol.h>
#import <PhotosUI/PXTrimToolPlayerWrapperNUMediaViewPlayerItemSource-Protocol.h>
#import <PhotosUI/UIGestureRecognizerDelegate-Protocol.h>
#import <PhotosUI/UIPencilInteractionDelegate-Protocol.h>
#import <PhotosUI/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <PhotosUI/UIScrollViewDelegate-Protocol.h>

@class CEKBadgeTextView, CEKLightingControl, CEKLightingNameBadge, NSArray, NSMutableSet, NSObject, NSString, NSTimer, NSURL, NUBufferRenderClient, NUComposition, NUMediaView, PHContentEditingInput, PICompositionController, PLEditSource, PLPhotoEditRenderer, PUAdjustmentsToolController, PUAutoAdjustmentController, PUCropToolController, PUEditPluginSession, PUEditableMediaProvider, PUEnterEditPerformanceEventBuilder, PUExitEditPerformanceEventBuilder, PUFilterToolController, PULivePhotoEffectsToolController, PUMediaDestination, PUPhotoEditAggregateSession, PUPhotoEditButtonCenteredToolbar, PUPhotoEditIrisModel, PUPhotoEditLivePhotoVideoToolController, PUPhotoEditPerfHUD, PUPhotoEditPortraitToolController, PUPhotoEditReframeHUD, PUPhotoEditResourceLoader, PUPhotoEditSnapshot, PUPhotoEditToolController, PUPhotoEditToolPickerController, PUPhotoEditToolbar, PUPhotoEditValuesCalculator, PUPhotoEditViewControllerSpec, PUProgressIndicatorView, PURedeyeToolController, PUTimeInterval, PUTouchingGestureRecognizer, PXImageLayerModulator, PXUIAssetBadgeView, UIAlertController, UIButton, UIImageView, UIPencilInteraction, UITapGestureRecognizer, UIView, UIViewController, _PPTState;
@protocol NUImageProperties, OS_dispatch_source, PUEditableAsset, PUPhotoEditViewControllerPresentationDelegate, PUPhotoEditViewControllerSessionDelegate;

@interface PUPhotoEditViewController : PUEditViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, UIPencilInteractionDelegate, PUPhotoEditToolControllerDelegate, PUVideoEditPluginSessionDataSource, PUImageEditPluginSessionDataSource, PUEditPluginSessionDelegate, PXPhotoLibraryUIChangeObserver, PUOneUpAssetTransitionViewController, PXForcedDismissableViewController, PUPhotoEditIrisModelChangeObserver, PHLivePhotoViewDelegate, PUPhotoEditResourceLoaderDelegate, PUViewControllerSpecChangeObserver, NUMediaViewDelegatePrivate, PUPhotoEditToolbarDelegate, PXChangeObserver, PICompositionControllerDelegate, PXTrimToolPlayerWrapperNUMediaViewPlayerItemSource, PUPhotoEditLayoutSource>
{
    NSArray *__allTools;
    PUPhotoEditToolController *_currentEditingTool;
    PUPhotoEditToolController *_previousEditingTool;
    UIViewController *_currentTool;
    BOOL _switchingToolsAnimated;
    BOOL _leavingEdit;
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
    NSArray *_currentToolViewConstraints;
    NSArray *_placeholderImageViewConstraints;
    NSArray *_previewingOriginalBadgeConstraints;
    NSArray *_rawDecodeBadgeConstraints;
    NSArray *_depthBadgeConstraints;
    NSArray *_progressIndicatorViewConstraints;
    NSArray *_progressEventBlockingViewConstraints;
    NSArray *_mediaViewConstraints;
    PUPhotoEditToolbar *_mainToolbar;
    PUPhotoEditToolbar *_alternateToolbar;
    PUPhotoEditButtonCenteredToolbar *_secondaryToolbar;
    NSArray *_coreToolButtons;
    NSArray *_mainToolButtons;
    UIButton *_cancelButton;
    UIButton *_mainActionButton;
    long long _mainButtonAction;
    BOOL _toolbarButtonsValid;
    PUPhotoEditToolPickerController *_toolPickerController;
    NSArray *_secondaryLeadingViews;
    NSArray *_secondaryTrailingViews;
    UIView *_secondaryCenterView;
    UIButton *_depthBadge;
    UIButton *_pluginButton;
    UIButton *_redEyeButton;
    UIButton *_ttrButton;
    BOOL _ttrExceededThreshold;
    PUEditPluginSession *_pluginSession;
    BOOL _pluginWorkImageVersionIsValid;
    long long _pluginWorkImageVersion;
    PUPhotoEditSnapshot *_stashedSnapshot;
    NSURL *_pluginFullSizeImageURL;
    NSString *_pluginFullSizeImageSandboxExtensionToken;
    NSString *_pluginSessionIdentifier;
    BOOL _pluginWorkingOffPenultimate;
    UIButton *_autoEnhanceButton;
    PUAutoAdjustmentController *_autoEnhanceController;
    UIImageView *_placeholderImageView;
    BOOL _placeholderImageViewTransitioningOut;
    UITapGestureRecognizer *_togglePreviewTapGestureRecognizer;
    CEKBadgeTextView *_previewingOriginalBadge;
    unsigned long long _togglePreviewOriginalOffRequestID;
    PXUIAssetBadgeView *_rawDecodeBadge;
    BOOL _shouldShowRawDecodeBadge;
    PUProgressIndicatorView *_progressIndicatorView;
    id _progressIndicatorInteractionDisablingToken;
    int _inProgressSaveRequestID;
    NSObject<OS_dispatch_source> *_saveProgressTimer;
    UIView *_progressEventBlockingView;
    BOOL _downloadingForRevert;
    BOOL _didLoadTools;
    BOOL _needToReloadTools;
    BOOL _updatingToolbars;
    PUCropToolController *_cropController;
    PUFilterToolController *_filtersController;
    PUAdjustmentsToolController *_adjustmentsController;
    PULivePhotoEffectsToolController *_livePhotoEffectsToolController;
    PUPhotoEditLivePhotoVideoToolController *_livePhotoToolController;
    PUPhotoEditPortraitToolController *_portraitToolController;
    _PPTState *_pptState;
    BOOL __isCachingVideo;
    BOOL _isEmbeddedEdit;
    id<NUImageProperties> _imageProperties;
    struct CGSize _previewOriginalSavedImageSize;
    BOOL _shouldShowPortraitTool;
    CEKLightingControl *_lightingControl;
    CEKLightingNameBadge *_lightingNameBadge;
    NSMutableSet *_assetsWaitingForLibraryNotification;
    BOOL __hasLoadedRaw;
    BOOL __penultimateAvailable;
    BOOL _runningAutoCalculators;
    BOOL __revertingToOriginal;
    BOOL __shouldBePreviewingOriginal;
    BOOL _burningInTrim;
    long long _layoutOrientation;
    PUPhotoEditViewControllerSpec *_photoEditSpec;
    NSObject<PUEditableAsset> *_photo;
    PUEditableMediaProvider *_mediaProvider;
    PUMediaDestination *_mediaDestination;
    id<PUPhotoEditViewControllerPresentationDelegate> _presentationDelegate;
    id<PUPhotoEditViewControllerSessionDelegate> _sessionDelegate;
    PXImageLayerModulator *_imageLayerModulator;
    NSArray *_placeholderImageFilters;
    PUPhotoEditValuesCalculator *__valuesCalculator;
    PLPhotoEditRenderer *__mainRenderer;
    PURedeyeToolController *__redEyeController;
    PUPhotoEditAggregateSession *__aggregateSession;
    PUPhotoEditResourceLoader *__resourceLoader;
    long long __workImageVersion;
    PICompositionController *__compositionController;
    NUComposition *__uneditedComposition;
    NUComposition *__originalComposition;
    PUPhotoEditIrisModel *__photoEditIrisModel;
    PLEditSource *__editSource;
    PLEditSource *_overCaptureEditSource;
    NSURL *_overCaptureEditSourceURL;
    long long _editSourceSelection;
    long long _overcaptureType;
    NSString *__editSourceUTI;
    PHContentEditingInput *__editSourceContentEditingInput;
    PLEditSource *__originalImageEditSource;
    unsigned long long _originalReframeVariation;
    PLEditSource *_originalOvercaptureEditSource;
    long long __originalImageExifOrientation;
    long long __originalExifOrientation;
    long long __assetChangeDismissalState;
    long long __saveCompetionDismissalState;
    NSTimer *_assetChangeTimeoutTimer;
    long long __previewRenderType;
    PLPhotoEditRenderer *__previewingOriginalRenderer;
    UIAlertController *__cancelConfirmationAlert;
    UIAlertController *__revertConfirmationAlert;
    UIAlertController *__jpegPreviewForRawConfirmationAlert;
    UIAlertController *__irisRevertConfirmationAlert;
    UIAlertController *__saveTrimOptionsAlert;
    long long _mediaViewEdgeInsetsUpdateDisableCount;
    UIPencilInteraction *_pencilInteraction;
    PUPhotoEditPerfHUD *_perfHUD;
    PUPhotoEditReframeHUD *_reframeHUD;
    PUTimeInterval *_enterEditTimeInterval;
    PUTimeInterval *_resourceCheckingInterval;
    PUTimeInterval *_resourceDownloadInterval;
    PUTimeInterval *_resourceLoadingInterval;
    PUTimeInterval *_autoCalcInterval;
    PUTimeInterval *_exitEditTimeInterval;
    PUEnterEditPerformanceEventBuilder *_enterEditEventBuilder;
    PUExitEditPerformanceEventBuilder *_exitEditEventBuilder;
    CDUnknownBlockType _ppt_afterRenderBlock;
    CDUnknownBlockType _ppt_afterAutoenhanceBlock;
    CDUnknownBlockType _ppt_willBeginPlaybackBlock;
    CDUnknownBlockType _ppt_didEndPlaybackBlock;
    CDUnknownBlockType _ppt_editIsReadyNotificationBlock;
    CDUnknownBlockType _ppt_exitActionCompleteNotificationBlock;
    struct CGSize __layoutReferenceSize;
    struct CGSize __lastKnownPreviewImageSize;
    CDStruct_1b6d18a9 __initialSeekTime;
    CDStruct_1b6d18a9 __originalStillImageTime;
}

@property (strong, nonatomic, setter=_setAggregateSession:) PUPhotoEditAggregateSession *_aggregateSession; // @synthesize _aggregateSession=__aggregateSession;
@property (nonatomic, setter=_setAssetChangeDismissalState:) long long _assetChangeDismissalState; // @synthesize _assetChangeDismissalState=__assetChangeDismissalState;
@property (weak, nonatomic, setter=_setCancelConfirmationAlert:) UIAlertController *_cancelConfirmationAlert; // @synthesize _cancelConfirmationAlert=__cancelConfirmationAlert;
@property (strong, nonatomic, setter=_setCompositionController:) PICompositionController *_compositionController; // @synthesize _compositionController=__compositionController;
@property (strong, nonatomic, setter=_setEditSource:) PLEditSource *_editSource; // @synthesize _editSource=__editSource;
@property (strong, nonatomic, setter=_setEditSourceContentEditingInput:) PHContentEditingInput *_editSourceContentEditingInput; // @synthesize _editSourceContentEditingInput=__editSourceContentEditingInput;
@property (strong, nonatomic, setter=_setEditSourceUTI:) NSString *_editSourceUTI; // @synthesize _editSourceUTI=__editSourceUTI;
@property (nonatomic, setter=_setHasLoadedRaw:) BOOL _hasLoadedRaw; // @synthesize _hasLoadedRaw=__hasLoadedRaw;
@property (nonatomic, setter=_setInitialSeekTime:) CDStruct_1b6d18a9 _initialSeekTime; // @synthesize _initialSeekTime=__initialSeekTime;
@property (weak, nonatomic, setter=_setIrisRevertConfirmationAlert:) UIAlertController *_irisRevertConfirmationAlert; // @synthesize _irisRevertConfirmationAlert=__irisRevertConfirmationAlert;
@property (nonatomic, setter=_setIsCachingVideo:) BOOL _isCachingVideo;
@property (weak, nonatomic, setter=_setJpegPreviewForRawConfirmationAlert:) UIAlertController *_jpegPreviewForRawConfirmationAlert; // @synthesize _jpegPreviewForRawConfirmationAlert=__jpegPreviewForRawConfirmationAlert;
@property (nonatomic, setter=_setLastKnownPreviewImageSize:) struct CGSize _lastKnownPreviewImageSize; // @synthesize _lastKnownPreviewImageSize=__lastKnownPreviewImageSize;
@property (nonatomic, setter=_setLayoutReferenceSize:) struct CGSize _layoutReferenceSize; // @synthesize _layoutReferenceSize=__layoutReferenceSize;
@property (strong, nonatomic, setter=_setMainRenderer:) PLPhotoEditRenderer *_mainRenderer; // @synthesize _mainRenderer=__mainRenderer;
@property (copy, nonatomic, setter=_setOriginalComposition:) NUComposition *_originalComposition; // @synthesize _originalComposition=__originalComposition;
@property (nonatomic, setter=_setOriginalExifOrientation:) long long _originalExifOrientation; // @synthesize _originalExifOrientation=__originalExifOrientation;
@property (strong, nonatomic, setter=_setOriginalImageEditSource:) PLEditSource *_originalImageEditSource; // @synthesize _originalImageEditSource=__originalImageEditSource;
@property (nonatomic, setter=_setOriginalImageExifOrientation:) long long _originalImageExifOrientation; // @synthesize _originalImageExifOrientation=__originalImageExifOrientation;
@property (nonatomic, setter=_setOriginalStillImageTime:) CDStruct_1b6d18a9 _originalStillImageTime; // @synthesize _originalStillImageTime=__originalStillImageTime;
@property (nonatomic, getter=_isPenultimateAvailable, setter=_setPenultimateAvailable:) BOOL _penultimateAvailable; // @synthesize _penultimateAvailable=__penultimateAvailable;
@property (strong, nonatomic, setter=_setPhotoEditIrisModel:) PUPhotoEditIrisModel *_photoEditIrisModel; // @synthesize _photoEditIrisModel=__photoEditIrisModel;
@property (nonatomic, setter=_setPreviewRenderType:) long long _previewRenderType; // @synthesize _previewRenderType=__previewRenderType;
@property (strong, nonatomic, setter=_setPreviewingOriginalRenderer:) PLPhotoEditRenderer *_previewingOriginalRenderer; // @synthesize _previewingOriginalRenderer=__previewingOriginalRenderer;
@property (strong, nonatomic, setter=_setRedEyeController:) PURedeyeToolController *_redEyeController; // @synthesize _redEyeController=__redEyeController;
@property (strong, nonatomic, setter=_setResourceLoader:) PUPhotoEditResourceLoader *_resourceLoader; // @synthesize _resourceLoader=__resourceLoader;
@property (weak, nonatomic, setter=_setRevertConfirmationAlert:) UIAlertController *_revertConfirmationAlert; // @synthesize _revertConfirmationAlert=__revertConfirmationAlert;
@property (nonatomic, getter=_isRevertingToOriginal, setter=_setRevertingToOriginal:) BOOL _revertingToOriginal; // @synthesize _revertingToOriginal=__revertingToOriginal;
@property (nonatomic, setter=_setSaveCompletionDismissalState:) long long _saveCompetionDismissalState; // @synthesize _saveCompetionDismissalState=__saveCompetionDismissalState;
@property (weak, nonatomic, setter=_setSaveTrimOptionsAlert:) UIAlertController *_saveTrimOptionsAlert; // @synthesize _saveTrimOptionsAlert=__saveTrimOptionsAlert;
@property (nonatomic, setter=_setShouldBePreviewingOriginal:) BOOL _shouldBePreviewingOriginal; // @synthesize _shouldBePreviewingOriginal=__shouldBePreviewingOriginal;
@property (copy, nonatomic, setter=_setUneditedComposition:) NUComposition *_uneditedComposition; // @synthesize _uneditedComposition=__uneditedComposition;
@property (strong, nonatomic, setter=_setValuesCalculator:) PUPhotoEditValuesCalculator *_valuesCalculator; // @synthesize _valuesCalculator=__valuesCalculator;
@property (nonatomic, setter=_setWorkImageVersion:) long long _workImageVersion; // @synthesize _workImageVersion=__workImageVersion;
@property (strong, nonatomic) NSTimer *assetChangeTimeoutTimer; // @synthesize assetChangeTimeoutTimer=_assetChangeTimeoutTimer;
@property (strong, nonatomic) PUTimeInterval *autoCalcInterval; // @synthesize autoCalcInterval=_autoCalcInterval;
@property (nonatomic) BOOL burningInTrim; // @synthesize burningInTrim=_burningInTrim;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) long long editSourceSelection; // @synthesize editSourceSelection=_editSourceSelection;
@property (strong, nonatomic) PUEnterEditPerformanceEventBuilder *enterEditEventBuilder; // @synthesize enterEditEventBuilder=_enterEditEventBuilder;
@property (strong, nonatomic) PUTimeInterval *enterEditTimeInterval; // @synthesize enterEditTimeInterval=_enterEditTimeInterval;
@property (strong, nonatomic) PUExitEditPerformanceEventBuilder *exitEditEventBuilder; // @synthesize exitEditEventBuilder=_exitEditEventBuilder;
@property (strong, nonatomic) PUTimeInterval *exitEditTimeInterval; // @synthesize exitEditTimeInterval=_exitEditTimeInterval;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PXImageLayerModulator *imageLayerModulator; // @synthesize imageLayerModulator=_imageLayerModulator;
@property (readonly, nonatomic) BOOL isLoopingVideo;
@property (readonly, nonatomic) BOOL isVideoOn;
@property (nonatomic, setter=_setLayoutOrientation:) long long layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
@property (readonly, nonatomic) PUMediaDestination *mediaDestination; // @synthesize mediaDestination=_mediaDestination;
@property (readonly, nonatomic) PUEditableMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property (nonatomic) long long mediaViewEdgeInsetsUpdateDisableCount; // @synthesize mediaViewEdgeInsetsUpdateDisableCount=_mediaViewEdgeInsetsUpdateDisableCount;
@property (strong, nonatomic) PLEditSource *originalOvercaptureEditSource; // @synthesize originalOvercaptureEditSource=_originalOvercaptureEditSource;
@property (nonatomic) unsigned long long originalReframeVariation; // @synthesize originalReframeVariation=_originalReframeVariation;
@property (strong, nonatomic, setter=_setOverCaptureEditSource:) PLEditSource *overCaptureEditSource; // @synthesize overCaptureEditSource=_overCaptureEditSource;
@property (strong, nonatomic, setter=_setOverCaptureEditSourceURL:) NSURL *overCaptureEditSourceURL; // @synthesize overCaptureEditSourceURL=_overCaptureEditSourceURL;
@property (nonatomic) long long overcaptureType; // @synthesize overcaptureType=_overcaptureType;
@property (strong, nonatomic) UIPencilInteraction *pencilInteraction; // @synthesize pencilInteraction=_pencilInteraction;
@property (strong, nonatomic) PUPhotoEditPerfHUD *perfHUD; // @synthesize perfHUD=_perfHUD;
@property (readonly, nonatomic) NSObject<PUEditableAsset> *photo; // @synthesize photo=_photo;
@property (readonly, nonatomic) PUPhotoEditViewControllerSpec *photoEditSpec; // @synthesize photoEditSpec=_photoEditSpec;
@property (readonly, copy, nonatomic) NSArray *placeholderImageFilters; // @synthesize placeholderImageFilters=_placeholderImageFilters;
@property (copy) CDUnknownBlockType ppt_afterAutoenhanceBlock; // @synthesize ppt_afterAutoenhanceBlock=_ppt_afterAutoenhanceBlock;
@property (copy) CDUnknownBlockType ppt_afterRenderBlock; // @synthesize ppt_afterRenderBlock=_ppt_afterRenderBlock;
@property (copy) CDUnknownBlockType ppt_didEndPlaybackBlock; // @synthesize ppt_didEndPlaybackBlock=_ppt_didEndPlaybackBlock;
@property (copy, nonatomic) CDUnknownBlockType ppt_editIsReadyNotificationBlock; // @synthesize ppt_editIsReadyNotificationBlock=_ppt_editIsReadyNotificationBlock;
@property (copy, nonatomic) CDUnknownBlockType ppt_exitActionCompleteNotificationBlock; // @synthesize ppt_exitActionCompleteNotificationBlock=_ppt_exitActionCompleteNotificationBlock;
@property (copy) CDUnknownBlockType ppt_willBeginPlaybackBlock; // @synthesize ppt_willBeginPlaybackBlock=_ppt_willBeginPlaybackBlock;
@property (weak, nonatomic) id<PUPhotoEditViewControllerPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property (readonly, nonatomic) struct CGRect previewViewFrame;
@property (strong, nonatomic) PUPhotoEditReframeHUD *reframeHUD; // @synthesize reframeHUD=_reframeHUD;
@property (strong, nonatomic) PUTimeInterval *resourceCheckingInterval; // @synthesize resourceCheckingInterval=_resourceCheckingInterval;
@property (strong, nonatomic) PUTimeInterval *resourceDownloadInterval; // @synthesize resourceDownloadInterval=_resourceDownloadInterval;
@property (strong, nonatomic) PUTimeInterval *resourceLoadingInterval; // @synthesize resourceLoadingInterval=_resourceLoadingInterval;
@property (nonatomic, getter=isRunningAutoCalculators) BOOL runningAutoCalculators; // @synthesize runningAutoCalculators=_runningAutoCalculators;
@property (weak, nonatomic) id<PUPhotoEditViewControllerSessionDelegate> sessionDelegate; // @synthesize sessionDelegate=_sessionDelegate;
@property (readonly) Class superclass;

+ (id)_defaultLivePhotoRenderPipelineFilters;
+ (id)_defaultMediaViewRenderPipelineFilters;
+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (void)preheatEditDependenciesIfNeeded;
- (void).cxx_destruct;
- (id)_allTools;
- (void)_askToSaveCopyIfNecessary:(CDUnknownBlockType)arg1;
- (BOOL)_canCompositionControllerBeReverted:(id)arg1;
- (void)_cancelInProgressSaveRequest;
- (void)_captureSnapshotOfBasePhotoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_chooseInitialEditingTool;
- (void)_clearBadgeConstraints;
- (void)_clearToolbars;
- (id)_composition;
- (id)_createMediaView;
- (void)_createPencilInteractionIfNeeded;
- (struct UIEdgeInsets)_currentToolPreviewInsets;
- (id)_defaultInitialEditingTool;
- (id)_defaultRenderPipelineFiltersForCurrentMode;
- (void)_didEndAutoCalc;
- (void)_didEndEnterEdit;
- (void)_didEndExitAction;
- (void)_didEndResourceLoading;
- (void)_didStartAutoCalc;
- (void)_didStartEnterEdit;
- (void)_didStartExitAction;
- (void)_didStartResourceLoading;
- (void)_editPluginSession:(id)arg1 checkVideoEnabled:(BOOL)arg2 loadVideoComplementURLWithHandler:(CDUnknownBlockType)arg3;
- (void)_handleAutoEnhanceButton:(id)arg1;
- (void)_handleCancelButton:(id)arg1;
- (void)_handleDidLoadAdjustmentsAndBaseImageWithResult:(id)arg1;
- (void)_handleDidLoadOriginalWithResult:(id)arg1;
- (void)_handleDoneButton:(id)arg1;
- (void)_handleLivePhotoTouchRecognizer:(id)arg1;
- (void)_handleMainActionButton:(id)arg1;
- (void)_handleMediaViewReady:(id)arg1 statistics:(id)arg2;
- (void)_handlePluginButton:(id)arg1;
- (void)_handleResourceLoadChange;
- (void)_handleRevertButton:(id)arg1;
- (void)_handleRevertResult:(id)arg1 error:(id)arg2;
- (void)_handleRunFinalizerGesture:(id)arg1;
- (void)_handleTTRButton:(id)arg1;
- (void)_handleTogglePreviewTapGesture:(id)arg1;
- (void)_handleToolbarToolButton:(id)arg1;
- (BOOL)_hasAdjustedSlowMotion;
- (BOOL)_hasUnsavedChanges;
- (void)_hideEphemeralViews:(BOOL)arg1;
- (CDStruct_910f5d27)_imageModulationOptions;
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
- (id)_newOutputForContentEditingInput:(id)arg1 compositionController:(id)arg2;
- (id)_newToolButtonForTool:(id)arg1;
- (void)_notifyDelegateSaveFinishedIfReadyWithAsset:(id)arg1;
- (id)_orientedCIImageFromUIImage:(id)arg1;
- (void)_performDiscardAction;
- (void)_performRevertAction;
- (struct CGRect)_placeholderViewFrame;
- (void)_ppt_conditionallyExecuteAfterRender;
- (id)_preferredStatusBarHideAnimationParameters;
- (void)_presentErrorAndDismissEditorWithTitle:(id)arg1 message:(id)arg2;
- (void)_presentErrorAndDismissEditorWithTitle:(id)arg1 message:(id)arg2 additionalAction:(id)arg3;
- (void)_presentWarningForIrisRemovesEditsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_reloadToolbarButtonsIfNeeded;
- (void)_removePlaceholderImageViewIfNeeded;
- (void)_requestDismissTransitionViewContentsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_requestLivePhotoAssetWithFilters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_resetModelAndBaseImagesToWorkImageVersion:(long long)arg1;
- (void)_resignCurrentTool;
- (void)_restoreSnapshot:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (int)_revertToEmptyCompositionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_runFinalizerWithDebugMessages:(BOOL)arg1;
- (int)_saveRevertedComposition:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_saveTrimAsCopyForCompositionController:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)_setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)_setOriginalURL:(id)arg1 originalEditSource:(id)arg2 originalOvercaptureSource:(id)arg3;
- (void)_setPlaceholderImage:(id)arg1 filters:(id)arg2;
- (void)_setPlaybackEnabled:(BOOL)arg1;
- (void)_setupImagePluginSession;
- (void)_setupToolsIfNeeded;
- (void)_setupVideoPluginSession;
- (BOOL)_shouldDisplayDepthButtonInToolbar;
- (BOOL)_shouldDisplayRedEyeTool;
- (BOOL)_shouldRequestAsyncAdjustmentForAsset:(id)arg1 compositionController:(id)arg2;
- (BOOL)_shouldShowDepthControl;
- (void)_showCancelAndRevertOptionsAllowResetTool:(BOOL)arg1;
- (void)_showJpegPreviewForRawRevertAlert;
- (void)_startMarkupSession;
- (void)_startMonitoringSaveProgressIfNeeded;
- (void)_startTimeoutTimerForAssetChange;
- (void)_startWaitingForAssetChange:(id)arg1;
- (void)_startWaitingForSaveRequestID:(int)arg1;
- (void)_stopMonitoringSaveProgress;
- (void)_stopWaitingForAssetChangeWithAsset:(id)arg1 success:(BOOL)arg2;
- (void)_stopWaitingForSaveRequestWithAsset:(id)arg1;
- (void)_timeoutWaitingForAssetChange;
- (void)_transitionToEditingTool:(id)arg1 animated:(BOOL)arg2;
- (void)_transitionToNewToolViewController:(id)arg1 oldToolViewController:(id)arg2 animationBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4 animated:(BOOL)arg5;
- (void)_updateAlternateToolbarAnimated:(BOOL)arg1;
- (void)_updateAutoEnhanceButtonAnimated:(BOOL)arg1;
- (void)_updateBackgroundColor;
- (void)_updateCancelButtonAnimated:(BOOL)arg1;
- (void)_updateLayoutOrientationWithViewSize:(struct CGSize)arg1 transitionCoordinator:(id)arg2;
- (void)_updateLivePhotoPlaybackGestureRecognizer;
- (void)_updateMainActionButtonAnimated:(BOOL)arg1;
- (void)_updateMediaViewEdgeInsets;
- (void)_updateMediaViewLayoutWithCoordinator:(id)arg1 layoutOrientation:(long long)arg2;
- (void)_updateMediaViewPlaybackStyle;
- (void)_updateModelDependentControlsAnimated:(BOOL)arg1;
- (void)_updatePenultimateAvailableWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updatePhotoEditIrisModel;
- (void)_updatePlaceholderImage;
- (void)_updatePluginButtonAnimated:(BOOL)arg1;
- (void)_updatePluginSession;
- (void)_updatePluginWorkImageVersion;
- (void)_updatePreviewingOriginal;
- (void)_updatePreviewingOriginalBadge;
- (void)_updateProgressEventBlockingViewConstraints;
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
- (BOOL)_wantsTTRButton;
- (id)adjustmentConstants;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (void)compositionController:(id)arg1 didAddAdjustment:(id)arg2;
- (void)compositionController:(id)arg1 didRemoveAdjustment:(id)arg2;
- (void)compositionController:(id)arg1 didUpdateAdjustment:(id)arg2;
- (void)compositionController:(id)arg1 didUpdateAdjustments:(id)arg2;
- (void)compositionControllerDidChangeForAdjustments:(id)arg1;
- (void)configureEnablenessOfControlButton:(id)arg1 animated:(BOOL)arg2 canVisuallyDisable:(BOOL)arg3;
- (long long)currentToolPickerLayoutDirection;
- (void)dealloc;
- (void)didFinishWithAsset:(id)arg1 savedChanges:(BOOL)arg2;
- (void)didFinishWithChanges:(BOOL)arg1;
- (void)dismissAccessibilityHUDForPhotoEditToolbar:(id)arg1;
- (void)dismissLivePhotoRevertConfirmationAlert;
- (void)editPluginSession:(id)arg1 commitContentEditingOutput:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)editPluginSession:(id)arg1 didEndWithCompletionType:(unsigned long long)arg2;
- (void)editPluginSession:(id)arg1 loadAdjustmentDataWithHandler:(CDUnknownBlockType)arg2;
- (void)editPluginSession:(id)arg1 loadDisplaySizeImageWithHandler:(CDUnknownBlockType)arg2;
- (void)editPluginSession:(id)arg1 loadFullSizeImageWithHandler:(CDUnknownBlockType)arg2;
- (void)editPluginSession:(id)arg1 loadPlaceholderImageWithHandler:(CDUnknownBlockType)arg2;
- (void)editPluginSession:(id)arg1 loadThumbnailImageWithSize:(struct CGSize)arg2 loadHandler:(CDUnknownBlockType)arg3;
- (void)editPluginSession:(id)arg1 loadVideoComplementURLWithHandler:(CDUnknownBlockType)arg2;
- (void)editPluginSession:(id)arg1 loadVideoURLWithHandler:(CDUnknownBlockType)arg2;
- (void)editPluginSessionAvailabilityDidChange:(id)arg1;
- (void)editPluginSessionWillBegin:(id)arg1;
- (id)fontForButtons;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)hasLoopingVideoAdjustment;
- (id)imageProperties;
- (id)initWithPhoto:(id)arg1 mediaProvider:(id)arg2 mediaDestination:(id)arg3;
- (void)invalidateTrashedStateForOvercaptureResources;
- (BOOL)isHighframeRateVideo;
- (BOOL)isImageFrameReady;
- (BOOL)isImageZooming;
- (BOOL)isStandardVideo;
- (id)mainLivePhotoView;
- (id)mediaView;
- (void)mediaViewDidEndLivePhotoPlayback:(id)arg1;
- (void)mediaViewDidEndZooming:(id)arg1;
- (void)mediaViewDidFinishPreparingVideo:(id)arg1;
- (void)mediaViewDidFinishRendering:(id)arg1 withStatistics:(id)arg2;
- (void)mediaViewDidStartPreparingVideo:(id)arg1;
- (void)mediaViewDidUpdateLivePhoto:(id)arg1;
- (void)mediaViewIsReadyForVideoPlayback:(id)arg1;
- (void)mediaViewWillBeginLivePhotoPlayback:(id)arg1;
- (void)mediaViewWillBeginZooming:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)oneUpAssetTransition:(id)arg1 animateTransitionWithContext:(id)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(CDUnknownBlockType)arg2;
- (void)oneUpAssetTransitionDidEnd:(id)arg1;
- (void)oneUpAssetTransitionWillBegin:(id)arg1;
- (void)pencilInteractionDidTap:(id)arg1;
- (void)photoEditResourceLoadRequest:(id)arg1 didCompleteWithResult:(id)arg2;
- (void)photoEditResourceLoadRequest:(id)arg1 downloadProgress:(double)arg2;
- (void)photoEditResourceLoadRequest:(id)arg1 mediaLoadDidFailWithError:(id)arg2;
- (void)photoEditResourceLoadRequestDidCompleteDownload:(id)arg1;
- (void)photoEditResourceLoadRequestResourcesAvailabilityChanged:(id)arg1 previousAvailability:(long long)arg2 currentAvailability:(long long)arg3;
- (void)photoEditResourceLoadRequestWillBeginDownload:(id)arg1;
- (id)photoEditToolbar:(id)arg1 accessibilityHUDItemForButton:(id)arg2;
- (void)photoEditToolbar:(id)arg1 showAccessibilityHUDForItem:(id)arg2;
- (void)photoLibraryChangesPausedDidChange;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)pluginActivitiesForEditPluginSession:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)ppt_applyAutoenhance:(CDUnknownBlockType)arg1;
- (void)ppt_cancelEdits;
- (void)ppt_cancelEditsWithCompletion:(CDUnknownBlockType)arg1;
- (void)ppt_configureSelectedSliderWithSteps:(long long)arg1;
- (void)ppt_executeAfterRender:(CDUnknownBlockType)arg1;
- (void)ppt_playLivePhotoWithWillBeginPlaybackBlock:(CDUnknownBlockType)arg1 didEndPlaybackBlock:(CDUnknownBlockType)arg2;
- (id)ppt_renderStatisticsDictionaryForTimeInterval:(double)arg1;
- (void)ppt_revert;
- (void)ppt_revertWithCompletion:(CDUnknownBlockType)arg1;
- (void)ppt_save;
- (void)ppt_saveWithCompletion:(CDUnknownBlockType)arg1;
- (void)ppt_scrollBWSlider:(CDUnknownBlockType)arg1;
- (void)ppt_scrollColorSlider:(CDUnknownBlockType)arg1;
- (void)ppt_scrollLightSlider:(CDUnknownBlockType)arg1;
- (void)ppt_scrollSelectedSliderByDelta;
- (void)ppt_selectAdjustmentsController:(CDUnknownBlockType)arg1;
- (void)ppt_selectCropController:(CDUnknownBlockType)arg1;
- (void)ppt_selectFiltersController:(CDUnknownBlockType)arg1;
- (void)ppt_selectNextLightingEffect:(CDUnknownBlockType)arg1;
- (void)ppt_selectPerspectiveController:(CDUnknownBlockType)arg1;
- (long long)preferredUserInterfaceStyle;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (BOOL)prefersStatusBarHidden;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (BOOL)pu_wantsNavigationBarVisible;
- (BOOL)pu_wantsTabBarVisible;
- (BOOL)pu_wantsToolbarVisible;
- (double)px_HDRFocus;
- (double)px_imageModulationIntensity;
- (void)resourcesForRevertAllowingDownload:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setPlaceholderImage:(id)arg1;
- (long long)sourceSelection;
- (void)switchEditSource:(long long)arg1;
- (void)switchToEditingTool:(id)arg1 animated:(BOOL)arg2;
- (void)toggleLivePhotoActive;
- (void)toolController:(id)arg1 didChangePreferredPreviewViewInsetsAnimated:(BOOL)arg2;
- (struct CGPoint)toolController:(id)arg1 originalPointFromViewPoint:(struct CGPoint)arg2 view:(id)arg3;
- (void)toolController:(id)arg1 switchEditSource:(long long)arg2;
- (void)toolController:(id)arg1 updateModelDependentControlsAnimated:(BOOL)arg2;
- (struct CGPoint)toolController:(id)arg1 viewPointFromOriginalPoint:(struct CGPoint)arg2 view:(id)arg3;
- (void)toolControllerDidChangeIsPerformingLiveInteraction:(id)arg1;
- (void)toolControllerDidChangePreferredAlternateToolbarButton:(id)arg1;
- (void)toolControllerDidChangeWantsDefaultPreviewView:(id)arg1;
- (void)toolControllerDidFinish:(id)arg1;
- (void)toolControllerDidFinishLoadingThumbnails:(id)arg1;
- (void)toolControllerDidUpdateToolbar:(id)arg1;
- (id)toolControllerHitEventForwardView:(id)arg1;
- (CDStruct_910f5d27)toolControllerImageModulationOptions:(id)arg1;
- (id)toolControllerLivePhoto:(id)arg1;
- (id)toolControllerMainContainerView:(id)arg1;
- (id)toolControllerMainRenderer:(id)arg1;
- (id)toolControllerOriginalCompositionController:(id)arg1;
- (struct CGSize)toolControllerOriginalImageSize:(id)arg1;
- (struct CGSize)toolControllerOriginalOrientedImageSize:(id)arg1;
- (id)toolControllerPlaceholderImage:(id)arg1;
- (id)toolControllerPreviewView:(id)arg1;
- (void)toolControllerRequestLivePhoto:(id)arg1 filters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)toolControllerSourceAssetType:(id)arg1;
- (id)toolControllerUneditedCompositionController:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)trimToolPlayerWrapper:(id)arg1 requestPlayerItemWithFilters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateMutedState;
- (void)updateProgressIndicatorAnimated:(BOOL)arg1;
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
