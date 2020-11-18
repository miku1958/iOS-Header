//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SKUIOnboardingProgressView, UIButton;

@interface SKUIOnboardingFooterView : UIView
{
    UIButton *_leftButton;
    SKUIOnboardingProgressView *_progressView;
    UIButton *_rightButton;
}

@property (readonly, nonatomic) UIButton *leftButton;
@property (strong, nonatomic) SKUIOnboardingProgressView *progressView; // @synthesize progressView=_progressView;
@property (readonly, nonatomic) UIButton *rightButton;

- (void).cxx_destruct;
- (void)_hideButton:(id)arg1 withAnimation:(long long)arg2;
- (id)_newButton;
- (void)_showButton:(id)arg1 withTitle:(id)arg2 animation:(long long)arg3;
- (void)hideLeftButtonWithAnimation:(long long)arg1;
- (void)hideRightButtonWithAnimation:(long long)arg1;
- (void)layoutSubviews;
- (void)showLeftButtonWithTitle:(id)arg1 animation:(long long)arg2;
- (void)showRightButtonWithTitle:(id)arg1 animation:(long long)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

