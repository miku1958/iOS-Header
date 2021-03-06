//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOApplicationAuditToken, GEOMapServiceTraits, NSArray, NSObject;
@protocol OS_dispatch_queue;

@protocol GEOMapServiceSpatialPlaceLookupTicket <NSObject>

@property (readonly, nonatomic) NSArray *parameters;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;

- (void)cancel;
- (void)submitWithHandler:(void (^)(GEOSpatialPlaceLookupResult *, NSError *))arg1 auditToken:(GEOApplicationAuditToken *)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3;
- (void)submitWithHandler:(void (^)(GEOSpatialPlaceLookupResult *, NSError *))arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
@end

