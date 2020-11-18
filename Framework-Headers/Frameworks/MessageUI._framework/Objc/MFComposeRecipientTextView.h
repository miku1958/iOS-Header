//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/MFComposeHeaderView.h>

#import <MessageUI/MFComposeRecipientAtomDelegate-Protocol.h>
#import <MessageUI/MFMultiDragDestination-Protocol.h>
#import <MessageUI/MFMultiDragSource-Protocol.h>
#import <MessageUI/NSLayoutManagerDelegate-Protocol.h>
#import <MessageUI/UITextViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, NSTimer, NSUndoManager, UIButton, UIColor, UIFont, UITextView, UIView, _MFAtomTextAttachment, _MFAtomTextView;
@protocol MFComposeRecipientTextViewDelegate, MFDraggableItem;

@interface MFComposeRecipientTextView : MFComposeHeaderView <UITextViewDelegate, NSLayoutManagerDelegate, MFMultiDragSource, MFMultiDragDestination, MFComposeRecipientAtomDelegate>
{
    _MFAtomTextView *_textView;
    UITextView *_inactiveTextView;
    UIColor *_inactiveTextColor;
    UIView *_atomContainerView;
    NSMutableArray *_atomViews;
    NSMutableDictionary *_atomPresentationOptionsByRecipient;
    NSMutableDictionary *_atomLayoutOptionsByRecipient;
    long long _atomViewAnimationDepth;
    struct _NSRange _dragSourceRange;
    id<MFDraggableItem> _pivotItem;
    BOOL _parentIsClosing;
    BOOL _textViewExclusionPathsAreValid;
    BOOL _isTextFieldCollapsed;
    BOOL _collapsedStateInitialized;
    BOOL _indicatesUnsafeRecipientsWhenCollapsed;
    BOOL _notifyDelegateOfSizeChange;
    NSTimer *_collapsableUpdateTimer;
    NSArray *_properties;
    NSMutableArray *_recipientsBeingRemoved;
    NSUndoManager *_undoManager;
    BOOL _editable;
    BOOL _allowsDragAndDrop;
    BOOL _separatorHidden;
    BOOL _expanded;
    BOOL _didIgnoreFirstResponderResign;
    int _hideLastAtomComma;
    UIFont *_baseFont;
    long long _maxRecipients;
    UIButton *_addButton;
    _MFAtomTextAttachment *_placeholderAttachment;
}

@property (readonly, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property (copy, nonatomic) NSArray *addresses;
@property (nonatomic) BOOL allowsDragAndDrop; // @synthesize allowsDragAndDrop=_allowsDragAndDrop;
@property (readonly, nonatomic) UIView *atomContainerView; // @synthesize atomContainerView=_atomContainerView;
@property (strong, nonatomic) UIFont *baseFont; // @synthesize baseFont=_baseFont;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<MFComposeRecipientTextViewDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL didIgnoreFirstResponderResign; // @synthesize didIgnoreFirstResponderResign=_didIgnoreFirstResponderResign;
@property (nonatomic) BOOL editable; // @synthesize editable=_editable;
@property (nonatomic) BOOL expanded; // @synthesize expanded=_expanded;
@property (readonly) unsigned long long hash;
@property (nonatomic) int hideLastAtomComma; // @synthesize hideLastAtomComma=_hideLastAtomComma;
@property (strong, nonatomic) UIColor *inactiveTextColor;
@property (nonatomic) BOOL indicatesUnsafeRecipientsWhenCollapsed; // @synthesize indicatesUnsafeRecipientsWhenCollapsed=_indicatesUnsafeRecipientsWhenCollapsed;
@property (nonatomic) long long maxRecipients; // @synthesize maxRecipients=_maxRecipients;
@property (readonly, nonatomic) unsigned long long numberOfRowsOfTextInField;
@property (readonly, nonatomic) double offsetForRowWithTextField;
@property (strong, nonatomic) _MFAtomTextAttachment *placeholderAttachment; // @synthesize placeholderAttachment=_placeholderAttachment;
@property (copy, nonatomic) NSArray *recipients;
@property (nonatomic, getter=isSeparatorHidden) BOOL separatorHidden; // @synthesize separatorHidden=_separatorHidden;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) UITextView *textView;
@property (readonly, copy, nonatomic) NSArray *uncommentedAddresses;

+ (id)defaultFont;
- (void)_addAddressAtomSubview:(id)arg1;
- (void)_addButtonTapped:(id)arg1;
- (void)_addRecord:(void *)arg1 identifier:(int)arg2;
- (id)_atomAttachmentForRecipient:(id)arg1;
- (unsigned long long)_atomPresentationOptionsForRecipient:(id)arg1;
- (id)_atomViewAtCharacterIndex:(unsigned long long)arg1;
- (void)_beginAtomViewAnimations;
- (BOOL)_canAddAdditionalAtoms;
- (BOOL)_delegateRespondsToSizeChange;
- (void)_didRemoveRecipient:(id)arg1;
- (BOOL)_hasUnsafeRecipients;
- (void)_insertAtomAttachment:(id)arg1 andReplaceCharactersInRange:(struct _NSRange)arg2;
- (void)_insertAtomAttachment:(id)arg1 atCharacterIndex:(unsigned long long)arg2;
- (void)_invalidateAtomPresentationOptionsCache;
- (void)_invalidateTextContainerExclusionPaths;
- (BOOL)_isAddButtonVisible;
- (BOOL)_isTextViewCollapsed;
- (void)_longPressGestureRecognized:(id)arg1;
- (void)_notifyDelegateOfNewSize:(struct CGSize)arg1;
- (void)_notifyDelegateOfSizeChange;
- (id)_placeholderAttachmentForRecipient:(id)arg1;
- (struct _NSRange)_placeholderAttachmentRange;
- (struct _NSRange)_rangeForComposeRecipientAtom:(id)arg1;
- (void)_recomputeTextContainerExclusionPaths;
- (void)_removeAddressAtomSubview:(id)arg1;
- (void)_removeAllRecipients;
- (void)_resetSelectionState;
- (void)_setAddButtonVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setTextViewIsCollapsed:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setValue:(id)arg1 forAtomLayoutOption:(id)arg2 withRecipient:(id)arg3;
- (BOOL)_shouldAnimateAtomViewChanges;
- (void)_tapGestureRecognized:(id)arg1;
- (id)_textContainerExclusionPathsWithAddButton:(BOOL)arg1;
- (BOOL)_textViewContainsAtomizedRecipients;
- (void)_updateInactiveTextView;
- (BOOL)_useRightToLeftLayout;
- (id)_userEnteredTextWithRange:(struct _NSRange *)arg1;
- (id)_valueForAtomLayoutOption:(id)arg1 withRecipient:(id)arg2;
- (void)addAddress:(id)arg1;
- (void)addRecipient:(id)arg1;
- (void)addRecipient:(id)arg1 index:(unsigned long long)arg2 animate:(BOOL)arg3;
- (void)addRecord:(void *)arg1 property:(int)arg2 identifier:(int)arg3;
- (BOOL)allowsDrag;
- (void)animatePlaceholderForDragFailureWithItems:(id)arg1;
- (void)atomTextView:(id)arg1 didChangeWritingDirection:(long long)arg2;
- (void)atomTextViewDidBecomeFirstResponder:(id)arg1;
- (void)atomTextViewDidResignFirstResponder:(id)arg1;
- (id)atomViewForRecipient:(id)arg1;
- (id)atomViewsInRange:(struct _NSRange)arg1;
- (BOOL)becomeFirstResponder;
- (void)clearText;
- (void)composeRecipientAtomSelectNext:(id)arg1;
- (void)composeRecipientAtomSelectPrevious:(id)arg1;
- (void)composeRecipientAtomShowPersonCard:(id)arg1;
- (BOOL)containsAddress:(id)arg1;
- (void)dealloc;
- (void)deselectComposeRecipientAtom:(id)arg1;
- (id)destinationViewForDrop;
- (void)dragCompletedWithItems:(id)arg1 success:(BOOL)arg2;
- (void)dragEnteredAtPoint:(struct CGPoint)arg1 withItems:(id)arg2;
- (void)dragExitedWithItems:(id)arg1;
- (void)dragMovedToPoint:(struct CGPoint)arg1 withItems:(id)arg2;
- (void)dragStartedWithItems:(id)arg1;
- (void)dropItems:(id)arg1;
- (BOOL)finishEnteringRecipient;
- (struct CGRect)frameForDraggedItem:(id)arg1 isPivotView:(out BOOL *)arg2;
- (struct CGRect)frameForDroppedItem:(id)arg1;
- (BOOL)hasContent;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)invalidateAtomPresentationOptions;
- (void)invalidateAtomPresentationOptionsForRecipient:(id)arg1;
- (BOOL)isFirstResponder;
- (id)itemsForDragAtPoint:(struct CGPoint)arg1;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3;
- (void)layoutSubviews;
- (void)parentDidClose;
- (void)parentWillClose;
- (void)reflow;
- (void)refreshPreferredContentSize;
- (void)removeRecipient:(id)arg1;
- (void)selectComposeRecipientAtom:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setEditable:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)setLabel:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setProperty:(int)arg1;
- (BOOL)shouldCollapseMultipleItems;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)supportedDropTypes:(id)arg1;
- (double)textFieldOffsetForNumberOfRowsToScroll:(unsigned long long)arg1 numberOfRowsAboveField:(long long)arg2;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (id)undoManager;
- (id)viewForDragSource;
- (id)viewForDraggedItem:(id)arg1 atScale:(double)arg2;
- (void)willDropItems:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;

@end

