//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUISettingDescriptionView.h>

#import <StoreKitUI/UITextFieldDelegate-Protocol.h>

@class CALayer, NSString, SKUIClientContext, SKUIEditProfileSettingDescription, SKUIImageView, UIButton, UITextField;

__attribute__((visibility("hidden")))
@interface SKUIEditProfileSettingDescriptionView : SKUISettingDescriptionView <UITextFieldDelegate>
{
    CALayer *_divider1;
    SKUIClientContext *_clientContext;
    UIButton *_editButton;
    UITextField *_nameField;
    UITextField *_handleField;
    SKUIImageView *_imageView;
    SKUIEditProfileSettingDescription *_settingDescription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_baselineFontForTextStyle:(id)arg1;
+ (struct CGSize)preferredSizeForSettingDescription:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3;
- (void).cxx_destruct;
- (void)_editProfilePhoto;
- (id)_textFieldWithPlaceholder:(id)arg1;
- (void)_updateHandleTextFieldValidity;
- (void)layoutSubviews;
- (void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;

@end

