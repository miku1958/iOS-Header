//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBReusableView-Protocol.h>

@class SBFParallaxSettings, SBIcon, UIViewPropertyAnimator;
@protocol SBIconAccessoryInfoProvider, SBIconListLayout;

@protocol SBIconAccessoryView <SBReusableView>

@property (strong, nonatomic) id<SBIconListLayout> listLayout;
@property (strong, nonatomic) SBFParallaxSettings *parallaxSettings;

- (struct CGPoint)accessoryCenterForIconBounds:(struct CGRect)arg1;
- (void)configureAnimatedForIcon:(SBIcon *)arg1 infoProvider:(id<SBIconAccessoryInfoProvider>)arg2 animator:(UIViewPropertyAnimator *)arg3;
- (void)configureForIcon:(SBIcon *)arg1 infoProvider:(id<SBIconAccessoryInfoProvider>)arg2;
- (BOOL)displayingAccessory;
- (void)setAccessoryBrightness:(double)arg1;

@optional
@end

