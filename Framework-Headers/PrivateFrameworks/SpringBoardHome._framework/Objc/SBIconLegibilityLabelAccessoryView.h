//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBIconLabelAccessoryView.h>

@class UIImageView;

@interface SBIconLegibilityLabelAccessoryView : SBIconLabelAccessoryView
{
    UIImageView *_iconImageView;
}

@property (readonly, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;

- (void).cxx_destruct;
- (void)addInvertingFilter;
- (struct UIEdgeInsets)alignmentRectInsets;
- (double)baselineOffsetFromBottom;
- (BOOL)hasBaseline;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)removeInvertingFilter;
- (void)updateWithBaseImage:(id)arg1 legibilitySettings:(id)arg2;

@end
