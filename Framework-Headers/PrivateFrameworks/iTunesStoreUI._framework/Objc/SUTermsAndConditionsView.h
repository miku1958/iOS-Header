//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SUClientInterface, SULinkControl, SUSubtitledButton;
@protocol SUTermsAndConditionsViewDelegate;

@interface SUTermsAndConditionsView : UIView
{
    SUSubtitledButton *_button;
    SUClientInterface *_clientInterface;
    id<SUTermsAndConditionsViewDelegate> _delegate;
    BOOL _hideAccountButton;
    double _rightMargin;
    long long _style;
    SULinkControl *_termsAndConditionsControl;
}

@property (strong, nonatomic) SUClientInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
@property (weak, nonatomic) id<SUTermsAndConditionsViewDelegate> delegate;
@property (nonatomic) BOOL hideAccountButton; // @synthesize hideAccountButton=_hideAccountButton;
@property (nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property (nonatomic) long long style; // @synthesize style=_style;

- (void)_accountsChangedNotification:(id)arg1;
- (id)_button;
- (void)_buttonAction:(id)arg1;
- (double)_buttonHeightForStyle:(long long)arg1;
- (void)_clearButtonSelection:(id)arg1;
- (void)_destroyButton;
- (long long)_linkStyleForStyle:(long long)arg1;
- (void)_termsAndConditionsAction:(id)arg1;
- (id)_termsAndConditionsControl;
- (void)_updateButton;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;

@end

