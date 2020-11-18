//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/NSObject-Protocol.h>

@class CLCircularRegion, NSArray, NSNumber, NSObject;
@protocol CLSQueryPerformerProtocol, OS_os_log;

@protocol CLSQueryPerformerProtocol <NSObject>

@property (readonly, nonatomic) BOOL isCancelled;
@property (nonatomic) NSObject<OS_os_log> *loggingConnection;
@property (nonatomic) double precision;
@property (nonatomic) CDStruct_95c2efd7 statistics;

+ (double)defaultPrecision;
+ (unsigned long long)numberOfRegionsPerBatch;
+ (id)queryWithTemplate:(id<CLSQueryPerformerProtocol>)arg1 forRegions:(NSArray *)arg2;
- (unsigned long long)cacheItems:(NSArray *)arg1;
- (void)cancel;
- (void)logGeoLookupCounterAndDurationWithLookupDuration:(NSNumber *)arg1;
- (void)logGeoLookupFailureResult;
- (NSArray *)regions;
- (BOOL)shouldQueryItemsForRegion:(CLCircularRegion *)arg1 selectedRegions:(NSArray *)arg2;
- (void)submitWithHandler:(void (^)(NSArray *, NSError *))arg1;
@end
