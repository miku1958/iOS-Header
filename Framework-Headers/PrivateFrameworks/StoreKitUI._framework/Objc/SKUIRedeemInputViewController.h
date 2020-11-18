//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIRedeemStepViewController.h>

#import <StoreKitUI/UITextFieldDelegate-Protocol.h>

@class NSString, SKUIRedeemITunesPassLockup, SKUIRedeemTextField, UIBarButtonItem, UIImageView;

@interface SKUIRedeemInputViewController : SKUIRedeemStepViewController <UITextFieldDelegate>
{
    long long _category;
    SKUIRedeemTextField *_field;
    UIImageView *_imageView;
    NSString *_initialCode;
    SKUIRedeemITunesPassLockup *_passbookLockup;
    UIBarButtonItem *_redeemButton;
}

@property (readonly, nonatomic) long long category; // @synthesize category=_category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *initialCode; // @synthesize initialCode=_initialCode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelAction:(id)arg1;
- (id)_newTextFieldWithClientContext:(id)arg1;
- (void)_passbookLockupAction:(id)arg1;
- (void)_redeemAction:(id)arg1;
- (void)_redeemConfigurationImagesDidLoad:(id)arg1;
- (void)_termsButtonAction:(id)arg1;
- (void)_textFieldTextDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithRedeemCategory:(long long)arg1;
- (void)loadView;
- (BOOL)textFieldShouldReturn:(id)arg1;

@end

