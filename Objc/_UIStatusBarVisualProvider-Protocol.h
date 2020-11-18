//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, NSOrderedSet, NSSet, NSString, UIView, _UIStatusBar, _UIStatusBarAnimation, _UIStatusBarData, _UIStatusBarIdentifier, _UIStatusBarItem, _UIStatusBarRegion, _UIStatusBarStyleAttributes;
@protocol _UIStatusBarActionable;

@protocol _UIStatusBarVisualProvider <NSObject>

@property (readonly, nonatomic) BOOL canFixupDisplayItemAttributes;
@property (weak, nonatomic) _UIStatusBar *statusBar;
@property (readonly, nonatomic) _UIStatusBarStyleAttributes *styleAttributes;

+ (struct CGSize)intrinsicContentSizeForOrientation:(long long)arg1;
- (NSArray *)orderedDisplayItemPlacementsInRegionWithIdentifier:(NSString *)arg1;
- (NSArray *)setupInContainerView:(UIView *)arg1;

@optional
- (void)actionable:(id<_UIStatusBarActionable>)arg1 highlighted:(BOOL)arg2 initialPress:(BOOL)arg3;
- (_UIStatusBarAnimation *)additionAnimationForDisplayItemWithIdentifier:(_UIStatusBarIdentifier *)arg1 itemAnimation:(_UIStatusBarAnimation *)arg2;
- (void)avoidanceFrameUpdatedFromFrame:(struct CGRect)arg1;
- (void)dataUpdated:(_UIStatusBarData *)arg1;
- (NSSet *)displayItemIdentifiersForPartWithIdentifier:(NSString *)arg1;
- (void)itemCreated:(_UIStatusBarItem *)arg1;
- (void)modeUpdatedFromMode:(long long)arg1;
- (void)orientationUpdatedFromOrientation:(long long)arg1;
- (_UIStatusBarStyleAttributes *)overriddenStyleAttributesForDisplayItemWithIdentifier:(_UIStatusBarIdentifier *)arg1;
- (NSOrderedSet *)region:(_UIStatusBarRegion *)arg1 willSetDisplayItems:(NSOrderedSet *)arg2;
- (NSSet *)regionIdentifiersForPartWithIdentifier:(NSString *)arg1;
- (_UIStatusBarAnimation *)removalAnimationForDisplayItemWithIdentifier:(_UIStatusBarIdentifier *)arg1 itemAnimation:(_UIStatusBarAnimation *)arg2;
- (void)sizeUpdatedFromSize:(struct CGSize)arg1;
- (void)statusBarRegionsUpdated;
- (void)styleUpdatedFromStyle:(long long)arg1;
- (NSArray *)willUpdateWithData:(_UIStatusBarData *)arg1;
@end

