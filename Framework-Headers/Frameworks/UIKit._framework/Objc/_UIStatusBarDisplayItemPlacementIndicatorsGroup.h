//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarDisplayItemPlacementGroup.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemPlacementIndicatorsGroup : _UIStatusBarDisplayItemPlacementGroup
{
    NSArray *_stablePlacements;
    NSArray *_unstablePlacements;
}

@property (readonly, copy, nonatomic) NSArray *stablePlacements; // @synthesize stablePlacements=_stablePlacements;
@property (readonly, copy, nonatomic) NSArray *unstablePlacements; // @synthesize unstablePlacements=_unstablePlacements;

+ (id)activityItemDisplayIdentifier;
+ (id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2;
- (void).cxx_destruct;

@end

