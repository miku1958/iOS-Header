//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class PKLinkedAppIconView, PKPass, PKPaymentPass, UIButton;
@protocol PKPassFooterContentViewDelegate;

@interface PKPassFooterContentView : UIView
{
    BOOL _physicalButtonRequired;
    BOOL _invalidated;
    BOOL _requestPileSuppression;
    long long _style;
    id<PKPassFooterContentViewDelegate> _delegate;
    PKPass *_pass;
    PKLinkedAppIconView *_appIconView;
    UIButton *_infoButton;
    UIView *_bottomRule;
    long long _coachingState;
}

@property (readonly, nonatomic) PKLinkedAppIconView *appIconView; // @synthesize appIconView=_appIconView;
@property (readonly, nonatomic) UIView *bottomRule; // @synthesize bottomRule=_bottomRule;
@property (readonly, nonatomic) long long coachingState; // @synthesize coachingState=_coachingState;
@property (weak, nonatomic) id<PKPassFooterContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
@property (readonly, nonatomic) BOOL invalidated; // @synthesize invalidated=_invalidated;
@property (readonly, nonatomic) PKPass *pass; // @synthesize pass=_pass;
@property (readonly, nonatomic, getter=isPassAuthorized) BOOL passAuthorized;
@property (readonly, nonatomic) PKPaymentPass *paymentPass;
@property (readonly, nonatomic, getter=isPhysicalButtonRequired) BOOL physicalButtonRequired; // @synthesize physicalButtonRequired=_physicalButtonRequired;
@property (readonly, nonatomic) BOOL requestPileSuppression; // @synthesize requestPileSuppression=_requestPileSuppression;
@property (readonly, nonatomic) long long style; // @synthesize style=_style;

- (void).cxx_destruct;
- (id)_buttonWithTitle:(id)arg1;
- (void)_infoButtonPressed:(id)arg1;
- (void)_setCoachingState:(long long)arg1;
- (void)_setPhysicalButtonRequired:(BOOL)arg1;
- (void)_setRequestPileSuppression:(BOOL)arg1;
- (void)coachingStateDidChange;
- (void)dealloc;
- (void)didBecomeHiddenAnimated:(BOOL)arg1;
- (void)didBecomeVisibleAnimated:(BOOL)arg1;
- (id)init;
- (id)initWithPass:(id)arg1;
- (void)invalidate;
- (void)layoutSubviews;
- (void)showFullScreenBarcode;
- (void)willBecomeHiddenAnimated:(BOOL)arg1;
- (void)willBecomeVisibleAnimated:(BOOL)arg1;

@end

