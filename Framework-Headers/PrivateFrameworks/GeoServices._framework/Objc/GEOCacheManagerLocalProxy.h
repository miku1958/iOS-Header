//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/GEOCacheManaging-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOCacheManagerLocalProxy : NSObject <GEOCacheManaging>
{
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_asyncPlaceDataRequest:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (long long)_invalidationDataHasExpired:(id)arg1;
- (BOOL)_invalidationDataHasExpiredByVersion:(unsigned int)arg1 domains:(id)arg2;
- (long long)_invalidationStateForTTL:(double)arg1 timestamp:(double)arg2 version:(unsigned int)arg3 versionDomains:(id)arg4;
- (BOOL)_isKey:(id)arg1 subsetOf:(id)arg2;
- (id)_syncPlaceDataRequest:(id)arg1 traits:(id)arg2 auditToken:(id)arg3;
- (id)_syncedPlaceRefineMapItem:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 traits:(id)arg3 auditToken:(id)arg4;
- (id)_syncedRevGeoCoordinate:(CDStruct_c3b9c2ee)arg1 traits:(id)arg2 auditToken:(id)arg3;
- (void)checkHasExpiredWithInvalidationDatas:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;
- (long long)invalidationStateForComponent:(id)arg1;
- (long long)invalidationStateForPlace:(id)arg1;
- (void)refreshLOIAssociatedMapItems:(id)arg1 updatedCoordinates:(id)arg2 traits:(id)arg3 auditToken:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)refreshLOIReverseGeocodedMapItems:(id)arg1 updatedCoordinates:(id)arg2 traits:(id)arg3 auditToken:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)snapshotWithFilePathArray:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)versionsForDomains:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

