//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface CAMFramerateIndicatorView : UIView
{
    long long _layoutStyle;
    long long _style;
    UIImageView *__borderImageView;
    UILabel *__label;
}

@property (readonly, nonatomic) UIImageView *_borderImageView; // @synthesize _borderImageView=__borderImageView;
@property (readonly, nonatomic) UILabel *_label; // @synthesize _label=__label;
@property (nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property (nonatomic) long long style; // @synthesize style=_style;

- (void).cxx_destruct;
- (void)_commonCAMFramerateIndicatorViewInitializationWithLayoutStyle:(long long)arg1;
- (long long)_framesPerSecond;
- (void)_updateAppearance;
- (void)_updateForAppearanceChange;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

