//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/CLSQueryPerformerProtocol-Protocol.h>

@class NSArray, NSString;
@protocol GEOMapServiceTicket, OS_os_log;

@interface CLSLocationQueryPerformer : NSObject <CLSQueryPerformerProtocol>
{
    BOOL _isCancelled;
    NSArray *_geoLocations;
    id<GEOMapServiceTicket> _ticket;
    NSArray *_regions;
    double _precision;
    NSObject<OS_os_log> *_loggingConnection;
    CDStruct_95c2efd7 _statistics;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *geoLocations; // @synthesize geoLocations=_geoLocations;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property (nonatomic) NSObject<OS_os_log> *loggingConnection; // @synthesize loggingConnection=_loggingConnection;
@property (nonatomic) double precision; // @synthesize precision=_precision;
@property (readonly, copy, nonatomic) NSArray *regions; // @synthesize regions=_regions;
@property (nonatomic) CDStruct_95c2efd7 statistics; // @synthesize statistics=_statistics;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<GEOMapServiceTicket> ticket; // @synthesize ticket=_ticket;

+ (double)defaultPrecision;
+ (unsigned long long)numberOfRegionsPerBatch;
+ (id)queryWithTemplate:(id)arg1 forRegions:(id)arg2;
- (void).cxx_destruct;
- (unsigned long long)cacheItems:(id)arg1;
- (void)cancel;
- (id)init;
- (id)initWithRegions:(id)arg1 precision:(double)arg2;
- (void)logGeoLookupCounterAndDurationWithLookupDuration:(id)arg1;
- (void)logGeoLookupFailureResult;
- (BOOL)shouldQueryItemsForRegion:(id)arg1 selectedRegions:(id)arg2;
- (void)submitWithHandler:(CDUnknownBlockType)arg1;

@end

