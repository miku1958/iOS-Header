//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIFocusRegionSearchContext-Protocol.h>

@class NSMutableArray, NSString, UIScreen, _UIFocusMapSnapshotOptions;
@protocol _UIFocusMapArea;

__attribute__((visibility("hidden")))
@interface _UIFocusMapSnapshotSearchContext : NSObject <_UIFocusRegionSearchContext>
{
    BOOL _hasResultsContainer;
    BOOL _isSearchingResultsContainer;
    _UIFocusMapSnapshotOptions *_options;
    NSMutableArray *_focusRegionContainers;
    NSMutableArray *_allFocusRegions;
    NSMutableArray *_resultFocusRegions;
}

@property (readonly, nonatomic) NSMutableArray *allFocusRegions; // @synthesize allFocusRegions=_allFocusRegions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableArray *focusRegionContainers; // @synthesize focusRegionContainers=_focusRegionContainers;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) _UIFocusMapSnapshotOptions *options; // @synthesize options=_options;
@property (readonly, nonatomic) NSMutableArray *resultFocusRegions; // @synthesize resultFocusRegions=_resultFocusRegions;
@property (readonly, weak, nonatomic) UIScreen *screen;
@property (readonly, nonatomic) id<_UIFocusMapArea> searchArea;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addRegion:(id)arg1;
- (void)addRegions:(id)arg1;
- (void)addRegionsInContainer:(id)arg1;
- (void)addRegionsInContainers:(id)arg1;
- (void)addRegionsInRootContainer;
- (id)initWithOptions:(id)arg1;

@end

