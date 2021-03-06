//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <StoreKitUI/UITextFieldDelegate-Protocol.h>

@class NSString, UITextField;
@protocol SKUIRedeemIdTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface SKUIRedeemIdTableViewCell : UITableViewCell <UITextFieldDelegate>
{
    id<SKUIRedeemIdTableViewCellDelegate> _delegate;
    UITextField *_textField;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKUIRedeemIdTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITextField *textField; // @synthesize textField=_textField;

- (void).cxx_destruct;
- (void)_initializeTextField;
- (BOOL)becomeFirstResponder;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (BOOL)resignFirstResponder;
- (void)setAutoCapitalizationType:(long long)arg1;
- (void)setKeyboardType:(long long)arg1;
- (void)setPlaceholderText:(id)arg1;
- (void)setReturnKeyType:(long long)arg1;
- (void)textFieldDidChange:(id)arg1;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;

@end

