//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, NEPremiumBadgeMask, TUShineView;

@interface NEPremiumBadgeView : UIView
{
    MISSING_TYPE *premiumBadgeMask;
    MISSING_TYPE *isMotionEnabled;
    MISSING_TYPE *shineView;
    MISSING_TYPE *$__lazy_storage_$_shineMaskLayer;
    MISSING_TYPE *context;
}

@property (nonatomic) BOOL isMotionEnabled; // @synthesize isMotionEnabled;
@property (nonatomic, strong) NEPremiumBadgeMask *premiumBadgeMask; // @synthesize premiumBadgeMask;
@property (nonatomic, readonly) TUShineView *shineView; // @synthesize shineView;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
