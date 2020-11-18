//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, NSOrderedSet, NSString, UIView, _UIStatusBar, _UIStatusBarAnimation, _UIStatusBarData, _UIStatusBarRegion, _UIStatusBarStyleAttributes;

@protocol _UIStatusBarVisualProvider <NSObject>

@property (weak, nonatomic) _UIStatusBar *statusBar;
@property (readonly, nonatomic) _UIStatusBarStyleAttributes *styleAttributes;

+ (struct CGSize)intrinsicContentSizeForOrientation:(long long)arg1;
- (NSArray *)orderedDisplayItemPlacementsInRegionWithIdentifier:(NSString *)arg1;
- (NSArray *)setupInContainerView:(UIView *)arg1;

@optional
- (_UIStatusBarAnimation *)additionAnimationForDisplayItemWithIdentifier:(NSString *)arg1 itemAnimation:(_UIStatusBarAnimation *)arg2;
- (void)dataUpdated:(_UIStatusBarData *)arg1;
- (NSArray *)displayItemIdentifiersForPartWithIdentifier:(NSString *)arg1;
- (void)modeUpdatedFromMode:(long long)arg1;
- (void)region:(_UIStatusBarRegion *)arg1 highlighted:(BOOL)arg2 initialPress:(BOOL)arg3;
- (NSOrderedSet *)region:(_UIStatusBarRegion *)arg1 willSetDisplayItems:(NSOrderedSet *)arg2;
- (NSArray *)regionIdentifiersForPartWithIdentifier:(NSString *)arg1;
- (_UIStatusBarAnimation *)removalAnimationForDisplayItemWithIdentifier:(NSString *)arg1 itemAnimation:(_UIStatusBarAnimation *)arg2;
- (void)styleUpdatedFromStyle:(long long)arg1;
- (NSArray *)willUpdateWithData:(_UIStatusBarData *)arg1;
@end

