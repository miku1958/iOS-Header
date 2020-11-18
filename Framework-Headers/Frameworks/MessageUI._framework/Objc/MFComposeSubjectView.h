//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/MFMailComposeHeaderView.h>

#import <MessageUI/NSLayoutManagerDelegate-Protocol.h>
#import <MessageUI/UITextViewDelegate-Protocol.h>

@class MFConfirmationButton, NSString, UITextView;
@protocol MFComposeSubjectViewDelegate;

@interface MFComposeSubjectView : MFMailComposeHeaderView <NSLayoutManagerDelegate, UITextViewDelegate>
{
    unsigned int _delegateRespondsToTextChange:1;
    unsigned int _delegateRespondsToWillRemoveContent:1;
    BOOL _needsExclusionPathUpdate;
    BOOL _allowsNotifyOption;
    UITextView *_textView;
    MFConfirmationButton *_notifyButton;
    double _trailingButtonMidlineInsetFromLayoutMargin;
}

@property (nonatomic) BOOL allowsNotifyOption; // @synthesize allowsNotifyOption=_allowsNotifyOption;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MFComposeSubjectViewDelegate> delegate; // @dynamic delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) MFConfirmationButton *notifyButton; // @synthesize notifyButton=_notifyButton;
@property (nonatomic, getter=isNotifyOptionSelected) BOOL notifyOptionSelected;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;
@property (readonly, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property (nonatomic) double trailingButtonMidlineInsetFromLayoutMargin; // @synthesize trailingButtonMidlineInsetFromLayoutMargin=_trailingButtonMidlineInsetFromLayoutMargin;

- (void).cxx_destruct;
- (BOOL)_canBecomeFirstResponder;
- (void)_configureNotifyGlyphs;
- (void)_showNotifyButtonIfNeeded;
- (id)_textContainerExclusionPathsWithNotifyButton:(BOOL)arg1;
- (void)_textInputDidChange:(id)arg1;
- (void)_updateExclusionPathsIfNeeded;
- (void)_updateTextContainerInsets;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (void)displayMetricsDidChange;
- (BOOL)endEditing:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isEndEditingText:(id)arg1;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3;
- (void)layoutSubviews;
- (void)refreshPreferredContentSize;
- (void)setFrame:(struct CGRect)arg1;
- (void)setNeedsExclusionPathUpdate;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
