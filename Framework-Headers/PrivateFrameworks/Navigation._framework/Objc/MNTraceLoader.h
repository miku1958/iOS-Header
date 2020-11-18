//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MNTrace;

__attribute__((visibility("hidden")))
@interface MNTraceLoader : NSObject
{
    MNTrace *_trace;
}

- (void).cxx_destruct;
- (BOOL)_executeQuery:(id)arg1 rowHandler:(CDUnknownBlockType)arg2;
- (BOOL)_loadCompassHeadingDataTable;
- (BOOL)_loadDirectionsTable;
- (BOOL)_loadETAUpdatesTable;
- (BOOL)_loadInfoTable;
- (BOOL)_loadLocationsTable;
- (BOOL)_loadMotionDataTable;
- (BOOL)_loadRouteSelectionsTable;
- (BOOL)_loadTraceVersion;
- (BOOL)_loadVehicleDataTable;
- (BOOL)_updateTraceFromVersion:(unsigned long long)arg1;
- (id)loadTraceWithPath:(id)arg1;

@end

