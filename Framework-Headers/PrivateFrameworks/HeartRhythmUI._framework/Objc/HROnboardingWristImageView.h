//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HRElectrocardiogramSessionSimulationView, UIImageView;

@interface HROnboardingWristImageView : UIView
{
    UIImageView *_backgroundImageView;
    HRElectrocardiogramSessionSimulationView *_screenView;
}

@property (readonly, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property (readonly, nonatomic) HRElectrocardiogramSessionSimulationView *screenView; // @synthesize screenView=_screenView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setContentMode:(long long)arg1;
- (void)setTimeRemaining:(double)arg1;
- (void)setUpUI;

@end
