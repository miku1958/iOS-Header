//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import <ChatKit/CKMessageEntryRichTextViewDelegate-Protocol.h>
#import <ChatKit/UITextViewDelegate-Protocol.h>

@class CKComposition, CKMessageEntryRichTextView, CKMessageEntryTextView, NSString, UIView;

@interface CKMessageEntryContentView : UIScrollView <UITextViewDelegate, CKMessageEntryRichTextViewDelegate>
{
    BOOL _shouldShowSubject;
    BOOL _shouldShowCharacterCount;
    BOOL _needsTextLayout;
    BOOL _needsEnsureSelectionVisible;
    BOOL _ignoreEndEditing;
    BOOL _isCompositionExpirable;
    CKComposition *_composition;
    CKMessageEntryTextView *_subjectView;
    CKMessageEntryRichTextView *_textView;
    UIView *_activeView;
    double _placeholderHeight;
    UIView *_dividerLine;
    struct UIEdgeInsets _textAlignmentInsets;
    struct UIEdgeInsets _subjectAlignmentInsets;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (nonatomic) UIView *activeView; // @synthesize activeView=_activeView;
@property (nonatomic) BOOL balloonColor;
@property (strong, nonatomic) CKComposition *composition; // @synthesize composition=_composition;
@property (readonly, nonatomic) struct UIEdgeInsets contentTextAlignmentInsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIView *dividerLine; // @synthesize dividerLine=_dividerLine;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL ignoreEndEditing; // @synthesize ignoreEndEditing=_ignoreEndEditing;
@property (nonatomic) BOOL isCompositionExpirable; // @synthesize isCompositionExpirable=_isCompositionExpirable;
@property (nonatomic) BOOL needsEnsureSelectionVisible; // @synthesize needsEnsureSelectionVisible=_needsEnsureSelectionVisible;
@property (nonatomic) BOOL needsTextLayout; // @synthesize needsTextLayout=_needsTextLayout;
@property (nonatomic) double placeholderHeight; // @synthesize placeholderHeight=_placeholderHeight;
@property (copy, nonatomic) NSString *placeholderText;
@property (nonatomic) BOOL shouldShowCharacterCount; // @synthesize shouldShowCharacterCount=_shouldShowCharacterCount;
@property (nonatomic) BOOL shouldShowSubject; // @synthesize shouldShowSubject=_shouldShowSubject;
@property (readonly, nonatomic, getter=isShowingDictationPlaceholder) BOOL showingDictationPlaceholder;
@property (readonly, nonatomic, getter=isSingleLine) BOOL singleLine;
@property (nonatomic) struct UIEdgeInsets subjectAlignmentInsets; // @synthesize subjectAlignmentInsets=_subjectAlignmentInsets;
@property (strong, nonatomic) CKMessageEntryTextView *subjectView; // @synthesize subjectView=_subjectView;
@property (readonly) Class superclass;
@property (nonatomic) struct UIEdgeInsets textAlignmentInsets; // @synthesize textAlignmentInsets=_textAlignmentInsets;
@property (strong, nonatomic) CKMessageEntryRichTextView *textView; // @synthesize textView=_textView;

- (void)acceptAutocorrection;
- (void)calculateTextMetrics;
- (void)dealloc;
- (void)ensureSelectionVisibleIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1 shouldShowSubject:(BOOL)arg2 shouldShowCharacterCount:(BOOL)arg3;
- (void)invalidateComposition;
- (void)layoutSubviews;
- (BOOL)makeActive;
- (void)messageEntryRichTextView:(id)arg1 didTapMediaObject:(id)arg2;
- (BOOL)messageEntryRichTextView:(id)arg1 shouldPasteMediaObjects:(id)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (BOOL)textViewShouldBeginEditing:(id)arg1;

@end
