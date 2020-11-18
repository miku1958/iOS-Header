//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOApplicationAuditToken, GEOLatLng, NSCache, NSObject;
@protocol OS_dispatch_queue;

@protocol _GEOLocationShifterProxy <NSObject>

@property (readonly, nonatomic) NSCache *memoryCache;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)flushDiskCache;
- (BOOL)isLocationShiftEnabled;
- (BOOL)isLocationShiftRequiredForCoordinate:(CDStruct_c3b9c2ee)arg1;
- (unsigned int)locationShiftFunctionVersion;
- (void)shiftLatLng:(GEOLatLng *)arg1 auditToken:(GEOApplicationAuditToken *)arg2 completionHandler:(void (^)(GEOLocationShiftFunctionResponse *, NSError *))arg3;
@end
