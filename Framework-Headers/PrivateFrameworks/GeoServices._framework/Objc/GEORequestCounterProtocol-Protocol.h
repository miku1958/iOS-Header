//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSDate, NSString;
@protocol GEORequestCounterTicket;

@protocol GEORequestCounterProtocol <NSObject>

@property (nonatomic) BOOL countersEnabled;

- (void)clearCounters;
- (void)fetchTrafficProbeCollectionsStartingFrom:(NSDate *)arg1 withCompletion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)readRequestLogsSince:(NSDate *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (void)readRequestsPerAppSince:(NSDate *)arg1 handler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)recordTrafficProbeCollectionAt:(NSDate *)arg1 tripId:(NSString *)arg2 locationCount:(int)arg3 result:(unsigned char)arg4;
- (id<GEORequestCounterTicket>)requestCounterTicketForType:(unsigned char)arg1 appId:(NSString *)arg2;
- (void)startPowerLogSessionWithName:(NSString *)arg1;
@end

