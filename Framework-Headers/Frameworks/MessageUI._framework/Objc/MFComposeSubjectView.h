//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/MFComposeHeaderView.h>

#import <MessageUI/NSLayoutManagerDelegate-Protocol.h>
#import <MessageUI/UITextViewDelegate-Protocol.h>

@class NSString, UIButton, UITextView;

@interface MFComposeSubjectView : MFComposeHeaderView <NSLayoutManagerDelegate, UITextViewDelegate>
{
    unsigned int _delegateRespondsToTextChange:1;
    unsigned int _delegateRespondsToWillRemoveContent:1;
    unsigned int _notifyButtonSelected:1;
    unsigned int _showNotifyButton:1;
    BOOL _needsExclusionPathUpdate;
    UITextView *_textView;
    UIButton *_notifyButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIButton *notifyButton; // @synthesize notifyButton=_notifyButton;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITextView *textView; // @synthesize textView=_textView;

- (BOOL)_canBecomeFirstResponder;
- (id)_textContainerExclusionPathsWithNotifyButton:(BOOL)arg1;
- (void)_updateExclusionPathsIfNeeded;
- (void)_updateTextContainerInsets;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (id)delegate;
- (BOOL)endEditing:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isEndEditingText:(id)arg1;
- (BOOL)isNotifyButtonSelected;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3;
- (void)layoutSubviews;
- (void)notifyButtonClicked:(id)arg1;
- (void)refreshPreferredContentSize;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setNotifyButtonSelected:(BOOL)arg1;
- (void)setShowNotifyButton:(BOOL)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)updateNotifyButton;

@end

