//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import <ChatKit/CKMessageEntryRichTextViewDelegate-Protocol.h>
#import <ChatKit/CKMessageEntryViewStyleProtocol-Protocol.h>
#import <ChatKit/UIGestureRecognizerDelegate-Protocol.h>
#import <ChatKit/UITextDragDelegate-Protocol.h>
#import <ChatKit/UITextViewDelegate-Protocol.h>

@class CKComposition, CKConversation, CKMessageEntryRichTextView, CKMessageEntryTextView, IMPluginPayload, NSDictionary, NSString, UIButton, UIView, UIViewController;
@protocol CKPluginEntryViewController;

@interface CKMessageEntryContentView : UIScrollView <UITextViewDelegate, CKMessageEntryRichTextViewDelegate, UITextDragDelegate, CKMessageEntryViewStyleProtocol, UIGestureRecognizerDelegate>
{
    BOOL _shouldShowSubject;
    BOOL _needsTextLayout;
    BOOL _needsEnsureSelectionVisible;
    BOOL _needsEnsureTextViewVisible;
    BOOL _ignoreEndEditing;
    BOOL _isCompositionExpirable;
    BOOL _pendingShelfPayloadWillAnimateIn;
    CKComposition *_composition;
    long long _style;
    CKMessageEntryTextView *_subjectView;
    CKMessageEntryRichTextView *_textView;
    double _placeHolderWidth;
    double _maxContentWidthWhenExpanded;
    double _maxPreviewContentWidthWhenExpanded;
    double _containerViewLineWidth;
    double _sendButtonTextInsetWidth;
    UIViewController<CKPluginEntryViewController> *_pluginEntryViewController;
    CKConversation *_conversation;
    CKMessageEntryTextView *_activeView;
    IMPluginPayload *_shelfPluginPayload;
    UIView *_textAndSubjectDividerLine;
    UIView *_pluginDividerLine;
    UIButton *_clearPluginButton;
    NSString *_requestedPlaceholderText;
    NSString *_overridePlaceholderText;
    NSDictionary *_bizIntent;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) CKMessageEntryTextView *activeView; // @synthesize activeView=_activeView;
@property (nonatomic) BOOL balloonColor;
@property (copy, nonatomic) NSDictionary *bizIntent; // @synthesize bizIntent=_bizIntent;
@property (strong, nonatomic) UIButton *clearPluginButton; // @synthesize clearPluginButton=_clearPluginButton;
@property (strong, nonatomic) CKComposition *composition; // @synthesize composition=_composition;
@property (nonatomic) double containerViewLineWidth; // @synthesize containerViewLineWidth=_containerViewLineWidth;
@property (readonly, nonatomic) struct UIEdgeInsets contentTextAlignmentInsets;
@property (weak, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL ignoreEndEditing; // @synthesize ignoreEndEditing=_ignoreEndEditing;
@property (nonatomic) BOOL isCompositionExpirable; // @synthesize isCompositionExpirable=_isCompositionExpirable;
@property (nonatomic) double maxContentWidthWhenExpanded; // @synthesize maxContentWidthWhenExpanded=_maxContentWidthWhenExpanded;
@property (nonatomic) double maxPreviewContentWidthWhenExpanded; // @synthesize maxPreviewContentWidthWhenExpanded=_maxPreviewContentWidthWhenExpanded;
@property (nonatomic) BOOL needsEnsureSelectionVisible; // @synthesize needsEnsureSelectionVisible=_needsEnsureSelectionVisible;
@property (nonatomic) BOOL needsEnsureTextViewVisible; // @synthesize needsEnsureTextViewVisible=_needsEnsureTextViewVisible;
@property (nonatomic) BOOL needsTextLayout; // @synthesize needsTextLayout=_needsTextLayout;
@property (strong, nonatomic) NSString *overridePlaceholderText; // @synthesize overridePlaceholderText=_overridePlaceholderText;
@property (nonatomic) BOOL pendingShelfPayloadWillAnimateIn; // @synthesize pendingShelfPayloadWillAnimateIn=_pendingShelfPayloadWillAnimateIn;
@property (nonatomic) double placeHolderWidth; // @synthesize placeHolderWidth=_placeHolderWidth;
@property (copy, nonatomic) NSString *placeholderText;
@property (strong, nonatomic) UIView *pluginDividerLine; // @synthesize pluginDividerLine=_pluginDividerLine;
@property (strong, nonatomic) UIViewController<CKPluginEntryViewController> *pluginEntryViewController; // @synthesize pluginEntryViewController=_pluginEntryViewController;
@property (readonly, nonatomic) UIView *pluginView;
@property (strong, nonatomic) NSString *requestedPlaceholderText; // @synthesize requestedPlaceholderText=_requestedPlaceholderText;
@property (nonatomic) double sendButtonTextInsetWidth; // @synthesize sendButtonTextInsetWidth=_sendButtonTextInsetWidth;
@property (strong, nonatomic) IMPluginPayload *shelfPluginPayload; // @synthesize shelfPluginPayload=_shelfPluginPayload;
@property (readonly, nonatomic) BOOL shouldShowPlugin;
@property (nonatomic) BOOL shouldShowSubject; // @synthesize shouldShowSubject=_shouldShowSubject;
@property (readonly, nonatomic, getter=isShowingDictationPlaceholder) BOOL showingDictationPlaceholder;
@property (readonly, nonatomic, getter=isSingleLine) BOOL singleLine;
@property (nonatomic) long long style; // @synthesize style=_style;
@property (strong, nonatomic) CKMessageEntryTextView *subjectView; // @synthesize subjectView=_subjectView;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIView *textAndSubjectDividerLine; // @synthesize textAndSubjectDividerLine=_textAndSubjectDividerLine;
@property (strong, nonatomic) CKMessageEntryRichTextView *textView; // @synthesize textView=_textView;

+ (id)_createSubjectView;
+ (id)_createTextView;
+ (void)prewarmTextView;
- (void).cxx_destruct;
- (double)_calcuateIdealMaxPluginHeight:(BOOL)arg1;
- (void)_layoutDividerLine:(id)arg1 leftInset:(double)arg2 rightInset:(double)arg3 currentYOffset:(double *)arg4;
- (void)_layoutTextView:(id)arg1 currentYOffset:(double *)arg2 originX:(double)arg3 maxWidth:(double)arg4;
- (double)_maxWidthForTextView;
- (BOOL)_shouldDeferUpdateUI;
- (void)_updateUI;
- (void)acceptAutocorrection;
- (void)clearPluginButtonTapped:(id)arg1;
- (void)collapseTextFieldsIfInPencilMode;
- (void)configureShelfForPluginPayload:(id)arg1;
- (void)dealloc;
- (void)didFinishAnimatedBoundsChange;
- (void)ensureSelectionVisibleIfNeeded;
- (void)ensureTextViewVisibleIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1 shouldShowSubject:(BOOL)arg2;
- (void)invalidateComposition;
- (void)layoutSubviews;
- (BOOL)makeActive;
- (double)maxWidthForPreviewImagesInMessageEntryRichTextView:(id)arg1;
- (void)messageEntryRichTextView:(id)arg1 didTapMediaObject:(id)arg2;
- (void)messageEntryRichTextView:(id)arg1 pastedURL:(id)arg2;
- (BOOL)messageEntryRichTextView:(id)arg1 shouldPasteMediaObjects:(id)arg2;
- (BOOL)messageEntryRichTextView:(id)arg1 shouldRecognizeGesture:(id)arg2;
- (void)messageEntryRichTextViewDidTapHandwritingKey:(id)arg1;
- (void)messageEntryRichTextViewDidTapMention:(id)arg1 characterIndex:(double)arg2;
- (void)messageEntryRichTextViewWasTapped:(id)arg1 isLongPress:(BOOL)arg2;
- (void)pluginPayloadWantsResize:(id)arg1;
- (void)plugingPayloadDidLoad:(id)arg1;
- (void)prepareForShelfPayloadAnimation;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)shouldLayoutPluginEdgeToEdge;
- (BOOL)shouldShowClearButton;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)textDraggableView:(id)arg1 itemsForDrag:(id)arg2;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (BOOL)textView:(id)arg1 shouldInteractWithTextAttachment:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (BOOL)textViewShouldBeginEditing:(id)arg1;
- (void)willAnimateBoundsChange;

@end

