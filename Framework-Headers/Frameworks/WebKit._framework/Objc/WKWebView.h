//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <WebKit/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSData, NSNumber, NSString, NSURL, UIScrollView, WKBackForwardList, WKBrowsingContextHandle, WKWebViewConfiguration, WKWebViewContentProviderRegistry, _WKSessionState, _WKWebViewPrintFormatter;
@protocol WKHistoryDelegatePrivate, WKNavigationDelegate, WKUIDelegate, _WKDiagnosticLoggingDelegate, _WKFindDelegate, _WKFullscreenDelegate, _WKIconLoadingDelegate, _WKInputDelegate, _WKWebViewPrintProvider;

@interface WKWebView : UIView <UIScrollViewDelegate>
{
    struct RetainPtr<WKWebViewConfiguration> _configuration;
    RefPtr_0cd9f53a _page;
    unsigned long long _activeFocusedStateRetainCount;
    struct unique_ptr<WebKit::NavigationState, std::__1::default_delete<WebKit::NavigationState>> _navigationState;
    struct unique_ptr<WebKit::UIDelegate, std::__1::default_delete<WebKit::UIDelegate>> _uiDelegate;
    struct unique_ptr<WebKit::IconLoadingDelegate, std::__1::default_delete<WebKit::IconLoadingDelegate>> _iconLoadingDelegate;
    unsigned long long _observedRenderingProgressEvents;
    struct WeakObjCPtr<id<_WKInputDelegate>> _inputDelegate;
    struct RetainPtr<_WKRemoteObjectRegistry> _remoteObjectRegistry;
    struct RetainPtr<WKScrollView> _scrollView;
    struct RetainPtr<WKContentView> _contentView;
    BOOL _overridesMinimumLayoutSize;
    struct CGSize _minimumLayoutSizeOverride;
    BOOL _overridesMaximumUnobscuredSize;
    struct CGSize _maximumUnobscuredSizeOverride;
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
    long long _interfaceOrientationOverride;
    BOOL _overridesInterfaceOrientation;
    BOOL _allowsViewportShrinkToFit;
    BOOL _hasCommittedLoadForMainFrame;
    BOOL _needsResetViewStateAfterCommitLoadForMainFrame;
    unsigned long long _firstPaintAfterCommitLoadTransactionID;
    int _dynamicViewportUpdateMode;
    struct CATransform3D _resizeAnimationTransformAdjustments;
    struct optional<unsigned long long> _resizeAnimationTransformTransactionID;
    struct RetainPtr<UIView> _resizeAnimationView;
    double _lastAdjustmentForScroller;
    struct optional<CGRect> _frozenVisibleContentRect;
    struct optional<CGRect> _frozenUnobscuredContentRect;
    BOOL _needsToRestoreScrollPosition;
    BOOL _commitDidRestoreScrollPosition;
    struct FloatPoint _scrollOffsetToRestore;
    struct FloatSize _obscuredInsetWhenSaved;
    BOOL _needsToRestoreUnobscuredCenter;
    struct FloatPoint _unobscuredCenterToRestore;
    unsigned long long _firstTransactionIDAfterPageRestore;
    double _scaleToRestore;
    struct unique_ptr<WebKit::ViewGestureController, std::__1::default_delete<WebKit::ViewGestureController>> _gestureController;
    BOOL _allowsBackForwardNavigationGestures;
    struct RetainPtr<UIView<WKWebViewContentProvider>> _customContentView;
    struct RetainPtr<UIView> _customContentFixedOverlayView;
    struct RetainPtr<NSTimer> _enclosingScrollViewScrollTimer;
    BOOL _didScrollSinceLastTimerFire;
    struct Color _scrollViewBackgroundColor;
    double _totalScrollViewBottomInsetAdjustmentForKeyboard;
    BOOL _currentlyAdjustingScrollViewInsetsForKeyboard;
    BOOL _delayUpdateVisibleContentRects;
    BOOL _hadDelayedUpdateVisibleContentRects;
    int _activeAnimatedResizeCount;
    struct Vector<std::__1::function<void ()>, 0, WTF::CrashOnOverflow, 16> _snapshotsDeferredDuringResize;
    struct RetainPtr<NSMutableArray> _stableStatePresentationUpdateCallbacks;
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
@property (readonly, nonatomic) NSArray *_certificateChain;
@property (readonly, nonatomic) NSURL *_committedURL;
@property (readonly, nonatomic) struct UIEdgeInsets _computedContentInset;
@property (readonly, nonatomic) WKWebViewContentProviderRegistry *_contentProviderRegistry;
@property (readonly, nonatomic) struct CGRect _contentVisibleRect;
@property (copy, setter=_setCustomUserAgent:) NSString *_customUserAgent;
@property (readonly, nonatomic) NSData *_dataForDisplayedPDF;
@property (weak, nonatomic, setter=_setDiagnosticLoggingDelegate:) id<_WKDiagnosticLoggingDelegate> _diagnosticLoggingDelegate;
@property (readonly, nonatomic, getter=_isDisplayingPDF) BOOL _displayingPDF;
@property (readonly, nonatomic, getter=_isDisplayingStandaloneImageDocument) BOOL _displayingStandaloneImageDocument;
@property (readonly, nonatomic, getter=_isDisplayingStandaloneMediaDocument) BOOL _displayingStandaloneMediaDocument;
@property (nonatomic, getter=_isEditable, setter=_setEditable:) BOOL _editable;
@property (weak, nonatomic, setter=_setFindDelegate:) id<_WKFindDelegate> _findDelegate;
@property (nonatomic, setter=_setFixedLayoutSize:) struct CGSize _fixedLayoutSize;
@property (nonatomic, setter=_setFullscreenDelegate:) id<_WKFullscreenDelegate> _fullscreenDelegate;
@property (nonatomic, setter=_setGapBetweenPages:) double _gapBetweenPages;
@property (readonly, nonatomic) WKBrowsingContextHandle *_handle;
@property (weak, nonatomic, setter=_setHistoryDelegate:) id<WKHistoryDelegatePrivate> _historyDelegate;
@property (weak, nonatomic, setter=_setIconLoadingDelegate:) id<_WKIconLoadingDelegate> _iconLoadingDelegate;
@property (weak, nonatomic, setter=_setInputDelegate:) id<_WKInputDelegate> _inputDelegate;
@property (readonly, nonatomic) struct CGRect _inputViewBounds;
@property (nonatomic, setter=_setInterfaceOrientationOverride:) long long _interfaceOrientationOverride;
@property (readonly, nonatomic) BOOL _isBackground;
@property (readonly, nonatomic) BOOL _isInFullscreen;
@property (nonatomic, setter=_setLayoutMode:) unsigned long long _layoutMode;
@property (readonly, nonatomic) struct CGSize _maximumUnobscuredSizeOverride;
@property (readonly, nonatomic) struct CGSize _minimumLayoutSizeOverride;
@property (readonly, nonatomic) BOOL _networkRequestsInProgress;
@property (nonatomic, setter=_setObscuredInsets:) struct UIEdgeInsets _obscuredInsets;
@property (nonatomic, setter=_setObservedRenderingProgressEvents:) unsigned long long _observedRenderingProgressEvents;
@property (readonly) unsigned long long _pageCount;
@property (nonatomic, setter=_setPageLength:) double _pageLength;
@property (nonatomic, setter=_setPageZoomFactor:) double _pageZoomFactor;
@property (nonatomic, setter=_setPaginationBehavesLikeColumns:) BOOL _paginationBehavesLikeColumns;
@property (nonatomic, setter=_setPaginationLineGridEnabled:) BOOL _paginationLineGridEnabled;
@property (nonatomic, setter=_setPaginationMode:) long long _paginationMode;
@property (readonly, nonatomic) id<_WKWebViewPrintProvider> _printProvider;
@property (copy, nonatomic, setter=_setRemoteInspectionNameOverride:) NSString *_remoteInspectionNameOverride;
@property (readonly, nonatomic) id _remoteObjectRegistry;
@property (readonly, nonatomic) NSArray *_scrollPerformanceData;
@property (nonatomic, setter=_setScrollPerformanceDataCollectionEnabled:) BOOL _scrollPerformanceDataCollectionEnabled;
@property (readonly, nonatomic) NSString *_scrollingTreeAsText;
@property (readonly, nonatomic) long long _selectionGranularity;
@property (readonly, nonatomic) _WKSessionState *_sessionState;
@property (readonly, nonatomic) NSData *_sessionStateData;
@property (readonly, nonatomic, getter=_isShowingNavigationGestureSnapshot) BOOL _showingNavigationGestureSnapshot;
@property (readonly, nonatomic) NSNumber *_stableStateOverride;
@property (readonly, nonatomic) NSString *_suggestedFilenameForDisplayedPDF;
@property (readonly, nonatomic) BOOL _supportsTextZoom;
@property (nonatomic, setter=_setTextZoomFactor:) double _textZoomFactor;
@property (readonly, nonatomic) struct CGRect _uiTextCaretRect;
@property (readonly, nonatomic) NSArray *_uiTextSelectionRects;
@property (readonly, nonatomic) NSURL *_unreachableURL;
@property (readonly, nonatomic) NSString *_userAgent;
@property (nonatomic, setter=_setUserContentExtensionsEnabled:) BOOL _userContentExtensionsEnabled;
@property (nonatomic, setter=_setViewScale:) double _viewScale;
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
@property (readonly, nonatomic) BOOL hasOnlySecureContent;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (weak, nonatomic) id<WKNavigationDelegate> navigationDelegate;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) struct __SecTrust *serverTrust;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_accessibilitySettingsDidChange:(id)arg1;
- (struct CGPoint)_adjustedContentOffset:(struct CGPoint)arg1;
- (void)_becomeFirstResponderWithSelectionMovingForward:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_beginAnimatedResizeWithUpdates:(CDUnknownBlockType)arg1;
- (void)_beginInteractiveObscuredInsetsChange;
- (void)_close;
- (struct CGRect)_contentBoundsExtendedForRubberbandingWithScale:(double)arg1;
- (struct CGRect)_contentRectForUserInteraction;
- (id)_contentSizeCategory;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)_contentsOfUserInterfaceItem:(id)arg1;
- (struct CGPoint)_convertPointFromContentsToView:(struct CGPoint)arg1;
- (struct CGPoint)_convertPointFromViewToContents:(struct CGPoint)arg1;
- (void)_couldNotRestorePageState;
- (void)_countStringMatches:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (id)_currentContentView;
- (id)_dataDetectionResults;
- (void)_didCommitLayerTree:(const struct RemoteLayerTreeTransaction *)arg1;
- (void)_didCommitLoadForMainFrame;
- (void)_didDismissForcePressPreview;
- (void)_didFailLoadForMainFrame;
- (void)_didFinishLoadForMainFrame;
- (void)_didFinishLoadingDataForCustomContentProviderWithSuggestedFilename:(const struct String *)arg1 data:(id)arg2;
- (void)_didFinishScrolling;
- (void)_didInvokeUIScrollViewDelegateCallback;
- (void)_didRelaunchProcess;
- (void)_didSameDocumentNavigationForMainFrame:(int)arg1;
- (void)_didScroll;
- (void)_didShowForcePressPreview;
- (void)_disableBackForwardSnapshotVolatilityForTesting;
- (void)_doAfterNextPresentationUpdate:(CDUnknownBlockType)arg1;
- (void)_doAfterNextPresentationUpdateWithoutWaitingForPainting:(CDUnknownBlockType)arg1;
- (void)_doAfterNextStablePresentationUpdate:(CDUnknownBlockType)arg1;
- (void)_dynamicViewportUpdateChangedTargetToScale:(double)arg1 position:(struct CGPoint)arg2 nextValidLayerTreeTransactionID:(unsigned long long)arg3;
- (void)_enclosingScrollerScrollingEnded:(id)arg1;
- (void)_endAnimatedResize;
- (void)_endInteractiveObscuredInsetsChange;
- (void)_findString:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (void)_firePresentationUpdateForPendingStableStatePresentationCallbacks;
- (id)_formDelegate;
- (void)_frameOrBoundsChanged;
- (void)_getMainResourceDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_getWebArchiveDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_handleActiveNowPlayingSessionInfoResponse:(BOOL)arg1 title:(id)arg2 duration:(double)arg3 elapsedTime:(double)arg4;
- (void)_hideContentUntilNextUpdate;
- (void)_hideFindUI;
- (void)_initializeWithConfiguration:(id)arg1;
- (BOOL)_isNavigationSwipeGestureRecognizer:(id)arg1;
- (BOOL)_isShowingVideoPictureInPicture;
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
- (BOOL)_mayAutomaticallyShowVideoPictureInPicture;
- (void)_navigationGestureDidBegin;
- (void)_navigationGestureDidEnd;
- (void)_overrideLayoutParametersWithMinimumLayoutSize:(struct CGSize)arg1 maximumUnobscuredSizeOverride:(struct CGSize)arg2;
- (void)_overrideLayoutParametersWithMinimumLayoutSize:(struct CGSize)arg1 minimumLayoutSizeForMinimalUI:(struct CGSize)arg2 maximumUnobscuredSizeOverride:(struct CGSize)arg3;
- (struct OpaqueWKPage *)_pageForTesting;
- (double)_pageScale;
- (Class)_printFormatterClass;
- (void)_processDidExit;
- (id)_reloadWithoutContentBlockers;
- (void)_requestActiveNowPlayingSessionInfo;
- (void)_resizeWhileHidingContentWithUpdates:(CDUnknownBlockType)arg1;
- (void)_restoreFromSessionStateData:(id)arg1;
- (void)_restorePageScrollPosition:(struct FloatPoint)arg1 scrollOrigin:(struct FloatPoint)arg2 previousObscuredInset:(struct FloatSize)arg3 scale:(double)arg4;
- (void)_restorePageStateToUnobscuredCenter:(struct FloatPoint)arg1 scale:(double)arg2;
- (id)_restoreSessionState:(id)arg1 andNavigate:(BOOL)arg2;
- (CDUnknownBlockType)_retainActiveFocusedState;
- (void)_saveBackForwardSnapshotForItem:(id)arg1;
- (void)_scrollByContentOffset:(struct FloatPoint)arg1;
- (void)_scrollToContentScrollPosition:(struct FloatPoint)arg1 scrollOrigin:(struct IntPoint)arg2;
- (BOOL)_scrollToRect:(struct FloatRect)arg1 origin:(struct FloatPoint)arg2 minimumScrollDistance:(float)arg3;
- (void)_scrollViewDidInterruptDecelerating:(id)arg1;
- (BOOL)_scrollViewIsRubberBanding;
- (id)_sessionStateWithFilter:(CDUnknownBlockType)arg1;
- (void)_setFormDelegate:(id)arg1;
- (void)_setHasCustomContentView:(BOOL)arg1 loadedMIMEType:(const struct String *)arg2;
- (void)_setMaximumUnobscuredSizeOverride:(struct CGSize)arg1;
- (void)_setMinimumLayoutSizeOverride:(struct CGSize)arg1;
- (void)_setOverlaidAccessoryViewsInset:(struct CGSize)arg1;
- (void)_setPageScale:(double)arg1 withOrigin:(struct CGPoint)arg2;
- (void)_setUpSQLiteDatabaseTrackerClient;
- (BOOL)_shouldUpdateKeyboardWithInfo:(id)arg1;
- (id)_snapshotLayerContentsForBackForwardListItem:(id)arg1;
- (void)_snapshotRect:(struct CGRect)arg1 intoImageOfWidth:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_stopMediaCapture;
- (PassRefPtr_d1f98d0a)_takeViewSnapshot;
- (double)_targetContentZoomScaleForRect:(const struct FloatRect *)arg1 currentScale:(double)arg2 fitEntireRect:(BOOL)arg3 minimumScale:(double)arg4 maximumScale:(double)arg5;
- (void)_updateContentRectsWithState:(BOOL)arg1;
- (void)_updateScrollViewBackground;
- (void)_updateVisibleContentRectAfterScrollInView:(id)arg1;
- (void)_updateVisibleContentRects;
- (id)_viewForFindUI;
- (struct CGRect)_visibleContentRect;
- (struct CGRect)_visibleRectInEnclosingScrollView:(id)arg1;
- (void)_willInvokeUIScrollViewDelegateCallback;
- (void)_windowDidRotate:(id)arg1;
- (void)_zoomOutWithOrigin:(struct FloatPoint)arg1 animated:(BOOL)arg2;
- (void)_zoomToFocusRect:(struct FloatRect)arg1 selectionRect:(struct FloatRect)arg2 insideFixed:(BOOL)arg3 fontSize:(float)arg4 minimumScale:(double)arg5 maximumScale:(double)arg6 allowScaling:(BOOL)arg7 forceScroll:(BOOL)arg8;
- (void)_zoomToInitialScaleWithOrigin:(struct FloatPoint)arg1 animated:(BOOL)arg2;
- (void)_zoomToPoint:(struct FloatPoint)arg1 atScale:(double)arg2 animated:(BOOL)arg3;
- (void)_zoomToRect:(struct FloatRect)arg1 atScale:(double)arg2 origin:(struct FloatPoint)arg3 animated:(BOOL)arg4;
- (BOOL)_zoomToRect:(struct FloatRect)arg1 withOrigin:(struct FloatPoint)arg2 fitEntireRect:(BOOL)arg3 minimumScale:(double)arg4 maximumScale:(double)arg5 minimumScrollDistance:(float)arg6;
- (BOOL)becomeFirstResponder;
- (id)browsingContextController;
- (BOOL)canBecomeFirstResponder;
- (void)dealloc;
- (void)didEndFormControlInteraction;
- (void)didMoveToWindow;
- (void)didStartFormControlInteraction;
- (void)dismissFormAccessoryView;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)goBack;
- (id)goForward;
- (id)goToBackForwardListItem:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;
- (void)keyboardAccessoryBarNext;
- (void)keyboardAccessoryBarPrevious;
- (void)layoutSubviews;
- (id)loadData:(id)arg1 MIMEType:(id)arg2 characterEncodingName:(id)arg3 baseURL:(id)arg4;
- (id)loadFileURL:(id)arg1 allowingReadAccessToURL:(id)arg2;
- (id)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (id)loadRequest:(id)arg1;
- (id)reload;
- (id)reloadFromOrigin;
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
- (void)selectFormAccessoryPickerRow:(int)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)stopLoading;
- (BOOL)usesStandardContentView;
- (id)viewForZoomingInScrollView:(id)arg1;
- (struct FloatRect)visibleRectInViewCoordinates;

@end

