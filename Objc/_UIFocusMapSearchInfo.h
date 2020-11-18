//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, _UIFocusSearchInfo;

__attribute__((visibility("hidden")))
@interface _UIFocusMapSearchInfo : NSObject
{
    BOOL _didFindFocusBlockingBoundary;
    NSMutableArray *_mutableSnapshots;
    NSMutableArray *_mutableDestinationRegions;
    _UIFocusSearchInfo *_searchInfo;
}

@property (readonly, copy, nonatomic) NSArray *destinationRegions;
@property (nonatomic) BOOL didFindFocusBlockingBoundary; // @synthesize didFindFocusBlockingBoundary=_didFindFocusBlockingBoundary;
@property (strong, nonatomic) NSMutableArray *mutableDestinationRegions; // @synthesize mutableDestinationRegions=_mutableDestinationRegions;
@property (strong, nonatomic) NSMutableArray *mutableSnapshots; // @synthesize mutableSnapshots=_mutableSnapshots;
@property (strong, nonatomic) _UIFocusSearchInfo *searchInfo; // @synthesize searchInfo=_searchInfo;
@property (readonly, copy, nonatomic) NSArray *snapshots;

- (void).cxx_destruct;
- (void)addDestinationRegion:(id)arg1;
- (void)addSnapshot:(id)arg1;
- (id)init;

@end

