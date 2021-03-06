//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarDisplayItemPlacementGroup.h>

@class _UIStatusBarDisplayItemPlacementCellularGroup, _UIStatusBarDisplayItemPlacementWifiGroup;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemPlacementNetworkGroup : _UIStatusBarDisplayItemPlacementGroup
{
    _UIStatusBarDisplayItemPlacementCellularGroup *_cellularGroup;
    _UIStatusBarDisplayItemPlacementWifiGroup *_wifiGroup;
}

@property (readonly, nonatomic) _UIStatusBarDisplayItemPlacementCellularGroup *cellularGroup; // @synthesize cellularGroup=_cellularGroup;
@property (readonly, nonatomic) _UIStatusBarDisplayItemPlacementWifiGroup *wifiGroup; // @synthesize wifiGroup=_wifiGroup;

+ (id)_groupWithCellularGroup:(id)arg1 wifiGroup:(id)arg2 includeCellularName:(BOOL)arg3;
+ (id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 cellularItemClass:(Class)arg3 wifiItemClass:(Class)arg4 cellularTypeClass:(Class)arg5 includeCellularName:(BOOL)arg6 allowDualNetwork:(BOOL)arg7;
+ (id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 cellularItemClass:(Class)arg3 wifiItemClass:(Class)arg4 includeCellularName:(BOOL)arg5;
+ (id)secondaryGroupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 cellularItemClass:(Class)arg3 wifiItemClass:(Class)arg4;
- (void).cxx_destruct;

@end

