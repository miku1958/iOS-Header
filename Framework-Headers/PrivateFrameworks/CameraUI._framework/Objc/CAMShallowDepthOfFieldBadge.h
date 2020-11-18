//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAMBadgeTextView;

@interface CAMShallowDepthOfFieldBadge : UIView
{
    long long _shallowDepthOfFieldStatus;
    CAMBadgeTextView *__enabledTextView;
    CAMBadgeTextView *__disabledTextView;
}

@property (readonly, nonatomic) CAMBadgeTextView *_disabledTextView; // @synthesize _disabledTextView=__disabledTextView;
@property (readonly, nonatomic) CAMBadgeTextView *_enabledTextView; // @synthesize _enabledTextView=__enabledTextView;
@property (nonatomic) long long shallowDepthOfFieldStatus; // @synthesize shallowDepthOfFieldStatus=_shallowDepthOfFieldStatus;

- (void).cxx_destruct;
- (void)_updateForShallowDepthOfFieldStatusAnimated:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setShallowDepthOfFieldStatus:(long long)arg1 animated:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

