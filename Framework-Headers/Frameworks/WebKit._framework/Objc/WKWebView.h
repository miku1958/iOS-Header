//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <WebKit/UIResponderStandardEditActions-Protocol.h>
#import <WebKit/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSData, NSNumber, NSString, NSURL, UIScrollView, WKBackForwardList, WKBrowsingContextHandle, WKPasswordView, WKWebViewConfiguration, WKWebViewContentProviderRegistry, _WKFrameHandle, _WKInspector, _WKSessionState, _WKWebViewPrintFormatter;
@protocol WKHistoryDelegatePrivate, WKNavigationDelegate, WKUIDelegate, _WKDiagnosticLoggingDelegate, _WKFindDelegate, _WKFullscreenDelegate, _WKIconLoadingDelegate, _WKInputDelegate, _WKInspectorDelegate, _WKResourceLoadDelegate, _WKTextManipulationDelegate, _WKWebViewPrintProvider;

@interface WKWebView : UIView <UIScrollViewDelegate, UIResponderStandardEditActions>
{
    struct RetainPtr<WKWebViewConfiguration> _configuration;
    RefPtr_a805eeb8 _page;
    struct unique_ptr<WebKit::NavigationState, std::__1::default_delete<WebKit::NavigationState>> _navigationState;
    struct unique_ptr<WebKit::UIDelegate, std::__1::default_delete<WebKit::UIDelegate>> _uiDelegate;
    struct unique_ptr<WebKit::IconLoadingDelegate, std::__1::default_delete<WebKit::IconLoadingDelegate>> _iconLoadingDelegate;
    struct unique_ptr<WebKit::ResourceLoadDelegate, std::__1::default_delete<WebKit::ResourceLoadDelegate>> _resourceLoadDelegate;
    struct unique_ptr<WebKit::InspectorDelegate, std::__1::default_delete<WebKit::InspectorDelegate>> _inspectorDelegate;
    struct WeakObjCPtr<id<_WKTextManipulationDelegate>> _textManipulationDelegate;
    struct WeakObjCPtr<id<_WKInputDelegate>> _inputDelegate;
    struct RetainPtr<WKSafeBrowsingWarning> _safeBrowsingWarning;
    Optional_bcfc2d71 _resolutionForShareSheetImmediateCompletionForTesting;
    unsigned long long _selectionAttributes;
    unsigned long long _observedRenderingProgressEvents;
    BOOL _usePlatformFindUI;
    struct RetainPtr<WKScrollView> _scrollView;
    struct RetainPtr<WKContentView> _contentView;
    struct unique_ptr<WebKit::ViewGestureController, std::__1::default_delete<WebKit::ViewGestureController>> _gestureController;
    struct Vector<WTF::BlockPtr<void ()>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> _visibleContentRectUpdateCallbacks;
    struct RetainPtr<WKFullScreenWindowController> _fullScreenWindowController;
    struct RetainPtr<_WKRemoteObjectRegistry> _remoteObjectRegistry;
    struct Optional<CGSize> _viewLayoutSizeOverride;
    struct Optional<WebCore::FloatSize> _lastSentViewLayoutSize;
    struct Optional<CGSize> _maximumUnobscuredSizeOverride;
    struct Optional<WebCore::FloatSize> _lastSentMaximumUnobscuredSize;
    struct CGRect _inputViewBounds;
    double _viewportMetaTagWidth;
    BOOL _viewportMetaTagWidthWasExplicit;
    BOOL _viewportMetaTagCameFromImageDocument;
    double _initialScaleFactor;
    BOOL _fastClickingIsDisabled;
    BOOL _allowsLinkPreview;
    struct UIEdgeInsets _obscuredInsets;
    BOOL _haveSetObscuredInsets;
    BOOL _isChangingObscuredInsetsInteractively;
    struct UIEdgeInsets _unobscuredSafeAreaInsets;
    BOOL _haveSetUnobscuredSafeAreaInsets;
    BOOL _avoidsUnsafeArea;
    unsigned long long _obscuredInsetEdgesAffectedBySafeArea;
    long long _interfaceOrientationOverride;
    BOOL _overridesInterfaceOrientation;
    struct Optional<int> _lastSentDeviceOrientation;
    BOOL _allowsViewportShrinkToFit;
    BOOL _hasCommittedLoadForMainFrame;
    BOOL _needsResetViewStateAfterCommitLoadForMainFrame;
    struct MonotonicObjectIdentifier<WebKit::TransactionIDType> _firstPaintAfterCommitLoadTransactionID;
    struct MonotonicObjectIdentifier<WebKit::TransactionIDType> _lastTransactionID;
    int _dynamicViewportUpdateMode;
    unsigned long long _currentDynamicViewportSizeUpdateID;
    struct CATransform3D _resizeAnimationTransformAdjustments;
    double _animatedResizeOriginalContentWidth;
    RetainPtr_1ac284e4 _resizeAnimationView;
    double _lastAdjustmentForScroller;
    struct Optional<CGRect> _frozenVisibleContentRect;
    struct Optional<CGRect> _frozenUnobscuredContentRect;
    BOOL _commitDidRestoreScrollPosition;
    Optional_e2240183 _scrollOffsetToRestore;
    RectEdges_0629eaa8 _obscuredInsetsWhenSaved;
    Optional_e2240183 _unobscuredCenterToRestore;
    struct Optional<WebKit::MonotonicObjectIdentifier<WebKit::TransactionIDType>> _firstTransactionIDAfterPageRestore;
    double _scaleToRestore;
    BOOL _allowsBackForwardNavigationGestures;
    struct RetainPtr<UIView<WKWebViewContentProvider>> _customContentView;
    RetainPtr_1ac284e4 _customContentFixedOverlayView;
    struct RetainPtr<NSTimer> _enclosingScrollViewScrollTimer;
    BOOL _didScrollSinceLastTimerFire;
    struct Color _scrollViewBackgroundColor;
    double _totalScrollViewBottomInsetAdjustmentForKeyboard;
    BOOL _currentlyAdjustingScrollViewInsetsForKeyboard;
    BOOL _invokingUIScrollViewDelegateCallback;
    BOOL _didDeferUpdateVisibleContentRectsForUIScrollViewDelegateCallback;
    BOOL _didDeferUpdateVisibleContentRectsForAnyReason;
    BOOL _didDeferUpdateVisibleContentRectsForUnstableScrollView;
    BOOL _alwaysSendNextVisibleContentRectUpdate;
    BOOL _contentViewShouldBecomeFirstResponderAfterNavigationGesture;
    BOOL _waitingForEndAnimatedResize;
    BOOL _waitingForCommitAfterAnimatedResize;
    struct Vector<WTF::Function<void ()>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> _callbacksDeferredDuringResize;
    struct RetainPtr<NSMutableArray> _stableStatePresentationUpdateCallbacks;
    struct RetainPtr<WKPasswordView> _passwordView;
    BOOL _hasScheduledVisibleRectUpdate;
    BOOL _visibleContentRectUpdateScheduledFromScrollViewInStableState;
    unsigned long long _dragInteractionPolicy;
    struct MonotonicTime _timeOfRequestForVisibleContentRectUpdate;
    struct MonotonicTime _timeOfLastVisibleContentRectUpdate;
    struct Optional<WTF::MonotonicTime> _timeOfFirstVisibleContentRectUpdateWithPendingCommit;
    unsigned long long _focusPreservationCount;
    unsigned long long _activeFocusedStateRetainCount;
}

@property (weak, nonatomic) id<WKUIDelegate> UIDelegate;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *_MIMEType;
@property (nonatomic, setter=_setAddsVisitedLinks:) BOOL _addsVisitedLinks;
@property (readonly, nonatomic) BOOL _allowsDoubleTapGestures;
@property (nonatomic, getter=_allowsMediaDocumentInlinePlayback, setter=_setAllowsMediaDocumentInlinePlayback:) BOOL _allowsMediaDocumentInlinePlayback;
@property (nonatomic, setter=_setAllowsRemoteInspection:) BOOL _allowsRemoteInspection;
@property (nonatomic, setter=_setAllowsViewportShrinkToFit:) BOOL _allowsViewportShrinkToFit;
@property (copy, setter=_setApplicationNameForUserAgent:) NSString *_applicationNameForUserAgent;
@property (nonatomic, setter=_setBackgroundExtendsBeyondPage:) BOOL _backgroundExtendsBeyondPage;
@property (readonly, nonatomic) BOOL _canTogglePictureInPicture;
@property (readonly, nonatomic) NSArray *_certificateChain;
@property (readonly, nonatomic) NSURL *_committedURL;
@property (readonly, nonatomic) struct UIEdgeInsets _computedObscuredInset;
@property (readonly, nonatomic) struct UIEdgeInsets _computedUnobscuredSafeAreaInset;
@property (readonly, nonatomic) WKWebViewContentProviderRegistry *_contentProviderRegistry;
@property (readonly, nonatomic) BOOL _contentViewIsFirstResponder;
@property (readonly, nonatomic) struct CGRect _contentVisibleRect;
@property (copy, nonatomic, setter=_setCORSDisablingPatterns:) NSArray *_corsDisablingPatterns;
@property (copy, setter=_setCustomUserAgent:) NSString *_customUserAgent;
@property (readonly, nonatomic) NSData *_dataForDisplayedPDF;
@property (readonly, nonatomic) BOOL _deferrableUserScriptsNeedNotification;
@property (readonly, nonatomic) int _deviceOrientation;
@property (weak, nonatomic, setter=_setDiagnosticLoggingDelegate:) id<_WKDiagnosticLoggingDelegate> _diagnosticLoggingDelegate;
@property (readonly, nonatomic, getter=_isDisplayingPDF) BOOL _displayingPDF;
@property (readonly, nonatomic, getter=_isDisplayingStandaloneImageDocument) BOOL _displayingStandaloneImageDocument;
@property (readonly, nonatomic, getter=_isDisplayingStandaloneMediaDocument) BOOL _displayingStandaloneMediaDocument;
@property (readonly, nonatomic) struct CGRect _dragCaretRect;
@property (nonatomic, setter=_setDragInteractionPolicy:) unsigned long long _dragInteractionPolicy;
@property (nonatomic, getter=_isEditable, setter=_setEditable:) BOOL _editable;
@property (readonly, nonatomic) UIView *_enclosingViewForExposedRectComputation;
@property (weak, nonatomic, setter=_setFindDelegate:) id<_WKFindDelegate> _findDelegate;
@property (nonatomic, setter=_setFixedLayoutSize:) struct CGSize _fixedLayoutSize;
@property (nonatomic, setter=_setFullscreenDelegate:) id<_WKFullscreenDelegate> _fullscreenDelegate;
@property (nonatomic, setter=_setGapBetweenPages:) double _gapBetweenPages;
@property (readonly, nonatomic) WKBrowsingContextHandle *_handle;
@property (readonly, nonatomic) BOOL _hasInspectorFrontend;
@property (readonly, nonatomic) BOOL _hasServiceWorkerBackgroundActivityForTesting;
@property (readonly, nonatomic) BOOL _hasServiceWorkerForegroundActivityForTesting;
@property (readonly, nonatomic) BOOL _haveSetObscuredInsets;
@property (weak, nonatomic, setter=_setHistoryDelegate:) id<WKHistoryDelegatePrivate> _historyDelegate;
@property (weak, nonatomic, setter=_setIconLoadingDelegate:) id<_WKIconLoadingDelegate> _iconLoadingDelegate;
@property (weak, nonatomic, setter=_setInputDelegate:) id<_WKInputDelegate> _inputDelegate;
@property (readonly, nonatomic) struct CGRect _inputViewBounds;
@property (readonly, nonatomic) _WKInspector *_inspector;
@property (weak, nonatomic, setter=_setInspectorDelegate:) id<_WKInspectorDelegate> _inspectorDelegate;
@property (nonatomic, setter=_setInterfaceOrientationOverride:) long long _interfaceOrientationOverride;
@property (readonly, nonatomic) BOOL _isBackground;
@property (readonly, nonatomic) BOOL _isInFullscreen;
@property (readonly, nonatomic) BOOL _isPictureInPictureActive;
@property (nonatomic, setter=_setLayoutMode:) unsigned long long _layoutMode;
@property (readonly, nonatomic) _WKFrameHandle *_mainFrame;
@property (readonly, nonatomic) NSURL *_mainFrameURL;
@property (readonly, nonatomic) struct CGSize _maximumUnobscuredSizeOverride;
@property (nonatomic, setter=_setMediaCaptureEnabled:) BOOL _mediaCaptureEnabled;
@property (readonly, nonatomic) unsigned long long _mediaCaptureState;
@property (readonly, nonatomic) unsigned long long _mediaMutedState;
@property (nonatomic, setter=_setMinimumEffectiveDeviceWidth:) double _minimumEffectiveDeviceWidth;
@property (readonly, nonatomic) struct CGSize _minimumLayoutSizeOverride;
@property (readonly, nonatomic) BOOL _negotiatedLegacyTLS;
@property (readonly, nonatomic) BOOL _networkRequestsInProgress;
@property (nonatomic, setter=_setObscuredInsetEdgesAffectedBySafeArea:) unsigned long long _obscuredInsetEdgesAffectedBySafeArea;
@property (nonatomic, setter=_setObscuredInsets:) struct UIEdgeInsets _obscuredInsets;
@property (nonatomic, setter=_setObservedRenderingProgressEvents:) unsigned long long _observedRenderingProgressEvents;
@property (readonly) unsigned long long _pageCount;
@property (nonatomic, setter=_setPageLength:) double _pageLength;
@property (nonatomic, setter=_setPageZoomFactor:) double _pageZoomFactor;
@property (nonatomic, setter=_setPaginationBehavesLikeColumns:) BOOL _paginationBehavesLikeColumns;
@property (nonatomic, setter=_setPaginationLineGridEnabled:) BOOL _paginationLineGridEnabled;
@property (nonatomic, setter=_setPaginationMode:) long long _paginationMode;
@property (readonly, nonatomic) WKPasswordView *_passwordView;
@property (readonly, nonatomic, getter=_isPlayingAudio) BOOL _playingAudio;
@property (readonly, nonatomic) id<_WKWebViewPrintProvider> _printProvider;
@property (readonly, nonatomic) int _provisionalWebProcessIdentifier;
@property (copy, nonatomic, setter=_setRemoteInspectionNameOverride:) NSString *_remoteInspectionNameOverride;
@property (readonly, nonatomic) id _remoteObjectRegistry;
@property (readonly, nonatomic) NSURL *_resourceDirectoryURL;
@property (weak, nonatomic, setter=_setResourceLoadDelegate:) id<_WKResourceLoadDelegate> _resourceLoadDelegate;
@property (readonly, nonatomic, getter=_isRetainingActiveFocusedState) BOOL _retainingActiveFocusedState;
@property (readonly, nonatomic) BOOL _safeAreaShouldAffectObscuredInsets;
@property (readonly, nonatomic) UIView *_safeBrowsingWarning;
@property (readonly, nonatomic) NSArray *_scrollPerformanceData;
@property (nonatomic, setter=_setScrollPerformanceDataCollectionEnabled:) BOOL _scrollPerformanceDataCollectionEnabled;
@property (readonly, nonatomic) NSString *_scrollingTreeAsText;
@property (nonatomic, setter=_setScrollingUpdatesDisabledForTesting:) BOOL _scrollingUpdatesDisabledForTesting;
@property (readonly, nonatomic) unsigned long long _selectionAttributes;
@property (readonly, nonatomic) long long _selectionGranularity;
@property (readonly, nonatomic) _WKSessionState *_sessionState;
@property (readonly, nonatomic) NSData *_sessionStateData;
@property (readonly, nonatomic) BOOL _shouldAvoidResizingWhenInputViewBoundsChange;
@property (readonly, nonatomic, getter=_isShowingNavigationGestureSnapshot) BOOL _showingNavigationGestureSnapshot;
@property (readonly, nonatomic) NSNumber *_stableStateOverride;
@property (readonly, nonatomic) BOOL _stylusTapGestureShouldCreateEditableImage;
@property (readonly, nonatomic) NSString *_suggestedFilenameForDisplayedPDF;
@property (readonly, nonatomic) BOOL _supportsTextZoom;
@property (weak, nonatomic, setter=_setTextManipulationDelegate:) id<_WKTextManipulationDelegate> _textManipulationDelegate;
@property (nonatomic, setter=_setTextZoomFactor:) double _textZoomFactor;
@property (readonly, nonatomic) struct CGRect _uiTextCaretRect;
@property (readonly, nonatomic) NSArray *_uiTextSelectionRects;
@property (nonatomic, setter=_setUnobscuredSafeAreaInsets:) struct UIEdgeInsets _unobscuredSafeAreaInsets;
@property (readonly, nonatomic) NSURL *_unreachableURL;
@property (readonly, nonatomic) NSString *_userAgent;
@property (nonatomic, setter=_setUserContentExtensionsEnabled:) BOOL _userContentExtensionsEnabled;
@property (nonatomic, setter=_setViewScale:) double _viewScale;
@property (nonatomic, setter=_setViewportSizeForCSSViewportUnits:) struct CGSize _viewportSizeForCSSViewportUnits;
@property (readonly, nonatomic) int _webProcessIdentifier;
@property (readonly, nonatomic) BOOL _webProcessIsResponsive;
@property (readonly, nonatomic) _WKWebViewPrintFormatter *_webViewPrintFormatter;
@property (nonatomic) BOOL allowsBackForwardNavigationGestures;
@property (nonatomic) BOOL allowsLinkPreview;
@property (readonly, nonatomic) WKBackForwardList *backForwardList;
@property (readonly, nonatomic) BOOL canGoBack;
@property (readonly, nonatomic) BOOL canGoForward;
@property (readonly, copy, nonatomic) NSArray *certificateChain;
@property (readonly, copy, nonatomic) WKWebViewConfiguration *configuration;
@property (copy, nonatomic) NSString *customUserAgent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) double estimatedProgress;
@property (readonly, nonatomic) NSString *formInputLabel;
@property (readonly, nonatomic) BOOL hasOnlySecureContent;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (copy, nonatomic) NSString *mediaType;
@property (weak, nonatomic) id<WKNavigationDelegate> navigationDelegate;
@property (nonatomic) double pageZoom;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) NSString *selectFormPopoverTitle;
@property (readonly, nonatomic) struct __SecTrust *serverTrust;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *textContentTypeForTesting;
@property (readonly, copy, nonatomic) NSString *title;

+ (void)_clearApplicationBundleIdentifierTestingOverride;
+ (id)_confirmMalwareSentinel;
+ (BOOL)_handlesSafeBrowsing;
+ (void)_setApplicationBundleIdentifier:(id)arg1;
+ (void)_setStringForFind:(id)arg1;
+ (id)_stringForFind;
+ (id)_visitUnsafeWebsiteSentinel;
+ (BOOL)handlesURLScheme:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_accessibilityClearSelection;
- (void)_accessibilityDidGetSpeakSelectionContent:(id)arg1;
- (void)_accessibilityRetrieveRectsAtSelectionOffset:(long long)arg1 withText:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_accessibilityRetrieveSpeakSelectionContent;
- (void)_accessibilitySettingsDidChange:(id)arg1;
- (void)_accessibilityStoreSelection;
- (void)_addShortcut:(id)arg1;
- (void)_addUpdateVisibleContentRectPreCommitHandler;
- (void)_adjustSelectionWithDelta:(struct _NSRange)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_alignCenter:(id)arg1;
- (void)_alignJustified:(id)arg1;
- (void)_alignLeft:(id)arg1;
- (void)_alignRight:(id)arg1;
- (id)_attachmentForIdentifier:(id)arg1;
- (int)_audioRoutingArbitrationStatus;
- (void)_becomeFirstResponderWithSelectionMovingForward:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_beginAnimatedResizeWithUpdates:(CDUnknownBlockType)arg1;
- (BOOL)_beginBackSwipeForTesting;
- (void)_beginInteractiveObscuredInsetsChange;
- (void)_callAsyncJavaScript:(id)arg1 arguments:(id)arg2 inFrame:(id)arg3 inContentWorld:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_cancelAnimatedResize;
- (void)_changeListType:(id)arg1;
- (void)_clearInterfaceOrientationOverride;
- (void)_clearOverrideLayoutParameters;
- (void)_clearSafeBrowsingWarning;
- (void)_clearSafeBrowsingWarningIfForMainFrameNavigation;
- (void)_clearServiceWorkerEntitlementOverride:(CDUnknownBlockType)arg1;
- (void)_close;
- (void)_closeAllMediaPresentations;
- (BOOL)_completeBackSwipeForTesting;
- (void)_completeTextManipulation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_completeTextManipulationForItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (struct UIEdgeInsets)_computedContentInset;
- (struct UIEdgeInsets)_computedObscuredInsetForSafeBrowsingWarning;
- (struct CGRect)_contentBoundsExtendedForRubberbandingWithScale:(double)arg1;
- (struct CGPoint)_contentOffsetAdjustedForObscuredInset:(struct CGPoint)arg1;
- (struct CGRect)_contentRectForUserInteraction;
- (id)_contentSizeCategory;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (double)_contentZoomScale;
- (id)_contentsOfUserInterfaceItem:(id)arg1;
- (struct CGPoint)_convertPointFromContentsToView:(struct CGPoint)arg1;
- (struct CGPoint)_convertPointFromViewToContents:(struct CGPoint)arg1;
- (void)_couldNotRestorePageState;
- (void)_countStringMatches:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (id)_currentContentView;
- (id)_dataDetectionResults;
- (void)_decreaseListLevel:(id)arg1;
- (void)_decrementFocusPreservationCount;
- (void)_define:(id)arg1;
- (void)_denyNextUserMediaRequest;
- (void)_detectDataWithTypes:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_didChangeEditorState;
- (void)_didCommitLayerTree:(const struct RemoteLayerTreeTransaction *)arg1;
- (void)_didCommitLayerTreeDuringAnimatedResize:(const struct RemoteLayerTreeTransaction *)arg1;
- (void)_didCommitLoadForMainFrame;
- (void)_didCompleteAnimatedResize;
- (void)_didDismissContextMenu;
- (void)_didFailNavigation:(struct Navigation *)arg1;
- (void)_didFinishLoadingDataForCustomContentProviderWithSuggestedFilename:(const struct String *)arg1 data:(id)arg2;
- (void)_didFinishNavigation:(struct Navigation *)arg1;
- (void)_didFinishScrolling;
- (void)_didFinishTextInteractionInTextInputContext:(id)arg1;
- (void)_didInsertAttachment:(struct Attachment *)arg1 withSource:(id)arg2;
- (void)_didInvalidateDataForAttachment:(struct Attachment *)arg1;
- (void)_didInvokeUIScrollViewDelegateCallback;
- (void)_didRelaunchProcess;
- (void)_didRemoveAttachment:(struct Attachment *)arg1;
- (void)_didSameDocumentNavigationForMainFrame:(int)arg1;
- (void)_didScroll;
- (void)_didShowContextMenu;
- (void)_didStartProvisionalLoadForMainFrame;
- (void)_disableBackForwardSnapshotVolatilityForTesting;
- (void)_dismissFilePicker;
- (void)_dispatchSetDeviceOrientation:(int)arg1;
- (void)_dispatchSetMaximumUnobscuredSize:(struct FloatSize)arg1;
- (void)_dispatchSetViewLayoutSize:(struct FloatSize)arg1;
- (void)_doAfterNextPresentationUpdate:(CDUnknownBlockType)arg1;
- (void)_doAfterNextPresentationUpdateWithoutWaitingForAnimatedResizeForTesting:(CDUnknownBlockType)arg1;
- (void)_doAfterNextPresentationUpdateWithoutWaitingForPainting:(CDUnknownBlockType)arg1;
- (void)_doAfterNextStablePresentationUpdate:(CDUnknownBlockType)arg1;
- (void)_doAfterNextVisibleContentRectUpdate:(CDUnknownBlockType)arg1;
- (void)_doAfterProcessingAllPendingMouseEvents:(CDUnknownBlockType)arg1;
- (void)_doAfterReceivingEditDragSnapshotForTesting:(CDUnknownBlockType)arg1;
- (void)_doAfterResettingSingleTapGesture:(CDUnknownBlockType)arg1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (BOOL)_effectiveAppearanceIsDark;
- (unsigned long long)_effectiveObscuredInsetEdgesAffectedBySafeArea;
- (BOOL)_effectiveUserInterfaceLevelIsElevated;
- (void)_enclosingScrollerScrollingEnded:(id)arg1;
- (void)_endAnimatedResize;
- (void)_endInteractiveObscuredInsetsChange;
- (void)_evaluateJavaScript:(id)arg1 asAsyncFunction:(BOOL)arg2 withSourceURL:(id)arg3 withArguments:(id)arg4 forceUserGesture:(BOOL)arg5 inFrame:(id)arg6 inWorld:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)_evaluateJavaScript:(id)arg1 inFrame:(id)arg2 inContentWorld:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_evaluateJavaScript:(id)arg1 withSourceURL:(id)arg2 inFrame:(id)arg3 inContentWorld:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_evaluateJavaScriptWithoutUserGesture:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_executeEditCommand:(id)arg1 argument:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_findString:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (void)_firePresentationUpdateForPendingStableStatePresentationCallbacks;
- (void)_focusTextInputContext:(id)arg1 placeCaretAt:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_formDelegate;
- (void)_frameOrBoundsChanged;
- (void)_frames:(CDUnknownBlockType)arg1;
- (id)_fullScreenPlaceholderView;
- (void)_getApplicationManifestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_getContentsAsAttributedStringWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_getContentsAsStringWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_getContentsOfAllFramesAsStringWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_getMainResourceDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_getProcessDisplayNameWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_getWebArchiveDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_grantAccessToAssetServices;
- (void)_grantAccessToPreferenceService;
- (void)_handleKeyUIEvent:(id)arg1;
- (BOOL)_hasSleepDisabler;
- (void)_hideContentUntilNextUpdate;
- (void)_hideFindUI;
- (void)_hidePasswordView;
- (void)_increaseListLevel:(id)arg1;
- (void)_incrementFocusPreservationCount;
- (void)_indent:(id)arg1;
- (struct CGPoint)_initialContentOffsetForScrollView;
- (double)_initialScaleFactor;
- (void)_initializeWithConfiguration:(id)arg1;
- (id)_insertAttachmentWithFileWrapper:(id)arg1 contentType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_insertAttachmentWithFileWrapper:(id)arg1 contentType:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_insertAttachmentWithFilename:(id)arg1 contentType:(id)arg2 data:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_insertNestedOrderedList:(id)arg1;
- (void)_insertNestedUnorderedList:(id)arg1;
- (void)_insertOrderedList:(id)arg1;
- (void)_insertUnorderedList:(id)arg1;
- (void)_internalDoAfterNextPresentationUpdate:(CDUnknownBlockType)arg1 withoutWaitingForPainting:(BOOL)arg2 withoutWaitingForAnimatedResize:(BOOL)arg3;
- (BOOL)_isClosed;
- (void)_isForcedIntoAppBoundMode:(CDUnknownBlockType)arg1;
- (void)_isJITEnabled:(CDUnknownBlockType)arg1;
- (void)_isNavigatingToAppBoundDomain:(CDUnknownBlockType)arg1;
- (BOOL)_isNavigationSwipeGestureRecognizer:(id)arg1;
- (BOOL)_isShowingVideoPictureInPicture;
- (BOOL)_isValid;
- (void)_keyboardChangedWithInfo:(id)arg1 adjustScrollView:(BOOL)arg2;
- (void)_keyboardDidChangeFrame:(id)arg1;
- (void)_keyboardDidShow:(id)arg1;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_killWebContentProcess;
- (void)_killWebContentProcessAndResetState;
- (void)_layerTreeCommitComplete;
- (void)_loadAlternateHTMLString:(id)arg1 baseURL:(id)arg2 forUnreachableURL:(id)arg3;
- (id)_loadData:(id)arg1 MIMEType:(id)arg2 characterEncodingName:(id)arg3 baseURL:(id)arg4 userData:(id)arg5;
- (id)_loadRequest:(id)arg1 shouldOpenExternalURLs:(BOOL)arg2;
- (void)_lookup:(id)arg1;
- (BOOL)_mayAutomaticallyShowVideoPictureInPicture;
- (BOOL)_mayContainEditableElementsInRect:(struct CGRect)arg1;
- (void)_navigationGestureDidBegin;
- (void)_navigationGestureDidEnd;
- (void)_nextAccessoryTab:(id)arg1;
- (void)_notifyUserScripts;
- (void)_outdent:(id)arg1;
- (void)_overrideLayoutParametersWithMinimumLayoutSize:(struct CGSize)arg1 maximumUnobscuredSizeOverride:(struct CGSize)arg2;
- (void)_overrideViewportWithArguments:(id)arg1;
- (NakedPtr_6294102f)_page;
- (struct OpaqueWKPage *)_pageForTesting;
- (double)_pageScale;
- (void)_pasteAndMatchStyle:(id)arg1;
- (void)_pasteAsQuotation:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_preconnectToServer:(id)arg1;
- (void)_previousAccessoryTab:(id)arg1;
- (Class)_printFormatterClass;
- (void)_processDidExit;
- (void)_processDidResumeForTesting;
- (void)_processWillSuspendForTesting:(CDUnknownBlockType)arg1;
- (void)_processWillSuspendImminentlyForTesting;
- (void)_processWillSwap;
- (void)_processWillSwapOrDidExit;
- (void)_promptForReplace:(id)arg1;
- (id)_propertiesOfLayerWithID:(unsigned long long)arg1;
- (void)_registerForNotifications;
- (id)_reloadExpiredOnly;
- (id)_reloadWithoutContentBlockers;
- (void)_removeDataDetectedLinks:(CDUnknownBlockType)arg1;
- (void)_requestActivatedElementAtPosition:(struct CGPoint)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_requestActiveNowPlayingSessionInfo:(CDUnknownBlockType)arg1;
- (void)_requestDocumentContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_requestTextInputContextsInRect:(struct CGRect)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_resetFocusPreservationCount;
- (void)_resetNavigationGestureStateForTesting;
- (void)_resizeWhileHidingContentWithUpdates:(CDUnknownBlockType)arg1;
- (Optional_bcfc2d71)_resolutionForShareSheetImmediateCompletionForTesting;
- (void)_restoreFromSessionStateData:(id)arg1;
- (void)_restorePageScrollPosition:(Optional_e2240183)arg1 scrollOrigin:(struct FloatPoint)arg2 previousObscuredInset:(RectEdges_0629eaa8)arg3 scale:(double)arg4;
- (void)_restorePageStateToUnobscuredCenter:(Optional_e2240183)arg1 scale:(double)arg2;
- (BOOL)_restoreScrollAndZoomStateForTransaction:(const struct RemoteLayerTreeTransaction *)arg1;
- (id)_restoreSessionState:(id)arg1 andNavigate:(BOOL)arg2;
- (void)_resumeAllMediaPlayback;
- (CDUnknownBlockType)_retainActiveFocusedState;
- (void)_revokeAccessToAssetServices;
- (void)_saveBackForwardSnapshotForItem:(id)arg1;
- (void)_scheduleForcedVisibleContentRectUpdate;
- (void)_scheduleVisibleContentRectUpdate;
- (void)_scheduleVisibleContentRectUpdateAfterScrollInView:(id)arg1;
- (void)_scrollToContentScrollPosition:(struct FloatPoint)arg1 scrollOrigin:(struct IntPoint)arg2;
- (BOOL)_scrollToRect:(struct FloatRect)arg1 origin:(struct FloatPoint)arg2 minimumScrollDistance:(float)arg3;
- (struct CGPoint)_scrollView:(id)arg1 adjustedOffsetForOffset:(struct CGPoint)arg2 translation:(struct CGPoint)arg3 startPoint:(struct CGPoint)arg4 locationInView:(struct CGPoint)arg5 horizontalVelocity:(inout double *)arg6 verticalVelocity:(inout double *)arg7;
- (void)_scrollViewDidInterruptDecelerating:(id)arg1;
- (BOOL)_scrollViewIsInStableState:(id)arg1;
- (BOOL)_scrollViewIsRubberBanding;
- (struct UIEdgeInsets)_scrollViewSystemContentInset;
- (void)_serviceWorkersEnabled:(CDUnknownBlockType)arg1;
- (id)_sessionStateWithFilter:(CDUnknownBlockType)arg1;
- (void)_setAssertionTypeForTesting:(int)arg1;
- (void)_setAvoidsUnsafeArea:(BOOL)arg1;
- (void)_setContinuousSpellCheckingEnabledForTesting:(BOOL)arg1;
- (void)_setDefersLoadingForTesting:(BOOL)arg1;
- (void)_setDeviceHasAGXCompilerServiceForTesting;
- (void)_setDeviceOrientationUserPermissionHandlerForTesting:(CDUnknownBlockType)arg1;
- (void)_setFont:(id)arg1 sender:(id)arg2;
- (void)_setFontSize:(double)arg1 sender:(id)arg2;
- (void)_setFormDelegate:(id)arg1;
- (void)_setHasCustomContentView:(BOOL)arg1 loadedMIMEType:(const struct String *)arg2;
- (void)_setMaximumUnobscuredSizeOverride:(struct CGSize)arg1;
- (void)_setOpaqueInternal:(BOOL)arg1;
- (void)_setOverlaidAccessoryViewsInset:(struct CGSize)arg1;
- (void)_setPageMuted:(unsigned long long)arg1;
- (void)_setPageScale:(double)arg1 withOrigin:(struct CGPoint)arg2;
- (void)_setShareSheetCompletesImmediatelyWithResolutionForTesting:(BOOL)arg1;
- (void)_setSuppressSoftwareKeyboard:(BOOL)arg1;
- (void)_setTextColor:(id)arg1 sender:(id)arg2;
- (void)_setViewLayoutSizeOverride:(struct CGSize)arg1;
- (void)_setupPageConfiguration:(Ref_1d7364d1 *)arg1;
- (void)_setupScrollAndContentViews;
- (void)_share:(id)arg1;
- (BOOL)_shouldUpdateKeyboardWithInfo:(id)arg1;
- (void)_showPasswordViewWithDocumentName:(id)arg1 passwordHandler:(CDUnknownBlockType)arg2;
- (void)_showSafeBrowsingWarning:(const struct SafeBrowsingWarning *)arg1 completionHandler:(CompletionHandler_2c34b13f *)arg2;
- (void)_showSafeBrowsingWarningWithTitle:(id)arg1 warning:(id)arg2 details:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_showSafeBrowsingWarningWithURL:(id)arg1 title:(id)arg2 warning:(id)arg3 details:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_showSafeBrowsingWarningWithURL:(id)arg1 title:(id)arg2 warning:(id)arg3 detailsWithLinks:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_showTextStyleOptions:(id)arg1;
- (void)_simulateDeviceOrientationChangeWithAlpha:(double)arg1 beta:(double)arg2 gamma:(double)arg3;
- (void)_simulateElementAction:(long long)arg1 atLocation:(struct CGPoint)arg2;
- (void)_simulateLongPressActionAtLocation:(struct CGPoint)arg1;
- (void)_simulateTextEntered:(id)arg1;
- (id)_snapshotLayerContentsForBackForwardListItem:(id)arg1;
- (void)_snapshotRect:(struct CGRect)arg1 intoImageOfWidth:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_startTextManipulationsWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_stopAllMediaPlayback;
- (void)_stopMediaCapture;
- (void)_suspendAllMediaPlayback;
- (void)_takeFindStringFromSelection:(id)arg1;
- (void)_takePDFSnapshotWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (RefPtr_ea22377f)_takeViewSnapshot;
- (double)_targetContentZoomScaleForRect:(const struct FloatRect *)arg1 currentScale:(double)arg2 fitEntireRect:(BOOL)arg3 minimumScale:(double)arg4 maximumScale:(double)arg5;
- (void)_togglePictureInPicture;
- (void)_toggleStrikeThrough:(id)arg1;
- (void)_trackTransactionCommit:(const struct RemoteLayerTreeTransaction *)arg1;
- (void)_transliterateChinese:(id)arg1;
- (void)_triggerSystemPreviewActionOnElement:(unsigned long long)arg1 document:(unsigned long long)arg2 page:(unsigned long long)arg3;
- (void)_tryClose;
- (void)_updateMediaPlaybackControlsManager;
- (void)_updateScrollViewBackground;
- (void)_updateScrollViewForTransaction:(const struct RemoteLayerTreeTransaction *)arg1;
- (void)_updateScrollViewInsetAdjustmentBehavior;
- (void)_updateVisibleContentRects;
- (void)_updateWebpagePreferences:(id)arg1;
- (void)_updateWebsitePolicies:(id)arg1;
- (void)_videoControlsManagerDidChange;
- (id)_viewForFindUI;
- (struct CGRect)_visibleContentRect;
- (struct CGRect)_visibleRectInEnclosingView:(id)arg1;
- (void)_willBeginTextInteractionInTextInputContext:(id)arg1;
- (void)_willInvokeUIScrollViewDelegateCallback;
- (void)_willOpenAppLink;
- (void)_windowDidRotate:(id)arg1;
- (void)_zoomOutWithOrigin:(struct FloatPoint)arg1 animated:(BOOL)arg2;
- (void)_zoomToFocusRect:(const struct FloatRect *)arg1 selectionRect:(const struct FloatRect *)arg2 insideFixed:(BOOL)arg3 fontSize:(float)arg4 minimumScale:(double)arg5 maximumScale:(double)arg6 allowScaling:(BOOL)arg7 forceScroll:(BOOL)arg8;
- (void)_zoomToInitialScaleWithOrigin:(struct FloatPoint)arg1 animated:(BOOL)arg2;
- (void)_zoomToPoint:(struct FloatPoint)arg1 atScale:(double)arg2 animated:(BOOL)arg3;
- (void)_zoomToRect:(struct FloatRect)arg1 atScale:(double)arg2 origin:(struct FloatPoint)arg3 animated:(BOOL)arg4;
- (BOOL)_zoomToRect:(struct FloatRect)arg1 withOrigin:(struct FloatPoint)arg2 fitEntireRect:(BOOL)arg3 minimumScale:(double)arg4 maximumScale:(double)arg5 minimumScrollDistance:(float)arg6;
- (struct FloatSize)activeViewLayoutSize:(const struct CGRect *)arg1;
- (void)applyAutocorrection:(id)arg1 toString:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)becomeFirstResponder;
- (id)browsingContextController;
- (void)callAsyncJavaScript:(id)arg1 arguments:(id)arg2 inFrame:(id)arg3 inContentWorld:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)closeFullScreenWindowController;
- (void)copy:(id)arg1;
- (void)createPDFWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)createWebArchiveDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (struct UIEdgeInsets)currentlyVisibleContentInsetsWithScale:(double)arg1 obscuredInsets:(struct UIEdgeInsets)arg2;
- (void)cut:(id)arg1;
- (void)dealloc;
- (void)decreaseSize:(id)arg1;
- (void)didEndFormControlInteraction;
- (void)didMoveToWindow;
- (void)didStartFormControlInteraction;
- (void)dismissFormAccessoryView;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)evaluateJavaScript:(id)arg1 inFrame:(id)arg2 inContentWorld:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)findString:(id)arg1 withConfiguration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)fullScreenWindowController;
- (id)goBack;
- (id)goForward;
- (id)goToBackForwardListItem:(id)arg1;
- (BOOL)hasFullScreenWindowController;
- (void)increaseSize:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;
- (id)inputAccessoryView;
- (id)inputAssistantItem;
- (id)inputView;
- (void)keyboardAccessoryBarNext;
- (void)keyboardAccessoryBarPrevious;
- (void)layoutSubviews;
- (id)loadData:(id)arg1 MIMEType:(id)arg2 characterEncodingName:(id)arg3 baseURL:(id)arg4;
- (id)loadFileURL:(id)arg1 allowingReadAccessToURL:(id)arg2;
- (id)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (id)loadRequest:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionNatural:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)paste:(id)arg1;
- (void)pasteAndMatchStyle:(id)arg1;
- (id)reload;
- (id)reloadFromOrigin;
- (void)removeFromSuperview;
- (void)replace:(id)arg1;
- (BOOL)resignFirstResponder;
- (void)safeAreaInsetsDidChange;
- (struct CGSize)scrollView:(id)arg1 contentSizeForZoomScale:(double)arg2 withProposedSize:(struct CGSize)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)select:(id)arg1;
- (void)selectAll:(id)arg1;
- (BOOL)selectFormAccessoryHasCheckedItemAtRow:(long long)arg1;
- (void)selectFormAccessoryPickerRow:(int)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setTimePickerValueToHour:(long long)arg1 minute:(long long)arg2;
- (void)stopLoading;
- (void)takeSnapshotWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (double)timePickerValueHour;
- (double)timePickerValueMinute;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (id)urlSchemeHandlerForURLScheme:(id)arg1;
- (BOOL)usesStandardContentView;
- (id)valueForUndefinedKey:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (struct FloatRect)visibleRectInViewCoordinates;
- (void)willFinishIgnoringCalloutBarFadeAfterPerformingAction;

@end
