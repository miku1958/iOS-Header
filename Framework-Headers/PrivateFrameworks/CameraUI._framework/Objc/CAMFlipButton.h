//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView;

@interface CAMFlipButton : UIButton
{
    long long _layoutStyle;
    long long _orientation;
    UIImageView *__padBackgroundView;
    struct UIEdgeInsets _tappableEdgeInsets;
}

@property (readonly, nonatomic) UIImageView *_padBackgroundView; // @synthesize _padBackgroundView=__padBackgroundView;
@property (nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property (nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property (nonatomic) struct UIEdgeInsets tappableEdgeInsets; // @synthesize tappableEdgeInsets=_tappableEdgeInsets;

+ (id)flipButtonWithLayoutStyle:(long long)arg1;
- (void).cxx_destruct;
- (void)_commonCAMFlipButtonInitializationWithStyle:(long long)arg1;
- (void)_updateForLayoutStyle;
- (void)_updateImages;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setOrientation:(long long)arg1 animated:(BOOL)arg2;

@end
