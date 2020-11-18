//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIImageView, UISlider;

@interface SSVellumOpacityControl : UIControl
{
    UISlider *_slider;
    UIImageView *_leadingImageView;
    UIImageView *_trailingImageView;
}

@property (nonatomic) double value;

+ (double)preferredWidth;
- (void).cxx_destruct;
- (id)_leftImageView;
- (id)_rightImageView;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)tintColorDidChange;

@end
