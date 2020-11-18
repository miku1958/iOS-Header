//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIStatusBarVisualProvider-Protocol.h>

@class NSArray, NSString, _UIStatusBar, _UIStatusBarAnimation, _UIStatusBarDisplayItemPlacementGroup, _UIStatusBarDisplayItemPlacementNetworkGroup;

@interface _UIStatusBarVisualProvider_iOS : NSObject <_UIStatusBarVisualProvider>
{
    BOOL _expanded;
    _UIStatusBar *_statusBar;
    _UIStatusBarDisplayItemPlacementNetworkGroup *_expandedNetworkGroup;
    NSArray *_expandedCellularPlacementsAffectedByAirplaneMode;
    NSArray *_expandedLeadingPlacements;
    NSArray *_expandedTrailingPlacements;
    _UIStatusBarDisplayItemPlacementGroup *_secondaryWifiGroup;
}

@property (readonly, nonatomic) double airplaneObstacleFadeInDuration;
@property (readonly, nonatomic) double airplaneObstacleFadeOutDuration;
@property (readonly, nonatomic) _UIStatusBarAnimation *animationForAirplaneMode;
@property (readonly, nonatomic) BOOL canFixupDisplayItemAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL expanded; // @synthesize expanded=_expanded;
@property (readonly, nonatomic) NSArray *expandedCellularPlacementsAffectedByAirplaneMode; // @synthesize expandedCellularPlacementsAffectedByAirplaneMode=_expandedCellularPlacementsAffectedByAirplaneMode;
@property (readonly, nonatomic) NSArray *expandedLeadingPlacements; // @synthesize expandedLeadingPlacements=_expandedLeadingPlacements;
@property (readonly, nonatomic) _UIStatusBarDisplayItemPlacementNetworkGroup *expandedNetworkGroup; // @synthesize expandedNetworkGroup=_expandedNetworkGroup;
@property (readonly, nonatomic) NSArray *expandedTrailingPlacements; // @synthesize expandedTrailingPlacements=_expandedTrailingPlacements;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _UIStatusBarDisplayItemPlacementGroup *secondaryWifiGroup; // @synthesize secondaryWifiGroup=_secondaryWifiGroup;
@property (weak, nonatomic) _UIStatusBar *statusBar; // @synthesize statusBar=_statusBar;
@property (readonly) Class superclass;

+ (double)bluetoothPaddingInset;
+ (double)cornerRadius;
+ (double)expandedItemSpacing;
+ (BOOL)hasCellularCapability;
+ (double)height;
+ (struct CGSize)intrinsicContentSizeForOrientation:(long long)arg1;
+ (double)itemSpacing;
+ (double)regionSpacing;
+ (Class)visualProviderSubclassForScreen:(id)arg1;
+ (BOOL)wantsExpandedLeadingPlacements;
- (void).cxx_destruct;
- (void)_applyToAppearingRegions:(BOOL)arg1 block:(CDUnknownBlockType)arg2;
- (void)_createExpandedPlacements;
- (void)actionable:(id)arg1 highlighted:(BOOL)arg2 initialPress:(BOOL)arg3;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (double)airplaneShouldFadeForAnimationType:(long long)arg1;
- (double)airplaneSpeedForAnimationType:(long long)arg1;
- (double)airplaneTravelOffsetInProposedPartWithIdentifier:(id *)arg1 animationType:(long long)arg2;
- (id)defaultAnimationForDisplayItemWithIdentifier:(id)arg1;
- (id)displayItemIdentifiersForPartWithIdentifier:(id)arg1;
- (id)init;
- (void)modeUpdatedFromMode:(long long)arg1;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (id)setupInContainerView:(id)arg1;
- (id)styleAttributesForStyle:(long long)arg1;
- (void)updateDataForService:(id)arg1;
- (void)updateDataForSystemNavigation:(id)arg1;
- (id)willUpdateWithData:(id)arg1;

@end
