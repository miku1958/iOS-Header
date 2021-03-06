//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MKVibrantView, UIColor;

@interface MKViewWithHairline : UIView
{
    MKVibrantView *_bottomHairline;
    MKVibrantView *_topHairline;
    UIColor *_hairlineColor;
    double _leftHairlineInset;
    double _rightHairlineInset;
}

@property (nonatomic, getter=isBottomHairlineHidden) BOOL bottomHairlineHidden;
@property (strong, nonatomic) UIColor *hairlineColor; // @synthesize hairlineColor=_hairlineColor;
@property (nonatomic) double leftHairlineInset; // @synthesize leftHairlineInset=_leftHairlineInset;
@property (nonatomic) double rightHairlineInset; // @synthesize rightHairlineInset=_rightHairlineInset;
@property (nonatomic, getter=isTopHairlineHidden) BOOL topHairlineHidden;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

