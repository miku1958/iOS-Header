//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIWebDocumentView.h>

#import <UIKitCore/UIWebFormAccessoryDelegate-Protocol.h>
#import <UIKitCore/UIWebTouchEventsGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/_UIWebRotationDelegate-Protocol.h>

@class DOMNode, NSHashTable, NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString, UIResponder, UIWebFormAccessory, UIWebFormDelegate, UIWebTouchEventsGestureRecognizer;
@protocol UIFormPeripheral, UIWebAutoFillDelegate;

@interface UIWebBrowserView : UIWebDocumentView <UIWebTouchEventsGestureRecognizerDelegate, UIWebFormAccessoryDelegate, _UIWebRotationDelegate>
{
    UIWebFormAccessory *_accessory;
    NSObject<UIFormPeripheral> *_input;
    DOMNode *_currentAssistedNode;
    DOMNode *_assistedNodeStartingFocusRedirects;
    struct CGRect _inputViewBounds;
    struct CGRect _addressViewBounds;
    double _lastAdjustmentForScroller;
    unsigned long long _audioSessionCategoryOverride;
    unsigned int _accessoryEnabled:1;
    unsigned int _forceInputView:1;
    unsigned int _formIsAutoFilling:1;
    unsigned int _inputViewObeysDOMFocus:1;
    unsigned int _allowDOMFocusRedirects:1;
    unsigned int _hasEditedTextField:1;
    unsigned int _alwaysDispatchesScrollEvents:1;
    unsigned int _allowsPictureInPictureVideo:1;
    unsigned int _allowsLinkPreview:1;
    UIWebTouchEventsGestureRecognizer *_webTouchEventsGestureRecognizer;
    UIWebFormDelegate *_formDelegate;
    UIResponder *_editingDelegateForEverythingExceptForms;
    unsigned long long _dispatchedTouchEvents;
    NSMutableArray *_deferredTouchEvents;
    NSHashTable *_activeHighlighters;
    NSMutableSet *_overflowScrollViewsPendingInsertion;
    NSMutableSet *_overflowScrollViewsPendingDeletion;
    NSMutableSet *_overflowScrollViews;
    NSLock *_pendingOverflowDataLock;
    NSMutableArray *_pendingOverflowScrolls;
    BOOL _pendingGeometryChangeAfterOverflowScroll;
    NSMutableDictionary *_focusPreservingTokens;
    struct {
        NSMutableArray *all;
        NSMutableArray *html;
        NSMutableArray *javascript;
        NSMutableArray *css;
        NSMutableArray *error;
        NSMutableArray *warning;
        NSMutableArray *tip;
        NSMutableArray *log;
    } _messages;
    CDStruct_d58a15aa _pdf;
    id<UIWebAutoFillDelegate> _autoFillDelegate;
}

@property (strong, nonatomic) UIWebFormAccessory *_accessory; // @synthesize _accessory;
@property (strong, nonatomic) DOMNode *_currentAssistedNode; // @synthesize _currentAssistedNode;
@property (nonatomic) UIResponder *_editingDelegateForEverythingExceptForms; // @synthesize _editingDelegateForEverythingExceptForms;
@property (strong, nonatomic) NSObject<UIFormPeripheral> *_input; // @synthesize _input;
@property (nonatomic, getter=isAccessoryEnabled) BOOL accessoryEnabled; // @synthesize accessoryEnabled=_accessoryEnabled;
@property (nonatomic) BOOL allowDOMFocusRedirects; // @synthesize allowDOMFocusRedirects=_allowDOMFocusRedirects;
@property (nonatomic) BOOL allowsInlineMediaPlayback;
@property (nonatomic) BOOL allowsLinkPreview;
@property (nonatomic) BOOL allowsPictureInPictureVideo;
@property (nonatomic) BOOL alwaysDispatchesScrollEvents;
@property (nonatomic) unsigned int audioSessionCategoryOverride;
@property (nonatomic) id<UIWebAutoFillDelegate> autoFillDelegate; // @synthesize autoFillDelegate=_autoFillDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasEditedTextField; // @synthesize hasEditedTextField=_hasEditedTextField;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL inputViewObeysDOMFocus; // @synthesize inputViewObeysDOMFocus=_inputViewObeysDOMFocus;
@property (readonly, nonatomic) BOOL isDispatchingTouchEvents;
@property (nonatomic) BOOL mediaPlaybackRequiresUserAction;
@property (nonatomic) NSString *networkInterfaceName;
@property (readonly) Class superclass;
@property (readonly) Class superclass;

+ (id)getUIWebBrowserViewForWebFrame:(id)arg1;
+ (void)initialize;
- (id)_absoluteUrlRelativeToDocumentURL:(id)arg1;
- (struct CGRect)_activeRectForRectToCenter:(struct CGRect)arg1;
- (void)_addAdditionalSubview:(id)arg1;
- (void)_assistFormNode:(id)arg1;
- (void)_autoFillFrame:(id)arg1;
- (void)_beginAllowingFocusRedirects;
- (void)_centerRect:(struct CGRect)arg1 forSizeChange:(BOOL)arg2 withVisibleHeight:(double)arg3 pinningEdge:(unsigned long long)arg4;
- (void)_centerRect:(struct CGRect)arg1 forSizeChange:(BOOL)arg2 withVisibleHeight:(double)arg3 pinningEdge:(unsigned long long)arg4 toValue:(double)arg5;
- (void)_clearAllConsoleMessages;
- (void)_clearFormAutoFillStateForFrame:(id)arg1;
- (void)_clearSelectionAndUI;
- (void)_clearToken:(id)arg1;
- (id)_collectAdditionalSubviews;
- (struct CGPoint)_convertWindowPointToViewport:(struct CGPoint)arg1;
- (struct CGSize)_defaultScrollViewContentSize;
- (void)_deferWebEvent:(id)arg1;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_didScroll;
- (void)_dispatchWebEvent:(id)arg1;
- (void)_displayFormNodeInputView;
- (BOOL)_dumpWebArchiveAtPath:(id)arg1;
- (id)_editingDelegate;
- (void)_endAllowingFocusRedirects;
- (void)_endDeferringEvents;
- (void)_focusAndAssistFormNode:(id)arg1;
- (void)_handleDeferredEvents;
- (BOOL)_hasSubviewContainingWebContent:(id)arg1;
- (BOOL)_isAutoFilling;
- (BOOL)_keepKeyboardVisibleDuringFocusRedirects;
- (void)_keyboardDidChangeFrame:(id)arg1;
- (void)_keyboardDidHide:(id)arg1;
- (id)_keyboardResponder;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_nextAccessoryTab:(id)arg1;
- (void)_noteOverflowScrollViewPendingDeletion:(id)arg1;
- (void)_noteOverflowScrollViewPendingInsertion:(id)arg1;
- (void)_overflowScrollView:(id)arg1 didEndScrollingForNode:(id)arg2;
- (void)_overflowScrollView:(id)arg1 scrollOffsetChangedForNode:(id)arg2 whileScrolling:(BOOL)arg3;
- (void)_overflowScrollView:(id)arg1 willStartScrollingForNode:(id)arg2;
- (void)_preserveFocusWithToken:(id)arg1 destructively:(BOOL)arg2;
- (void)_prevAccessoryTab:(id)arg1;
- (void)_promptForReplace:(id)arg1;
- (void)_reloadInputViewsAfterPotentialFocusRedirect;
- (void)_removeAdditionalSubview:(id)arg1;
- (void)_removeFindOnPageHighlighter:(id)arg1;
- (BOOL)_requiresKeyboardResetOnReload;
- (BOOL)_requiresKeyboardWhenFirstResponder;
- (void)_resetFormDataForFrame:(id)arg1;
- (BOOL)_resignFirstResponderAndBlurFocusedElement;
- (BOOL)_restoreFocusWithToken:(id)arg1;
- (void)_scrollCaretToVisible:(id)arg1;
- (void)_setInputViewBoundsForAutomaticKeyboardInfo:(id)arg1 adjustScrollView:(BOOL)arg2;
- (void)_setSelectedDOMRangeAndUpdateUI:(id)arg1;
- (void)_setUnobscuredSafeAreaInsets:(struct UIEdgeInsets)arg1;
- (BOOL)_shouldDeferEvents;
- (BOOL)_shouldRestorationInputViewsOnlyWhenKeepingFirstResponder;
- (void)_startAssistingKeyboard;
- (void)_startAssistingNode:(id)arg1;
- (void)_startDeferringEvents;
- (void)_startURLificationIfNeededCoalesce:(BOOL)arg1;
- (void)_stopAssistingFormNode;
- (void)_stopAssistingKeyboard;
- (void)_stopAssistingNode:(id)arg1;
- (void)_transliterateChinese:(id)arg1;
- (void)_updateAccessory;
- (void)_updateAutoFillButton;
- (void)_updateFixedPositionContent;
- (void)_updateFixedPositioningObjectsLayoutAfterScroll;
- (void)_updateFixedPositioningObjectsLayoutAfterVisibleGeometryChange;
- (void)_updateFixedPositioningObjectsLayoutDuringScroll;
- (void)_updateFixedPositioningObjectsLayoutSoon;
- (void)_updateScrollerViewForInputView:(id)arg1;
- (void)_webThreadOverflowScrollOffsetChanged;
- (void)_webTouchEventsRecognized:(id)arg1;
- (void)_webViewFormEditedStatusHasChanged:(id)arg1;
- (void)_zoomToNode:(id)arg1 forceScroll:(BOOL)arg2;
- (void)_zoomToRect:(struct CGRect)arg1 ensuringVisibilityOfRect:(struct CGRect)arg2 withScale:(double)arg3 forceScroll:(BOOL)arg4;
- (void)_zoomToRect:(struct CGRect)arg1 ensuringVisibilityOfRect:(struct CGRect)arg2 withScale:(double)arg3 forceScroll:(BOOL)arg4 formAssistantFrame:(struct CGRect)arg5 animationDuration:(double)arg6;
- (void)_zoomToRect:(struct CGRect)arg1 withScale:(double)arg2;
- (void)acceptedAutoFillWord:(id)arg1;
- (void)accessoryAutoFill;
- (void)accessoryClear;
- (void)accessoryDone;
- (void)accessoryTab:(BOOL)arg1;
- (struct CGRect)activeRectForRectOfInterest:(struct CGRect)arg1;
- (id)addFindOnPageHighlighter;
- (BOOL)appendOverflowScrollForNode:(id)arg1 offset:(struct CGPoint)arg2 whileScrolling:(BOOL)arg3;
- (void)assistFormNode:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)clearMessagesMatchingMask:(int)arg1;
- (BOOL)considerHeightOfRectOfInterestForRotation;
- (struct CGSize)contentSizeForScrollView:(id)arg1;
- (void)copy:(id)arg1;
- (void)dealloc;
- (void)formDelegateTextDidChange;
- (id)formElement;
- (double)heightToKeepVisible;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithWebView:(id)arg1 frame:(struct CGRect)arg2;
- (id)inputAccessoryView;
- (id)inputView;
- (void)installGestureRecognizers;
- (BOOL)isAnyTouchOverActiveArea:(id)arg1;
- (BOOL)isAutoFillMode;
- (BOOL)isEditable;
- (id)keyCommands;
- (id)messagesMatchingMask:(int)arg1;
- (double)minimumVerticalContentOffset;
- (BOOL)playsNicelyWithGestures;
- (struct CGRect)rectOfInterestForRotation;
- (void)redrawScaledDocument;
- (BOOL)resignFirstResponder;
- (void)rotateEnclosingScrollViewToFrame:(struct CGRect)arg1;
- (double)scaleForProposedNewScale:(double)arg1 andOldScale:(double)arg2;
- (CDStruct_39925896)scalesForContainerSize:(struct CGSize)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)shouldIgnoreWebTouch;
- (void)simulateDidScroll;
- (id)textDocument;
- (id)textFormElement;
- (void)updateBoundariesOfScrollView:(id)arg1 withScales:(CDStruct_39925896)arg2;
- (void)webView:(id)arg1 addMessageToConsole:(id)arg2 withSource:(id)arg3;
- (void)webView:(id)arg1 didCreateOrUpdateScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 scrollSize:(id)arg4 forNode:(id)arg5 allowHorizontalScrollbar:(BOOL)arg6 allowVerticalScrollbar:(BOOL)arg7;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 elementDidBlurNode:(id)arg2;
- (void)webView:(id)arg1 elementDidFocusNode:(id)arg2;
- (void)webView:(id)arg1 willCloseFrame:(id)arg2;
- (void)webView:(id)arg1 willRemoveScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 forNode:(id)arg4;
- (void)webViewDidCommitCompositingLayerChanges:(id)arg1;
- (void)webViewDidPreventDefaultForEvent:(id)arg1;

@end
