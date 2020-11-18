//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIVisualEffectView;

@interface PKDiscoveryDismissButton : UIButton
{
    UIVisualEffectView *_blurView;
    long long _style;
}

@property (readonly, nonatomic) long long style; // @synthesize style=_style;

+ (long long)_blurEffectStyleForUserInterfaceStyle:(long long)arg1;
+ (id)_tintColorForUserInterfaceStyle:(long long)arg1;
- (void).cxx_destruct;
- (id)_backingEffect;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)_tintColor;
- (void)_updateStyleWithStyle:(long long)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateStyleWithStyle:(long long)arg1 animated:(BOOL)arg2;

@end
