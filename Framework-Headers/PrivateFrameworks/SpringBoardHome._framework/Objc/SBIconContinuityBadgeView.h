//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoardHome/SBIconAccessoryView-Protocol.h>

@class NSString, SBDarkeningImageView, SBFParallaxSettings, SBHIconAccessoryCountedMapImageTuple, UIImageView;
@protocol SBIconListLayout;

@interface SBIconContinuityBadgeView : UIView <SBIconAccessoryView>
{
    id<SBIconListLayout> _listLayout;
    long long _badgeType;
    SBHIconAccessoryCountedMapImageTuple *_backgroundImageTuple;
    SBHIconAccessoryCountedMapImageTuple *_foregroundImageTuple;
    SBDarkeningImageView *_backgroundView;
    UIImageView *_foregroundView;
}

@property (readonly, nonatomic) SBHIconAccessoryCountedMapImageTuple *backgroundImageTuple; // @synthesize backgroundImageTuple=_backgroundImageTuple;
@property (readonly, nonatomic) SBDarkeningImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (nonatomic) long long badgeType; // @synthesize badgeType=_badgeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) SBHIconAccessoryCountedMapImageTuple *foregroundImageTuple; // @synthesize foregroundImageTuple=_foregroundImageTuple;
@property (readonly, nonatomic) UIImageView *foregroundView; // @synthesize foregroundView=_foregroundView;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<SBIconListLayout> listLayout; // @synthesize listLayout=_listLayout;
@property (strong, nonatomic) SBFParallaxSettings *parallaxSettings;
@property (readonly) Class superclass;

+ (id)_checkoutImageForContinuityBadgeType:(long long)arg1 highlighted:(BOOL)arg2;
+ (id)backgroundImageCache;
- (void).cxx_destruct;
- (id)_checkoutBackgroundImageTuple;
- (void)_clearIcon;
- (struct CGPoint)accessoryCenterForIconBounds:(struct CGRect)arg1;
- (double)badgeContentScale;
- (struct CGSize)badgeSize;
- (void)configureAnimatedForIcon:(id)arg1 infoProvider:(id)arg2 animator:(id)arg3;
- (void)configureForIcon:(id)arg1 infoProvider:(id)arg2;
- (void)dealloc;
- (BOOL)displayingAccessory;
- (id)init;
- (struct CGSize)intrinsicContentSize;
- (struct CGPoint)layoutOffset;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setAccessoryBrightness:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

