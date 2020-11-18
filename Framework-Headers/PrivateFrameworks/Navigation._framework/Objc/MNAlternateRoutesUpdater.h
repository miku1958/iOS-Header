//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MNActiveRouteInfo, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MNAlternateRoutesUpdater : NSObject
{
    MNActiveRouteInfo *_mainRoute;
    NSArray *_alternateRoutes;
    NSMutableArray *_trackedAlternateRoutes;
}

@property (readonly, nonatomic) NSArray *alternateRoutes;

- (void).cxx_destruct;
- (id)_findTrackedAlternateRouteMatching:(id)arg1;
- (id)alternateRouteForLocation:(id)arg1;
- (BOOL)setAlternateRoutes:(id)arg1 forMainRoute:(id)arg2;
- (BOOL)updateForLocation:(id)arg1;
- (BOOL)updateForReroute:(id)arg1 rerouteReason:(unsigned long long)arg2;

@end

