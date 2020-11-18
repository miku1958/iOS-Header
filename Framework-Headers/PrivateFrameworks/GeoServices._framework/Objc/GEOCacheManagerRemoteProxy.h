//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOCacheManaging-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOCacheManagerRemoteProxy : NSObject <GEOCacheManaging>
{
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_refreshMapItems:(id)arg1 updatedCoordinates:(id)arg2 xpcMessageName:(id)arg3 traits:(id)arg4 auditToken:(id)arg5 handler:(CDUnknownBlockType)arg6;
- (void)checkHasExpiredWithInvalidationDatas:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)init;
- (long long)invalidationStateForComponent:(id)arg1;
- (long long)invalidationStateForPlace:(id)arg1;
- (void)refreshLOIAssociatedMapItems:(id)arg1 updatedCoordinates:(id)arg2 traits:(id)arg3 auditToken:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)refreshLOIReverseGeocodedMapItems:(id)arg1 updatedCoordinates:(id)arg2 traits:(id)arg3 auditToken:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)snapshotWithFilePathArray:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)versionsForDomains:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
