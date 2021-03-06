//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ChatKit/UITextFieldDelegate-Protocol.h>

@class CKDetailsViewAddGroupNameViewUITextField, NSString, UILabel;
@protocol CKDetailsAddGroupNameViewDelegate;

@interface CKDetailsAddGroupNameView : UIView <UITextFieldDelegate>
{
    BOOL _enabled;
    id<CKDetailsAddGroupNameViewDelegate> _delegate;
    NSString *_groupName;
    UILabel *_placeholderLabel;
    CKDetailsViewAddGroupNameViewUITextField *_inputField;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CKDetailsAddGroupNameViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) CKDetailsViewAddGroupNameViewUITextField *inputField; // @synthesize inputField=_inputField;
@property (strong, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property (readonly) Class superclass;

+ (double)preferredHeight;
- (void).cxx_destruct;
- (void)commitGroupName;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;

@end

