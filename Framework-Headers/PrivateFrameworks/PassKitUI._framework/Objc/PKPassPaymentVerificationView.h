//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPassFooterContentView.h>

#import <PassKitUI/PKPaymentVerificationControllerDelegate-Protocol.h>

@class NSString, PKContinuousButton, PKPaymentVerificationController, UIActivityIndicatorView, UIButton, UILabel, UIView;

@interface PKPassPaymentVerificationView : PKPassFooterContentView <PKPaymentVerificationControllerDelegate>
{
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    PKContinuousButton *_button;
    UIActivityIndicatorView *_activityIndicator;
    UIButton *_alternateButton;
    UIView *_bottomRule;
    PKPaymentVerificationController *_controller;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activityIndicator;
- (id)_alternateButton;
- (id)_bodyLabel;
- (id)_bottomRule;
- (id)_button;
- (id)_titleLabel;
- (void)_updateButton;
- (void)dealloc;
- (void)didChangeVerificationPresentation;
- (id)initWithPass:(id)arg1 passView:(id)arg2;
- (void)layoutSubviews;
- (void)presentVerificationViewController:(id)arg1 animated:(BOOL)arg2;

@end

