//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DOMDocument, DOMHTMLElement, JSContext, NSArray, NSString, WebDataSource, WebFramePrivate, WebFrameView, WebScriptObject, WebView;

@interface WebFrame : NSObject
{
    WebFramePrivate *_private;
}

@property (readonly, nonatomic) DOMDocument *DOMDocument;
@property (readonly, copy, nonatomic) NSArray *childFrames;
@property (readonly, nonatomic) WebDataSource *dataSource;
@property (readonly, nonatomic) DOMHTMLElement *frameElement;
@property (readonly, nonatomic) WebFrameView *frameView;
@property (readonly, nonatomic) struct OpaqueJSContext *globalContext;
@property (readonly, nonatomic) BOOL hasRichlyEditableDragCaret;
@property (readonly, nonatomic) JSContext *javaScriptContext;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) WebFrame *parentFrame;
@property (readonly, nonatomic) WebDataSource *provisionalDataSource;
@property (readonly, nonatomic) WebView *webView;
@property (readonly, nonatomic) WebScriptObject *windowObject;

+ (Ref_840bf4f8)_createFrameWithPage:(struct Page *)arg1 frameName:(const struct String *)arg2 frameView:(id)arg3 ownerElement:(struct HTMLFrameOwnerElement *)arg4;
+ (void)_createMainFrameWithPage:(struct Page *)arg1 frameName:(const struct String *)arg2 frameView:(id)arg3;
+ (void)_createMainFrameWithSimpleHTMLDocumentWithPage:(struct Page *)arg1 frameView:(id)arg2 style:(id)arg3;
+ (Ref_840bf4f8)_createSubframeWithOwnerElement:(struct HTMLFrameOwnerElement *)arg1 frameName:(const struct String *)arg2 frameView:(id)arg3;
+ (id)stringWithData:(id)arg1 textEncodingName:(id)arg2;
- (BOOL)_allowsFollowingLink:(id)arg1;
- (void)_attachScriptDebugger;
- (struct CGColor *)_bodyBackgroundColor;
- (id)_cacheabilityDictionary;
- (BOOL)_canProvideDocumentSource;
- (BOOL)_canSaveAsWebArchive;
- (struct CGRect)_caretRectAtPosition:(const struct Position *)arg1 affinity:(int)arg2;
- (id)_characterRangeAtPoint:(struct CGPoint)arg1;
- (void)_clearCoreFrame;
- (void)_clearOpener;
- (void)_clearSelection;
- (void)_clearSelectionInOtherFrames;
- (void)_commitData:(id)arg1;
- (id)_computePageRectsWithPrintScaleFactor:(float)arg1 pageSize:(struct CGSize)arg2;
- (struct _NSRange)_convertDOMRangeToNSRange:(id)arg1;
- (id)_convertNSRangeToDOMRange:(struct _NSRange)arg1;
- (RefPtr_033e7b31)_convertToDOMRange:(struct _NSRange)arg1;
- (RefPtr_033e7b31)_convertToDOMRange:(struct _NSRange)arg1 rangeIsRelativeTo:(unsigned char)arg2;
- (struct _NSRange)_convertToNSRange:(struct Range *)arg1;
- (id)_dataSource;
- (void)_detachScriptDebugger;
- (void)_dispatchDidReceiveTitle:(id)arg1;
- (id)_documentFragmentForImageData:(id)arg1 withRelativeURLPart:(id)arg2 andMIMEType:(id)arg3;
- (id)_documentFragmentForText:(id)arg1;
- (id)_documentFragmentForWebArchive:(id)arg1;
- (id)_documentFragmentWithMarkupString:(id)arg1 baseURLString:(id)arg2;
- (id)_documentFragmentWithNodesAsParagraphs:(id)arg1;
- (void)_drawRect:(struct CGRect)arg1 contentsOnly:(BOOL)arg2;
- (id)_findFrameWithSelection;
- (BOOL)_firstLayoutDone;
- (struct CGRect)_firstRectForDOMRange:(id)arg1;
- (BOOL)_getVisibleRect:(struct CGRect *)arg1;
- (struct OpaqueJSContext *)_globalContextForScriptWorld:(id)arg1;
- (void)_handleKeyEvent:(id)arg1;
- (BOOL)_hasSelection;
- (id)_initWithWebFrameView:(id)arg1 webView:(id)arg2;
- (void)_insertParagraphSeparatorInQuotedContent;
- (id)_internalLoadDelegate;
- (BOOL)_isCommitting;
- (BOOL)_isDescendantOfFrame:(id)arg1;
- (BOOL)_isDisplayingStandaloneImage;
- (BOOL)_isFrameSet;
- (BOOL)_isIncludedInWebKitStatistics;
- (BOOL)_isVisuallyNonEmpty;
- (id)_javaScriptContextForScriptWorld:(id)arg1;
- (id)_layerTreeAsText;
- (void)_loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 unreachableURL:(id)arg5;
- (void)_loadHTMLString:(id)arg1 baseURL:(id)arg2 unreachableURL:(id)arg3;
- (int)_loadType;
- (BOOL)_loadsSynchronously;
- (id)_markDOMRange;
- (BOOL)_needsLayout;
- (id)_nodesFromList:(Vector_1d266cd7 *)arg1;
- (unsigned int)_paintBehaviorForDestinationContext:(struct CGContext *)arg1;
- (unsigned int)_pendingFrameUnloadEventCount;
- (id)_rectsForRange:(id)arg1;
- (void)_replaceSelectionWithFragment:(id)arg1 selectReplacement:(BOOL)arg2 smartReplace:(BOOL)arg3 matchStyle:(BOOL)arg4;
- (void)_replaceSelectionWithMarkupString:(id)arg1 baseURLString:(id)arg2 selectReplacement:(BOOL)arg3 smartReplace:(BOOL)arg4;
- (void)_replaceSelectionWithNode:(id)arg1 selectReplacement:(BOOL)arg2 smartReplace:(BOOL)arg3 matchStyle:(BOOL)arg4;
- (void)_replaceSelectionWithText:(id)arg1 selectReplacement:(BOOL)arg2 smartReplace:(BOOL)arg3;
- (void)_replaceSelectionWithText:(id)arg1 selectReplacement:(BOOL)arg2 smartReplace:(BOOL)arg3 matchStyle:(BOOL)arg4;
- (void)_replaceSelectionWithWebArchive:(id)arg1 selectReplacement:(BOOL)arg2 smartReplace:(BOOL)arg3;
- (void)_restoreViewState;
- (void)_saveViewState;
- (void)_scrollDOMRangeToVisible:(id)arg1;
- (void)_scrollDOMRangeToVisible:(id)arg1 withInset:(double)arg2;
- (void)_selectAll;
- (void)_selectNSRange:(struct _NSRange)arg1;
- (struct _NSRange)_selectedNSRange;
- (id)_selectedString;
- (int)_selectionGranularity;
- (id)_selectionRangeForFirstPoint:(struct CGPoint)arg1 secondPoint:(struct CGPoint)arg2;
- (id)_selectionRangeForPoint:(struct CGPoint)arg1;
- (void)_setInternalLoadDelegate:(id)arg1;
- (void)_setIsCommitting:(BOOL)arg1;
- (void)_setLoadsSynchronously:(BOOL)arg1;
- (void)_setProhibitsScrolling:(BOOL)arg1;
- (void)_setSelectionFromNone;
- (void)_setShouldCreateRenderers:(BOOL)arg1;
- (void)_setTextAutosizingWidth:(double)arg1;
- (void)_setTypingStyle:(id)arg1 withUndoAction:(int)arg2;
- (void)_setVisibleSize:(struct CGSize)arg1;
- (id)_stringByEvaluatingJavaScriptFromString:(id)arg1;
- (id)_stringByEvaluatingJavaScriptFromString:(id)arg1 forceUserGesture:(BOOL)arg2;
- (id)_stringByEvaluatingJavaScriptFromString:(id)arg1 withGlobalObject:(struct OpaqueJSValue *)arg2 inScriptWorld:(id)arg3;
- (id)_stringForRange:(id)arg1;
- (id)_typingStyle;
- (void)_unmarkAllBadGrammar;
- (void)_unmarkAllMisspellings;
- (id)_unreachableURL;
- (void)_updateBackgroundAndUpdatesWhileOffscreen;
- (void)_userScrolled;
- (struct VisiblePosition)_visiblePositionForPoint:(struct CGPoint)arg1;
- (id)_webHTMLDocumentView;
- (id)accessibilityRoot;
- (void)aggressivelyExpandSelectionToWordContainingCaretSelection;
- (id)approximateNodeAtViewportLocation:(struct CGPoint *)arg1;
- (struct CGRect)caretRect;
- (struct CGRect)caretRectAtNode:(id)arg1 offset:(int)arg2 affinity:(int)arg3;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (unsigned short)characterAfterCaretSelection;
- (unsigned short)characterBeforeCaretSelection;
- (unsigned short)characterInRelationToCaretSelection:(int)arg1;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (void)clearRangedSelectionInitialExtent;
- (void)clearSelection;
- (struct CGRect)closestCaretRectInMarkedTextRangeForPoint:(struct CGPoint)arg1;
- (struct VisiblePosition)closestWordBoundary:(struct VisiblePosition)arg1;
- (void)collapseSelection;
- (void)confirmMarkedText:(id)arg1;
- (struct _NSRange)convertDOMRangeToNSRange:(id)arg1;
- (id)convertNSRangeToDOMRange:(struct _NSRange)arg1;
- (struct Frame *)coreFrame;
- (void)dealloc;
- (id)deepestNodeAtViewportLocation:(struct CGPoint)arg1;
- (void)deviceOrientationChanged;
- (id)dictationResultMetadataForRange:(id)arg1;
- (id)documentView;
- (id)elementAtPoint:(struct CGPoint)arg1;
- (id)elementRangeContainingCaretSelection;
- (struct CGRect)elementRectAtPoint:(struct CGPoint)arg1;
- (id)endPosition;
- (BOOL)enhancedAccessibilityEnabled;
- (void)ensureRangedSelectionContainsInitialStartPoint:(struct CGPoint)arg1 initialEndPoint:(struct CGPoint)arg2;
- (void)expandSelectionToElementContainingCaretSelection;
- (void)expandSelectionToSentence;
- (void)expandSelectionToStartOfWordContainingCaretSelection;
- (void)expandSelectionToWordContainingCaretSelection;
- (void)extendSelection:(BOOL)arg1;
- (id)findFrameNamed:(id)arg1;
- (struct CGRect)firstRectForDOMRange:(id)arg1;
- (BOOL)focusedNodeHasContent;
- (struct __CTFont *)fontForSelection:(BOOL *)arg1;
- (void)forceLayoutAdjustingViewSize:(BOOL)arg1;
- (unsigned int)formElementsCharacterCount;
- (void)getDictationResultRanges:(id *)arg1 andMetadatas:(id *)arg2;
- (BOOL)hasEditableSelection;
- (BOOL)hasRichlyEditableSelection;
- (BOOL)hasSelection;
- (id)init;
- (id)initWithName:(id)arg1 webFrameView:(id)arg2 webView:(id)arg3;
- (int)innerLineHeight:(id)arg1;
- (id)interpretationsForCurrentRoot;
- (BOOL)isTelephoneNumberParsingAllowed;
- (BOOL)isTelephoneNumberParsingEnabled;
- (struct OpaqueJSValue *)jsWrapperForNode:(id)arg1 inScriptWorld:(id)arg2;
- (int)layoutCount;
- (void)loadAlternateHTMLString:(id)arg1 baseURL:(id)arg2 forUnreachableURL:(id)arg3;
- (void)loadArchive:(id)arg1;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadRequest:(id)arg1;
- (id)markedTextDOMRange;
- (void)moveSelectionToEnd;
- (void)moveSelectionToPoint:(struct CGPoint)arg1;
- (void)moveSelectionToStart;
- (BOOL)needsLayout;
- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (int)numberOfPagesWithPageWidth:(float)arg1 pageHeight:(float)arg2;
- (int)preferredHeight;
- (void)prepareForPause;
- (id)previousUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (void)printToCGContext:(struct CGContext *)arg1 pageWidth:(float)arg2 pageHeight:(float)arg3;
- (id)rangeByExtendingCurrentSelection:(int)arg1;
- (id)rangeByMovingCurrentSelection:(int)arg1;
- (struct CGRect)rectForScrollToVisible;
- (void)recursiveSetUpdateAppearanceEnabled:(BOOL)arg1;
- (void)reload;
- (void)reloadFromOrigin;
- (void)removeUnchangeableStyles;
- (struct CGRect)renderRectForPoint:(struct CGPoint)arg1 isReplaced:(BOOL *)arg2 fontSize:(float *)arg3;
- (id)renderTreeAsExternalRepresentationForPrinting:(BOOL)arg1;
- (BOOL)renderedCharactersExceed:(unsigned long long)arg1;
- (struct CGSize)renderedSizeOfNode:(id)arg1 constrainedToWidth:(float)arg2;
- (void)resetSelection;
- (void)resetTextAutosizingBeforeLayout;
- (void)resumeFromPause;
- (void)revealSelectionAtExtent:(BOOL)arg1;
- (id)scrollableNodeAtViewportLocation:(struct CGPoint)arg1;
- (void)selectNSRange:(struct _NSRange)arg1;
- (void)selectNSRange:(struct _NSRange)arg1 onElement:(id)arg2;
- (void)selectWithoutClosingTypingNSRange:(struct _NSRange)arg1;
- (id)selectedDOMRange;
- (struct _NSRange)selectedNSRange;
- (int)selectionAffinity;
- (BOOL)selectionAtDocumentStart;
- (BOOL)selectionAtSentenceStart;
- (BOOL)selectionAtWordStart;
- (int)selectionBaseWritingDirection;
- (id)selectionRects;
- (id)selectionRectsForCoreRange:(struct Range *)arg1;
- (id)selectionRectsForRange:(id)arg1;
- (int)selectionState;
- (void)sendScrollEvent;
- (void)setAccessibleName:(id)arg1;
- (void)setBaseWritingDirection:(int)arg1;
- (void)setCaretColor:(struct CGColor *)arg1;
- (void)setDictationPhrases:(id)arg1 metadata:(id)arg2 asChildOfElement:(id)arg3;
- (void)setEnhancedAccessibility:(BOOL)arg1;
- (void)setIsActive:(BOOL)arg1;
- (void)setMarkedText:(id)arg1 forCandidates:(BOOL)arg2;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)setNeedsLayout;
- (void)setPluginsPaused:(BOOL)arg1;
- (void)setRangedSelectionBaseToCurrentSelection;
- (void)setRangedSelectionBaseToCurrentSelectionEnd;
- (void)setRangedSelectionBaseToCurrentSelectionStart;
- (BOOL)setRangedSelectionExtentPoint:(struct CGPoint)arg1 baseIsStart:(BOOL)arg2 allowFlipping:(BOOL)arg3;
- (void)setRangedSelectionInitialExtentToCurrentSelectionEnd;
- (void)setRangedSelectionInitialExtentToCurrentSelectionStart;
- (void)setRangedSelectionWithExtentPoint:(struct CGPoint)arg1;
- (void)setSelectedDOMRange:(id)arg1 affinity:(int)arg2 closeTyping:(BOOL)arg3;
- (void)setSelectionChangeCallbacksDisabled:(BOOL)arg1;
- (void)setSelectionGranularity:(int)arg1;
- (BOOL)setSelectionWithBasePoint:(struct CGPoint)arg1 extentPoint:(struct CGPoint)arg2 baseIsStart:(BOOL)arg3;
- (BOOL)setSelectionWithBasePoint:(struct CGPoint)arg1 extentPoint:(struct CGPoint)arg2 baseIsStart:(BOOL)arg3 allowFlipping:(BOOL)arg4;
- (void)setSelectionWithFirstPoint:(struct CGPoint)arg1 secondPoint:(struct CGPoint)arg2;
- (void)setText:(id)arg1 asChildOfElement:(id)arg2;
- (void)setTimeoutsPaused:(BOOL)arg1;
- (void)smartExtendRangedSelection:(int)arg1;
- (BOOL)spaceFollowsWordInRange:(id)arg1;
- (id)startPosition;
- (void)stopLoading;
- (id)stringByEvaluatingJavaScriptFromString:(id)arg1 forceUserGesture:(BOOL)arg2;
- (id)stringForRange:(id)arg1;
- (void)toggleBaseWritingDirection;
- (void)updateLayout;
- (struct VisiblePosition)visiblePositionForPoint:(struct CGPoint)arg1;
- (id)webVisiblePositionForPoint:(struct CGPoint)arg1;
- (id)wordAtPoint:(struct CGPoint)arg1;
- (id)wordInRange:(id)arg1;
- (int)wordOffsetInRange:(id)arg1;
- (id)wordRangeContainingCaretSelection;
- (id)wordsInCurrentParagraph;

@end

