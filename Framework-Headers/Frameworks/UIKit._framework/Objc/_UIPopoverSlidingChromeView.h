//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIPopoverBackgroundView.h>

__attribute__((visibility("hidden")))
@interface _UIPopoverSlidingChromeView : UIPopoverBackgroundView
{
}

+ (double)arrowBase;
+ (double)arrowHeight;
+ (struct UIEdgeInsets)contentViewInsets;
+ (double)cornerRadius;
- (struct UIEdgeInsets)_contentViewInsets;
- (struct UIEdgeInsets)_shadowInsets;
- (struct CGSize)_shadowOffset;
- (double)_shadowOpacity;
- (id)_shadowPathForRect:(struct CGRect)arg1 arrowDirection:(unsigned long long)arg2;
- (double)_shadowRadius;
- (unsigned long long)arrowDirection;
- (double)arrowOffset;
- (void)layoutSubviews;
- (void)setArrowDirection:(unsigned long long)arg1;
- (void)setArrowOffset:(double)arg1;

@end

