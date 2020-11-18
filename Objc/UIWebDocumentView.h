//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIWebTiledView.h>

#import <UIKit/DDDetectionControllerInteractionDelegate-Protocol.h>
#import <UIKit/UIAutoscrollContainer-Protocol.h>
#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKit/UIKeyInput-Protocol.h>
#import <UIKit/UIKeyboardInput-Protocol.h>
#import <UIKit/UIModalViewDelegate-Protocol.h>
#import <UIKit/UIPreviewItemDelegate-Protocol.h>
#import <UIKit/UITextAutoscrolling-Protocol.h>
#import <UIKit/UITextInputPrivate-Protocol.h>
#import <UIKit/UITextInputTokenizer-Protocol.h>
#import <UIKit/UIWebFileUploadPanelDelegate-Protocol.h>
#import <UIKit/WebFrameLoadDelegate-Protocol.h>
#import <UIKit/_UIRotatingAlertControllerDelegate-Protocol.h>
#import <UIKit/_UIWebDoubleTapDelegate-Protocol.h>

@class CALayer, DOMElement, DOMHTMLElement, DOMNode, DOMRange, NSArray, NSDictionary, NSString, NSTimer, UIAutoscroll, UIColor, UIImage, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIPreviewItemController, UITapGestureRecognizer, UITextChecker, UITextInputTraits, UITextInteractionAssistant, UITextPosition, UITextRange, UIView, UIWebFileUploadPanel, UIWebPlaybackTargetPicker, UIWebRotatingAlertController, UIWebSelectionAssistant, WebHistoryItem, WebThreadSafeUndoManager, WebView, _UITextServiceSession, _UIWebHighlightLongPressGestureRecognizer, _UIWebViewportHandler;
@protocol UITextInputDelegate, UITextInputTokenizer;

@interface UIWebDocumentView : UIWebTiledView <DDDetectionControllerInteractionDelegate, UIPreviewItemDelegate, _UIRotatingAlertControllerDelegate, UITextAutoscrolling, UIAutoscrollContainer, UIGestureRecognizerDelegate, UIKeyboardInput, UITextInputPrivate, UIKeyInput, UIModalViewDelegate, UITextInputTokenizer, _UIWebDoubleTapDelegate, UIWebFileUploadPanelDelegate, WebFrameLoadDelegate>
{
    WebView *_webView;
    id m_parentTextView;
    id _delegate;
    id _textSuggestionDelegate;
    struct CGRect _doubleTapRect;
    struct CGRect _mainDocumentDoubleTapRect;
    struct CGPoint _scrollPoint;
    struct CGPoint _doubleTapStartPosition;
    double _doubleTapStartTime;
    struct CGSize _pendingSize;
    long long _orientation;
    DOMHTMLElement *_standaloneEditingElement;
    struct CGPoint _mouseDownPoint;
    double _mouseDownTime;
    UIAutoscroll *_autoscroll;
    struct __CFDictionary *_plugInViews;
    long long m_selectionGranularity;
    CALayer *_contentLayersHostingLayer;
    CALayer *_flattenedRotatingContentLayer;
    NSArray *_additionalSubviews;
    UITextInputTraits *_traits;
    id<UITextInputDelegate> _inputDelegate;
    UITapGestureRecognizer *_singleTapGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    UITapGestureRecognizer *_twoFingerDoubleTapGestureRecognizer;
    _UIWebHighlightLongPressGestureRecognizer *_highlightLongPressGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIPanGestureRecognizer *_twoFingerPanGestureRecognizer;
    UILongPressGestureRecognizer *_previewGestureRecognizer;
    UILongPressGestureRecognizer *_previewSecondaryGestureRecognizer;
    UIPreviewItemController *_previewItemController;
    struct {
        NSTimer *timer;
        struct CGPoint location;
        BOOL isBlocked;
        BOOL isCancelled;
        BOOL isOnWebThread;
        BOOL isDisplayingHighlight;
        BOOL attemptedClick;
        struct CGPoint lastPanTranslation;
        DOMNode *element;
        id delegate;
        UIWebRotatingAlertController *interactionSheet;
        BOOL allowsImageSheet;
        BOOL allowsDataDetectorsSheet;
        BOOL allowsLinkSheet;
        BOOL acceptsFirstResponder;
        double documentScale;
        NSArray *previewHintRects;
        UIImage *previewHintImage;
    } _interaction;
    _UIWebViewportHandler *_viewportHandler;
    int _documentType;
    float _documentScale;
    float _previousDocumentScale;
    struct CGSize _fixedLayoutOriginRoundingDelta;
    struct CGSize _fixedLayoutSizeRoundingDelta;
    unsigned int _mouseDownCount;
    unsigned int _printModeCount;
    unsigned long long _dataDetectorTypes;
    unsigned int _webCoreNeedsSetNeedsDisplay:1;
    unsigned int _webCoreNeedsDraw:1;
    unsigned int _ignoresFocusingMouse:1;
    unsigned int _ignoresKeyEvents:1;
    unsigned int _autoresizes:1;
    unsigned int _ignoresViewportOverflowWhenAutoresizing:1;
    unsigned int _shouldIgnoreCustomViewport:1;
    unsigned int _updatingSize:1;
    unsigned int _scalesToFit:1;
    unsigned int _alwaysConstrainsScale:1;
    unsigned int _updatesScrollView:1;
    unsigned int _hasCustomScale:1;
    unsigned int _shouldRestoreScrollPosition:1;
    unsigned int _pageNeedsReset:1;
    unsigned int _hasScrollPoint:1;
    unsigned int _gesturesDisabled:1;
    unsigned int _doubleTapRectIsReplaced:1;
    unsigned int _standaloneEditableView:1;
    unsigned int _widgetEditingView:1;
    unsigned int _mouseDragged:1;
    unsigned int _mouseReentrancyGuard:1;
    unsigned int _isShowingFullScreenPlugIn:1;
    unsigned int _isSettingRedrawFrame:1;
    unsigned int _needsScrollNotifications:1;
    unsigned int _loadsSynchronously:1;
    unsigned int _mouseDown:1;
    unsigned int _usePreTimberlineTransparencyBehavior:1;
    unsigned int _geolocationDialogAllowed:1;
    unsigned int _usingMinimalTilesDuringLoading:1;
    unsigned int _sheetsCount:2;
    unsigned int _didFirstVisuallyNonEmptyLayout:1;
    unsigned int _loadInProgress:1;
    unsigned int _uiwdvIsResigningFirstResponder:1;
    unsigned int _sizeUpdatesSuspended:1;
    unsigned int _sizeUpdateOccurredWhileSuspended:1;
    unsigned int _shouldOnlyRecognizeGesturesOnActiveElements:1;
    unsigned int _ignoresFocusEventFromFirstResponderChange:1;
    unsigned int _shouldCloseWebViewAtDealloc:1;
    unsigned int _shouldRemoveUserStyleSheet:1;
    unsigned int _hasDrawnTiles:1;
    unsigned int _showingTextStyleOptions:1;
    unsigned int _subviewCachesNeedUpdate:1;
    unsigned int _avoidFixedPositionUpdateViaDidScroll:1;
    unsigned int _inspectorSearchingForNode:1;
    unsigned int _previousScrollWasScrollToTop:1;
    unsigned int _pageIsLoadedFromPageCache:1;
    unsigned int _shouldSendWillShowInteractionHighlight:1;
    WebThreadSafeUndoManager *_undoManager;
    UIWebSelectionAssistant *_webSelectionAssistant;
    UITextInteractionAssistant *_textSelectionAssistant;
    UITextChecker *_textChecker;
    struct UIEdgeInsets _caretInsets;
    UIWebFileUploadPanel *_fileUploadPanel;
    int _selectionAffinity;
    DOMElement *_dictationResultPlaceholder;
    id _dictationResultPlaceholderRemovalObserver;
    DOMRange *_rangeToRestoreAfterDictation;
    UIWebPlaybackTargetPicker *_playbackTargetPicker;
    struct _UIWebViewportConfiguration _defaultViewportConfigurations[5];
    _UITextServiceSession *_definitionSession;
    _UITextServiceSession *_learnSession;
    _UITextServiceSession *_shareSession;
    _UITextServiceSession *_lookupSession;
    WebHistoryItem *_latestCommittedPageLoadHistoryItem;
    BOOL _suppressesIncrementalRendering;
    BOOL _wantsMinimalUI;
    unsigned long long _renderTreeSize;
    unsigned long long _renderTreeSizeThresholdForReset;
    struct CGRect _exposedScrollViewRect;
}

@property (getter=_acceptsFirstResponder, setter=_setAcceptsFirstResponder:) BOOL _acceptsFirstResponder;
@property (nonatomic) BOOL acceptsEmoji; // @dynamic acceptsEmoji;
@property (nonatomic) BOOL acceptsFloatingKeyboard;
@property (nonatomic) BOOL acceptsSplitKeyboard;
@property (nonatomic) BOOL alwaysConstrainsScale;
@property (nonatomic) long long autocapitalizationType; // @dynamic autocapitalizationType;
@property (copy, nonatomic) NSString *autocorrectionContext;
@property (nonatomic) long long autocorrectionType; // @dynamic autocorrectionType;
@property (nonatomic) struct CGPoint autoscrollContentOffset;
@property (readonly, nonatomic) UITextPosition *beginningOfDocument;
@property (nonatomic) BOOL contentsIsSingleValue; // @dynamic contentsIsSingleValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deferBecomingResponder;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disablePrediction;
@property (nonatomic) BOOL displaySecureTextUsingPlainText;
@property (nonatomic, getter=isDoubleTapEnabled) BOOL doubleTapEnabled;
@property (nonatomic) int emptyContentReturnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically; // @dynamic enablesReturnKeyAutomatically;
@property (nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent;
@property (readonly, nonatomic) UITextPosition *endOfDocument;
@property (nonatomic) struct CGRect exposedScrollViewRect; // @synthesize exposedScrollViewRect=_exposedScrollViewRect;
@property (nonatomic) BOOL forceEnableDictation;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<UITextInputDelegate> inputDelegate;
@property (strong, nonatomic) UIColor *insertionPointColor; // @dynamic insertionPointColor;
@property (nonatomic) unsigned long long insertionPointWidth; // @dynamic insertionPointWidth;
@property (readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
@property (nonatomic) BOOL isCarPlayIdiom;
@property (nonatomic) BOOL isSingleLineDocument; // @dynamic isSingleLineDocument;
@property (nonatomic) long long keyboardAppearance; // @dynamic keyboardAppearance;
@property (nonatomic) long long keyboardType; // @dynamic keyboardType;
@property (nonatomic) BOOL learnsCorrections;
@property (readonly, nonatomic) UITextRange *markedTextRange;
@property (copy, nonatomic) NSDictionary *markedTextStyle;
@property (nonatomic) BOOL mediaPlaybackAllowsAirPlay;
@property (strong, nonatomic) DOMRange *rangeToRestoreAfterDictation; // @synthesize rangeToRestoreAfterDictation=_rangeToRestoreAfterDictation;
@property (copy, nonatomic) NSString *recentInputIdentifier;
@property (readonly, nonatomic) unsigned long long renderTreeSize; // @synthesize renderTreeSize=_renderTreeSize;
@property (nonatomic) unsigned long long renderTreeSizeThresholdForReset; // @synthesize renderTreeSizeThresholdForReset=_renderTreeSizeThresholdForReset;
@property (copy, nonatomic) NSString *responseContext;
@property (nonatomic) BOOL returnKeyGoesToNextResponder;
@property (nonatomic) long long returnKeyType; // @dynamic returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry; // @dynamic secureTextEntry;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) long long selectionAffinity;
@property (strong, nonatomic) UIColor *selectionBarColor; // @dynamic selectionBarColor;
@property (strong, nonatomic) UIImage *selectionDragDotImage; // @dynamic selectionDragDotImage;
@property (nonatomic) long long selectionGranularity;
@property (strong, nonatomic) UIColor *selectionHighlightColor; // @dynamic selectionHighlightColor;
@property (readonly, nonatomic) int selectionState;
@property (nonatomic) int shortcutConversionType; // @dynamic shortcutConversionType;
@property (nonatomic) BOOL shouldAutoscroll;
@property (nonatomic) BOOL shouldIgnoreCustomViewport;
@property (nonatomic) BOOL shouldOnlyRecognizeGesturesOnActiveElements;
@property (nonatomic) BOOL sizeUpdatesSuspended;
@property (nonatomic) long long spellCheckingType; // @dynamic spellCheckingType;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressReturnKeyStyling;
@property (nonatomic) BOOL suppressesIncrementalRendering; // @synthesize suppressesIncrementalRendering=_suppressesIncrementalRendering;
@property (readonly, nonatomic) UIView *textInputView;
@property (nonatomic) int textLoupeVisibility; // @dynamic textLoupeVisibility;
@property (nonatomic) int textSelectionBehavior; // @dynamic textSelectionBehavior;
@property (nonatomic) id textSuggestionDelegate; // @dynamic textSuggestionDelegate;
@property (nonatomic) struct __CFCharacterSet *textTrimmingSet; // @dynamic textTrimmingSet;
@property (readonly, nonatomic) id<UITextInputTokenizer> tokenizer;
@property (nonatomic) BOOL useInterfaceLanguageForLocalization;
@property (readonly, nonatomic) BOOL wantsMinimalUI; // @synthesize wantsMinimalUI=_wantsMinimalUI;

+ (id)_createDefaultHighlightView;
+ (id)_sharedHighlightView;
+ (double)getTimestamp;
+ (BOOL)hasLandscapeOrientation;
+ (void)initialize;
+ (Class)layerClass;
+ (id)standardTextViewPreferences;
- (id)URL;
- (void)_WAKViewSizeDidChange:(id)arg1;
- (SEL)_actionForLongPressOnElement:(id)arg1;
- (void)_addShortcut:(id)arg1;
- (struct CGRect)_adjustedLayoutRectForFixedPositionObjects;
- (void)_appendOpenActionsForURL:(id)arg1 actions:(id)arg2;
- (void)_applyViewportArguments:(id)arg1;
- (id)_beginPrintModeForHTMLView:(id)arg1 withSize:(struct CGSize)arg2 startOffset:(double)arg3 minimumLayoutWidth:(double)arg4 maximumLayoutWidth:(double)arg5 tileClippedContent:(BOOL)arg6;
- (id)_beginPrintModeForPDFView:(id)arg1 withSize:(struct CGSize)arg2 startOffset:(double)arg3 minimumLayoutWidth:(double)arg4 maximumLayoutWidth:(double)arg5;
- (void)_cancelLongPressGestureRecognizer;
- (void)_cleanUpFrameStateAndLoad:(CDUnknownBlockType)arg1;
- (void)_cleanupSheet;
- (void)_clearAllConsoleMessages;
- (void)_clearDoubleTapRect;
- (void)_clearPreviewRevealInformation;
- (id)_collectAdditionalSubviews;
- (void)_collectPreviewRevealInformationIfNeeded;
- (unsigned int)_contentSizeInExposedRect:(struct CGRect)arg1 topLayer:(id)arg2 visibleLayerCount:(int *)arg3;
- (void *)_createIOSurfaceFromRect:(struct CGRect)arg1;
- (void)_createSheetWithElementActions:(id)arg1 showLinkTitle:(BOOL)arg2;
- (BOOL)_dataDetectionIsActivated;
- (id)_dataForPreviewItemController:(id)arg1 atPosition:(struct CGPoint)arg2 type:(long long *)arg3;
- (void)_define:(id)arg1;
- (BOOL)_dictationPlaceholderHasBeenRemoved;
- (void)_didDismissElementSheet;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_didScroll;
- (void)_dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (float)_documentScale;
- (id)_documentUrl;
- (struct CGRect)_documentViewVisibleRect;
- (id)_doubleTapGestureRecognizer;
- (void)_doubleTapRecognized:(id)arg1;
- (void)_drawPDFPagesForPage:(unsigned long long)arg1 withPaginationInfo:(id)arg2;
- (void)_editableSelectionLayoutChangedByScrolling:(BOOL)arg1;
- (void)_endPrintMode;
- (void)_finishedUsingDictationPlaceholder;
- (void)_flattenAndSwapContentLayersInRect:(struct CGRect)arg1;
- (id)_focusedOrMainFrame;
- (id)_groupName;
- (void)_handleDoubleTapAtLocation:(struct CGPoint)arg1;
- (void)_handleSingleTapZoomPostClickAtLocation:(struct CGPoint)arg1;
- (BOOL)_handleSingleTapZoomPreClickAtLocation:(struct CGPoint)arg1;
- (void)_handleTwoFingerDoubleTapAtLocation:(struct CGPoint)arg1;
- (void)_highlightLongPressRecognized:(id)arg1;
- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
- (void)_inspectorDidStartSearchingForNode:(id)arg1;
- (void)_inspectorDidStopSearchingForNode:(id)arg1;
- (BOOL)_interactionShouldBeginFromPreviewItemController:(id)arg1 forPosition:(struct CGPoint)arg2;
- (void)_interactionStartedFromPreviewItemController:(id)arg1;
- (void)_interactionStoppedFromPreviewItemController:(id)arg1;
- (BOOL)_isDisplayingLookupViewController;
- (BOOL)_isDisplayingReferenceLibraryViewController;
- (BOOL)_isDisplayingShareViewController;
- (BOOL)_isDisplayingShortcutViewController;
- (BOOL)_isInspectorSearchingForNode;
- (BOOL)_isSubviewOfPlugInView:(id)arg1;
- (struct CGRect)_lastRectForRange:(id)arg1;
- (struct CGRect)_layoutRectForFixedPositionObjects;
- (void)_longPressRecognized:(id)arg1;
- (void)_lookup:(struct CGPoint)arg1;
- (void)_notifyContentHostingLayersOfScaleChange;
- (void)_notifyPlugInViewsOfDidEndZooming;
- (void)_notifyPlugInViewsOfDidZoom;
- (void)_notifyPlugInViewsOfScaleChange;
- (void)_notifyPlugInViewsOfWillBeginZooming;
- (id)_parentTextView;
- (id)_positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 withAffinityDownstream:(BOOL)arg4;
- (BOOL)_presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGRect)_presentationRectForSheetGivenPoint:(struct CGPoint)arg1 inHostView:(id)arg2;
- (id)_presentationRectsForPreview;
- (id)_presentationRectsForPreviewItemController:(id)arg1;
- (id)_presentationSnapshotForPreview;
- (id)_presentationSnapshotForPreviewItemController:(id)arg1;
- (id)_presentedViewControllerForPreviewItemController:(id)arg1;
- (BOOL)_previewAllowedForPosition:(struct CGPoint)arg1;
- (void)_previewItemController:(id)arg1 commitPreview:(id)arg2;
- (void)_previewItemController:(id)arg1 didDismissPreview:(id)arg2 committing:(BOOL)arg3;
- (void)_previewItemController:(id)arg1 willPresentPreview:(id)arg2 forPosition:(struct CGPoint)arg3 inSourceView:(id)arg4;
- (Class)_printFormatterClass;
- (void)_promptForReplace:(id)arg1;
- (void)_registerPreview;
- (void)_removeDefinitionController:(BOOL)arg1;
- (void)_removeShareController:(BOOL)arg1;
- (void)_removeShortcutController:(BOOL)arg1;
- (void)_renderUnbufferedInContext:(struct CGContext *)arg1;
- (void)_resetForNewPage;
- (void)_resetFormDataForFrame:(id)arg1;
- (void)_resetInteractionWithLocation:(struct CGPoint)arg1;
- (void)_resetShowingTextStyle:(id)arg1;
- (void)_reshapePlugInViews;
- (id)_responderForBecomeFirstResponder;
- (BOOL)_restoreFirstResponder;
- (void)_restoreFlattenedContentLayers;
- (void)_restoreScrollPointForce:(BOOL)arg1;
- (void)_restoreViewportSettingsWithSize:(struct CGSize)arg1;
- (void)_runLoadBlock:(CDUnknownBlockType)arg1;
- (void)_saveStateToHistoryItem:(id)arg1;
- (id)_scriptingInfoForForm:(id)arg1;
- (id)_scriptingInfoForLink:(id)arg1;
- (void)_scrollRectToVisible:(struct CGRect)arg1 animated:(BOOL)arg2;
- (struct CGRect)_selectionClipRect;
- (void)_selectionLayoutChangedByScrolling:(BOOL)arg1;
- (void)_sendMouseMoveAndAttemptClick:(id)arg1;
- (void)_setDocumentScale:(float)arg1;
- (void)_setDocumentType:(int)arg1;
- (void)_setDocumentType:(int)arg1 overrideCustomConfigurations:(BOOL)arg2 viewportArguments:(id)arg3;
- (void)_setFont:(id)arg1;
- (void)_setParentTextView:(id)arg1;
- (void)_setSubviewCachesNeedUpdate:(BOOL)arg1;
- (void)_setTextColor:(id)arg1;
- (void)_share:(id)arg1;
- (struct CGRect)_shortcutPresentationRect;
- (BOOL)_shouldFlattenContentLayersForRect:(struct CGRect)arg1;
- (BOOL)_shouldResetForNewPage;
- (BOOL)_shouldUpdateSubviewCachesForPlugins;
- (void)_showDataDetectorsSheet;
- (void)_showImageSheet;
- (void)_showLinkSheet;
- (void)_showPendingContentLayers;
- (void)_showTextStyleOptions:(id)arg1;
- (void)_singleTapRecognized:(id)arg1;
- (id)_supportedPasteboardTypesForCurrentSelection;
- (void)_syntheticMouseEventNotHandledAtLocation:(struct CGPoint)arg1;
- (id)_targetURL;
- (id)_textSelectingContainer;
- (void)_transliterateChinese:(id)arg1;
- (void)_twoFingerDoubleTapRecognized:(id)arg1;
- (void)_twoFingerPanRecognized:(id)arg1;
- (void)_undoManagerDidRedo:(id)arg1;
- (void)_undoManagerDidUndo:(id)arg1;
- (void)_unregisterPreview;
- (void)_updateFixedPositionContent;
- (void)_updateFixedPositionedObjectsLayoutRectUsingWebThread:(BOOL)arg1 synchronize:(BOOL)arg2;
- (void)_updateFixedPositioningObjectsLayoutAfterScroll;
- (void)_updateFixedPositioningObjectsLayoutAfterVisibleGeometryChange;
- (void)_updateFixedPositioningObjectsLayoutDuringScroll;
- (void)_updateScrollViewBoundaryZoomScales;
- (void)_updateSize;
- (void)_updateSubviewCaches;
- (void)_updateWebKitExposedScrollViewRect;
- (void)_webthread_webView:(id)arg1 attachRootLayer:(id)arg2;
- (double)_zoomedDocumentScale;
- (void)action:(id)arg1 didDismissAlertController:(id)arg2;
- (void)actionDidFinish;
- (void)addInputString:(id)arg1;
- (void)addInputString:(id)arg1 withFlags:(unsigned long long)arg2;
- (id)approximateNodeAtViewportLocation:(struct CGPoint *)arg1;
- (id)asText;
- (void)assistFormNode:(id)arg1;
- (void)attemptClick:(id)arg1;
- (id)automaticallySelectedOverlay;
- (struct CGRect)autoscrollContentFrame;
- (struct CGRect)autoscrollDragFrame;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (BOOL)becomeFirstResponder;
- (BOOL)becomesEditableWithGestures;
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;
- (id)beginPrintModeForFrame:(id)arg1 withSize:(struct CGSize)arg2 startOffset:(double)arg3 minimumLayoutWidth:(double)arg4 maximumLayoutWidth:(double)arg5 tileClippedContent:(BOOL)arg6;
- (id)beginPrintModeForFrame:(id)arg1 withWidth:(double)arg2 height:(double)arg3 startOffset:(double)arg4 shrinkToFit:(BOOL)arg5 tileClippedContent:(BOOL)arg6;
- (id)beginPrintModeWithSize:(struct CGSize)arg1 startOffset:(double)arg2 minimumLayoutWidth:(double)arg3 maximumLayoutWidth:(double)arg4 tileClippedContent:(BOOL)arg5;
- (id)beginPrintModeWithWidth:(double)arg1 height:(double)arg2 startOffset:(double)arg3 shrinkToFit:(BOOL)arg4;
- (id)beginPrintModeWithWidth:(double)arg1 height:(double)arg2 startOffset:(double)arg3 shrinkToFit:(BOOL)arg4 tileClippedContent:(BOOL)arg5;
- (void)beginSelectionChange;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canResignFirstResponder;
- (void)cancelAutoscroll;
- (void)cancelInteraction;
- (void)cancelInteractionWithImmediateDisplay:(BOOL)arg1;
- (BOOL)cancelMouseTracking;
- (BOOL)cancelTouchTracking;
- (struct UIEdgeInsets)caretInsets;
- (struct CGRect)caretRect;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (struct CGRect)caretRectForVisiblePosition:(id)arg1;
- (unsigned short)characterAfterCaretSelection;
- (unsigned short)characterInRelationToCaretSelection:(int)arg1;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (id)checkSpellingOfString:(id)arg1;
- (void)clearInteractionTimer;
- (void)clearMarkedText;
- (void)clearRangedSelectionInitialExtent;
- (void)clearSelection;
- (BOOL)clearWKFirstResponder;
- (struct CGRect)closestCaretRectInMarkedTextRangeForPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (void)collapseSelection;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (void)completeInteraction;
- (struct CGRect)computeRectForElement:(id)arg1 withHighligh:(id)arg2 isInverted:(BOOL)arg3;
- (void)confirmMarkedText:(id)arg1;
- (BOOL)considerHeightForDoubleTap;
- (struct CGPoint)constrainedPoint:(struct CGPoint)arg1;
- (BOOL)containsOnlySelectableElements;
- (struct CGRect)contentFrameForView:(id)arg1;
- (id)contentView;
- (void)continueInteractionWithLocation:(struct CGPoint)arg1;
- (struct CGRect)convertCaretRect:(struct CGRect)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromFrame:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toFrame:(id)arg2;
- (struct CGPoint)convertPointToSelectedFrameCoordinates:(struct CGPoint)arg1;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromFrame:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toFrame:(id)arg2;
- (struct CGRect)convertRectFromSelectedFrameCoordinates:(struct CGRect)arg1;
- (void)copy:(id)arg1;
- (struct CGImage *)createSnapshotWithRect:(struct CGRect)arg1;
- (double)currentDocumentScale;
- (void)cut:(id)arg1;
- (unsigned long long)dataDetectorTypes;
- (void)dealloc;
- (void)decreaseSize:(id)arg1;
- (id)deepestNodeAtViewportLocation:(struct CGPoint)arg1;
- (void)deferInteraction;
- (void)deferredBecomeFirstResponder;
- (id)delegate;
- (void)deleteBackward;
- (void)deleteFromInput;
- (void)deleteFromInputWithFlags:(unsigned long long)arg1;
- (BOOL)detectsPhoneNumbers;
- (int)deviceOrientation;
- (id)dictationInterpretations;
- (id)dictationResultMetadataForRange:(id)arg1;
- (void)didEndScroll;
- (void)didEndZoom;
- (BOOL)didFirstVisuallyNonEmptyLayout;
- (void)didMoveToSuperview;
- (void)didRemovePlugInView:(id)arg1;
- (void)didRotateInteractionSheet;
- (void)didZoom;
- (void)disableClearsOnInsertion;
- (struct CGRect)documentBounds;
- (int)documentType;
- (struct CGRect)doubleTapRect;
- (BOOL)doubleTapRectIsReplaced;
- (CDStruct_39925896)doubleTapScalesForSize:(struct CGSize)arg1;
- (void)drawPage:(unsigned long long)arg1 withPaginationInfo:(id)arg2;
- (unsigned long long)effectiveDataDetectorTypes;
- (id)enclosingScrollView;
- (void)endFloatingCursor;
- (void)endPrintMode;
- (void)endSelectionChange;
- (void)ensureSelection;
- (void)extendCurrentSelection:(int)arg1;
- (void)fileUploadPanelDidDismiss:(id)arg1;
- (struct CGRect)firstRectForRange:(id)arg1;
- (id)fontForCaretSelection;
- (void)forceLayout;
- (id)formElement;
- (void)forwardInvocation:(id)arg1;
- (BOOL)fragmentContainsRichContent:(id)arg1;
- (struct CGRect)frameForDictationResultPlaceholder:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 canBePreventedByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (long long)getPasteboardChangeCount;
- (long long)getPasteboardItemsCount;
- (void)handleKeyWebEvent:(id)arg1;
- (BOOL)hasContent;
- (BOOL)hasDrawnTiles;
- (BOOL)hasEditableSelection;
- (BOOL)hasMarkedText;
- (BOOL)hasPlugInSubviews;
- (BOOL)hasRangedSelection;
- (BOOL)hasRichlyEditableSelection;
- (BOOL)hasSelection;
- (BOOL)hasSimpleTextOnlyStructure;
- (BOOL)hasText;
- (void)hideTapHighlight;
- (void)highlightApproximateNodeAndDisplayInfoSheet;
- (void)highlightApproximateNodeInverted:(BOOL)arg1;
- (id)hostViewForSheet:(id)arg1;
- (id)implementationWebView;
- (BOOL)inPopover;
- (void)increaseSize:(id)arg1;
- (id)initSimpleHTMLDocumentWithStyle:(id)arg1 frame:(struct CGRect)arg2 preferences:(id)arg3 groupName:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithWebView:(id)arg1 frame:(struct CGRect)arg2;
- (struct CGRect)initialPresentationRectInHostViewForSheet:(id)arg1;
- (float)initialScale;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)insertDictationResultPlaceholder;
- (void)insertText:(id)arg1;
- (void)installGestureRecognizers;
- (id)interactionDelegate;
- (id)interactionElement;
- (struct CGPoint)interactionLocation;
- (BOOL)isCaretInEmptyParagraph;
- (BOOL)isClassicViewportMode;
- (BOOL)isEditable;
- (BOOL)isEditing;
- (BOOL)isEditingSingleLineElement;
- (BOOL)isInInteraction;
- (BOOL)isInPrintMode;
- (BOOL)isInsideRichlyEditableTextWidget;
- (BOOL)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;
- (BOOL)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (BOOL)isPreviewing;
- (BOOL)isShowingFullScreenPlugInUI;
- (BOOL)isStandaloneEditableView;
- (BOOL)isUnperturbedDictationResultMarker:(id)arg1;
- (BOOL)isWidgetEditingView;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (BOOL)keyboardInputChanged:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (void)layoutSubviews;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadRequest:(id)arg1;
- (BOOL)loadsSynchronously;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (BOOL)makeWKFirstResponder;
- (double)maximumDoubleTapScale;
- (float)maximumScale;
- (id)metadataDictionariesForDictationResults;
- (id)methodSignatureForSelector:(SEL)arg1;
- (float)minimumScale;
- (float)minimumScaleForMinimumSize:(struct CGSize)arg1;
- (double)minimumScaleForSize:(struct CGSize)arg1;
- (BOOL)mouseEventsChangeSelection;
- (BOOL)needsScrollNotifications;
- (struct CGImage *)newSnapshotWithRect:(struct CGRect)arg1;
- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (unsigned long long)offsetInMarkedTextForSelection:(id)arg1;
- (void)paste:(id)arg1;
- (void)performClick:(id)arg1;
- (void)performInteractionSelector:(SEL)arg1 afterDelay:(double)arg2;
- (BOOL)performsTwoStepPaste:(id)arg1;
- (BOOL)playsNicelyWithGestures;
- (id)positionAtStartOrEndOfWord:(id)arg1;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (struct CGRect)presentationRectInHostViewForSheet:(id)arg1;
- (id)rangeByExtendingCurrentSelection:(int)arg1;
- (id)rangeByMovingCurrentSelection:(int)arg1;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;
- (id)rangeOfEnclosingWord:(id)arg1;
- (id)readDataFromPasteboard:(id)arg1 withIndex:(long long)arg2;
- (struct CGRect)rectOfInterestForPoint:(struct CGPoint)arg1;
- (id)rectsForNSRange:(struct _NSRange)arg1;
- (void)redrawScaledDocument;
- (void)releasePrintMode;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (void)replace:(id)arg1;
- (void)replaceCurrentWordWithText:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (void)replaceSelectionWithWebArchive:(id)arg1 selectReplacement:(BOOL)arg2 smartReplace:(BOOL)arg3;
- (BOOL)requiresKeyEvents;
- (void)resetInteraction;
- (void)resetTilingAfterLoadComplete;
- (BOOL)resignFirstResponder;
- (void)revealedSelectionByScrollingWebFrame:(id)arg1;
- (void)saveStateToCurrentHistoryItem;
- (id)scriptingInfoWithChildren;
- (void)scrollSelectionToVisible:(BOOL)arg1;
- (void)scrollViewWasRemoved;
- (void)select:(id)arg1;
- (void)selectAll;
- (void)selectAll:(id)arg1;
- (void)selectWord;
- (id)selectedDOMRange;
- (BOOL)selectionAtDocumentStart;
- (BOOL)selectionAtWordStart;
- (long long)selectionBaseWritingDirection;
- (void)selectionChanged;
- (void)selectionChanged:(id)arg1;
- (id)selectionInteractionAssistant;
- (BOOL)selectionIsCaretInDisplayBlockElementAtOffset:(int)arg1;
- (struct _NSRange)selectionRange;
- (id)selectionRects;
- (id)selectionRectsForDOMRange:(id)arg1;
- (id)selectionRectsForRange:(id)arg1;
- (id)selectionView;
- (void)sendOrientationEventForOrientation:(long long)arg1;
- (void)sendScrollEventIfNecessary;
- (void)sendScrollEventIfNecessaryWasUserScroll:(BOOL)arg1;
- (void)sendScrollWheelEvents;
- (void)setAllowsDataDetectorsSheet:(BOOL)arg1;
- (void)setAllowsImageSheet:(BOOL)arg1;
- (void)setAllowsLinkSheet:(BOOL)arg1;
- (void)setAllowsShrinkToFit:(BOOL)arg1 forDocumentTypes:(int)arg2;
- (void)setAllowsUserScaling:(BOOL)arg1 forDocumentTypes:(int)arg2;
- (void)setAutoresizes:(BOOL)arg1;
- (void)setBaseWritingDirection:(long long)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (void)setBecomesEditableWithGestures:(BOOL)arg1;
- (void)setBottomBufferHeight:(double)arg1;
- (void)setCaretChangeListener:(id)arg1;
- (void)setCaretInsets:(struct UIEdgeInsets)arg1;
- (void)setContinuousSpellCheckingEnabled:(BOOL)arg1;
- (void)setDataDetectorTypes:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetectsPhoneNumbers:(BOOL)arg1;
- (void)setDrawsBackground:(BOOL)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setIgnoresFocusingMouse:(BOOL)arg1;
- (void)setIgnoresKeyEvents:(BOOL)arg1;
- (void)setIgnoresViewportOverflowWhenAutoresizing:(BOOL)arg1;
- (void)setInitialScale:(float)arg1 forDocumentTypes:(int)arg2;
- (void)setInteractionAssistantGestureRecognizers;
- (void)setInteractionDelegate:(id)arg1;
- (void)setIsStandaloneEditableView:(BOOL)arg1;
- (void)setIsWidgetEditingView:(BOOL)arg1;
- (void)setLoadsSynchronously:(BOOL)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)setMaximumScale:(float)arg1 forDocumentTypes:(int)arg2;
- (void)setMinimumScale:(float)arg1 forDocumentTypes:(int)arg2;
- (void)setMinimumSize:(struct CGSize)arg1;
- (void)setMinimumSize:(struct CGSize)arg1 updateCurrentViewportConfigurationSize:(BOOL)arg2;
- (void)setOpaque:(BOOL)arg1;
- (void)setPaused:(BOOL)arg1;
- (void)setPaused:(BOOL)arg1 withEvents:(BOOL)arg2;
- (void)setRangedSelectionBaseToCurrentSelection;
- (void)setRangedSelectionBaseToCurrentSelectionEnd;
- (void)setRangedSelectionBaseToCurrentSelectionStart;
- (BOOL)setRangedSelectionExtentPoint:(struct CGPoint)arg1 baseIsStart:(BOOL)arg2;
- (void)setRangedSelectionExtentPoint:(struct CGPoint)arg1 baseIsStart:(BOOL)arg2 allowFlipping:(BOOL)arg3;
- (void)setRangedSelectionInitialExtentToCurrentSelectionEnd;
- (void)setRangedSelectionInitialExtentToCurrentSelectionStart;
- (void)setRangedSelectionWithExtentPoint:(struct CGPoint)arg1;
- (void)setSelectedDOMRange:(id)arg1 affinity:(int)arg2;
- (void)setSelectedDOMRange:(id)arg1 affinityDownstream:(BOOL)arg2;
- (void)setSelectedTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
- (void)setSelectionToEnd;
- (void)setSelectionToStart;
- (void)setSelectionWithFirstPoint:(struct CGPoint)arg1 secondPoint:(struct CGPoint)arg2;
- (void)setSelectionWithPoint:(struct CGPoint)arg1;
- (void)setSmoothsFonts:(BOOL)arg1;
- (void)setStandaloneEditingElement:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTileUpdatesDisabled:(BOOL)arg1;
- (void)setTilingArea:(int)arg1;
- (void)setUpdatesScrollView:(BOOL)arg1;
- (void)setUsePreTimberlineTransparencyBehavior;
- (void)setUserStyleSheet:(id)arg1;
- (void)setViewportSize:(struct CGSize)arg1 forDocumentTypes:(int)arg2;
- (BOOL)shouldSelectionAssistantReceiveDoubleTapAtPoint:(struct CGPoint)arg1 forScale:(double)arg2;
- (void)showPlaybackTargetPicker:(BOOL)arg1 fromRect:(struct CGRect)arg2;
- (void)smartExtendRangedSelection:(int)arg1;
- (id)standaloneEditingElement;
- (BOOL)startActionSheet;
- (void)startAutoscroll:(struct CGPoint)arg1;
- (void)startInteractionWithLocation:(struct CGPoint)arg1;
- (void)stopLoading:(id)arg1;
- (id)subviews;
- (id)superviewForSheet;
- (id)supportedPasteboardTypesForCurrentSelection;
- (BOOL)supportsTwoFingerScrollingAtTouchLocation:(struct CGPoint)arg1 andLocation:(struct CGPoint)arg2;
- (void)takeTraitsFrom:(id)arg1;
- (void)tapInteractionWithLocation:(struct CGPoint)arg1;
- (id)text;
- (id)textColorForCaretSelection;
- (id)textFormElement;
- (id)textInDOMRange:(id)arg1;
- (id)textInRange:(id)arg1;
- (id)textInputTraits;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (void)toggleBaseWritingDirection;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (id)undoManager;
- (id)undoManagerForWebView:(id)arg1;
- (void)unmarkText;
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)updateInteractionElements;
- (BOOL)updateKeyboardStateOnResponderChanges;
- (void)updateSelection;
- (BOOL)updatesScrollView;
- (void)useSelectionAssistantWithMode:(int)arg1;
- (void)validateInteractionWithLocation:(struct CGPoint)arg1;
- (void)viewportHandler:(id)arg1 didChangeViewportSize:(struct CGSize)arg2;
- (void)viewportHandlerDidChangeScales:(id)arg1;
- (struct CGRect)visibleBounds;
- (struct CGRect)visibleContentFrame;
- (struct CGRect)visibleContentRect;
- (struct CGRect)visibleFrame;
- (id)webSelectionAssistant;
- (void)webThreadWebViewDidLayout:(id)arg1 byScrolling:(BOOL)arg2;
- (id)webView;
- (void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didHideFullScreenForPlugInView:(id)arg2;
- (void)webView:(id)arg1 didObserveDeferredContentChange:(int)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didReceiveViewportArguments:(id)arg2;
- (void)webView:(id)arg1 needsScrollNotifications:(id)arg2 forFrame:(id)arg3;
- (id)webView:(id)arg1 plugInViewWithArguments:(id)arg2 fromPlugInPackage:(id)arg3;
- (void)webView:(id)arg1 restoreStateFromHistoryItem:(id)arg2 forFrame:(id)arg3 force:(BOOL)arg4;
- (void)webView:(id)arg1 runOpenPanelForFileButtonWithResultListener:(id)arg2 allowMultipleFiles:(BOOL)arg3 acceptMIMETypes:(id)arg4;
- (void)webView:(id)arg1 saveStateToHistoryItem:(id)arg2 forFrame:(id)arg3;
- (BOOL)webView:(id)arg1 shouldScrollToPoint:(struct CGPoint)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 willAddPlugInView:(id)arg2;
- (void)webView:(id)arg1 willShowFullScreenForPlugInView:(id)arg2;
- (void)webViewDidCommitCompositingLayerChanges:(id)arg1;
- (void)webViewDidDrawTiles:(id)arg1;
- (void)webViewDidEndOverflowScroll:(id)arg1;
- (void)webViewDidPreventDefaultForEvent:(id)arg1;
- (void)webViewDidReceiveMobileDocType:(id)arg1;
- (void)webViewDidRestoreFromPageCache:(id)arg1;
- (void)webViewDidStartOverflowScroll:(id)arg1;
- (struct CGRect)webViewFrameForUIFrame:(struct CGRect)arg1;
- (id)webVisiblePositionForPoint:(struct CGPoint)arg1;
- (BOOL)willInteractWithLocation:(struct CGPoint)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)willRotateInteractionSheet;
- (void)willStartScroll;
- (void)willStartScrollToTop;
- (void)willStartZoom;
- (void)willZoomToLocation:(struct CGPoint)arg1 atScale:(double)arg2 forDuration:(double)arg3;
- (void)willZoomToMinimumScale;
- (id)wordAtPoint:(struct CGPoint)arg1;
- (int)wordOffsetInRange:(id)arg1;
- (void)writeDataToPasteboard:(id)arg1;
- (double)zoomedDocumentScale;

@end

