//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class NSArray, UIScreen, _UIFocusMapSnapshotDebugInfo, _UIFocusedItemRegion;
@protocol _UIFocusMapArea;

__attribute__((visibility("hidden")))
@interface _UIFocusMapSnapshot : NSObject <NSCopying>
{
    UIScreen *_screen;
    id<_UIFocusMapArea> _searchArea;
    _UIFocusedItemRegion *_focusedRegion;
    NSArray *_regionContainers;
    NSArray *_rawFocusRegions;
    NSArray *_rawOccludedFocusRegions;
    NSArray *_focusRegions;
}

@property (readonly, nonatomic, getter=_debugInfo) _UIFocusMapSnapshotDebugInfo *debugInfo;
@property (copy, nonatomic) NSArray *focusRegions; // @synthesize focusRegions=_focusRegions;
@property (copy, nonatomic) _UIFocusedItemRegion *focusedRegion; // @synthesize focusedRegion=_focusedRegion;
@property (copy, nonatomic) NSArray *rawFocusRegions; // @synthesize rawFocusRegions=_rawFocusRegions;
@property (copy, nonatomic) NSArray *rawOccludedFocusRegions; // @synthesize rawOccludedFocusRegions=_rawOccludedFocusRegions;
@property (copy, nonatomic) NSArray *regionContainers; // @synthesize regionContainers=_regionContainers;
@property (weak, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
@property (strong, nonatomic) id<_UIFocusMapArea> searchArea; // @synthesize searchArea=_searchArea;

- (void).cxx_destruct;
- (id)_debugInfoWithFocusMapSearchInfo:(id)arg1;
- (id)_initWithSearchArea:(id)arg1 inScreen:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugQuickLookObject;
- (id)filteredFocusRegionsUsingBlock:(CDUnknownBlockType)arg1;

@end
