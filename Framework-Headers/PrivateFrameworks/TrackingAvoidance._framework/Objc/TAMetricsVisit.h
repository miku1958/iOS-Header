//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TrackingAvoidance/TAMetricsProtocol-Protocol.h>

@class NSData, NSDateInterval, NSNumber, NSString, TASPAdvertisement;

@interface TAMetricsVisit : NSObject <TAMetricsProtocol>
{
    NSData *_address;
    unsigned long long _totalVisitCount;
    unsigned long long _totalDistinctVisitCount;
    unsigned long long _consecutiveVisitCount;
    unsigned long long _consecutiveAndDistinctFromPrevVisitCount;
    double _durationOfVisitEntryConsideration;
    double _durationOfVisitExitConsideration;
    NSDateInterval *_visitEntryDelay;
    NSDateInterval *_visitExitDelay;
    double _latitude;
    double _longitude;
    NSNumber *_distanceToPreviousSeenVisit;
    TASPAdvertisement *_latestAdvertisement;
}

@property (readonly, nonatomic) NSData *address; // @synthesize address=_address;
@property (readonly, nonatomic) unsigned long long consecutiveAndDistinctFromPrevVisitCount; // @synthesize consecutiveAndDistinctFromPrevVisitCount=_consecutiveAndDistinctFromPrevVisitCount;
@property (readonly, nonatomic) unsigned long long consecutiveVisitCount; // @synthesize consecutiveVisitCount=_consecutiveVisitCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSNumber *distanceToPreviousSeenVisit; // @synthesize distanceToPreviousSeenVisit=_distanceToPreviousSeenVisit;
@property (readonly, nonatomic) double durationOfVisitEntryConsideration; // @synthesize durationOfVisitEntryConsideration=_durationOfVisitEntryConsideration;
@property (readonly, nonatomic) double durationOfVisitExitConsideration; // @synthesize durationOfVisitExitConsideration=_durationOfVisitExitConsideration;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) TASPAdvertisement *latestAdvertisement; // @synthesize latestAdvertisement=_latestAdvertisement;
@property (readonly, nonatomic) double latitude; // @synthesize latitude=_latitude;
@property (readonly, nonatomic) double longitude; // @synthesize longitude=_longitude;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long totalDistinctVisitCount; // @synthesize totalDistinctVisitCount=_totalDistinctVisitCount;
@property (readonly, nonatomic) unsigned long long totalVisitCount; // @synthesize totalVisitCount=_totalVisitCount;
@property (readonly, nonatomic) NSDateInterval *visitEntryDelay; // @synthesize visitEntryDelay=_visitEntryDelay;
@property (readonly, nonatomic) NSDateInterval *visitExitDelay; // @synthesize visitExitDelay=_visitExitDelay;

- (void).cxx_destruct;
- (id)descriptionDictionary;
- (unsigned long long)getMetricsCollectionType;
- (id)initWithSnapshotHistory:(id)arg1 andAddress:(id)arg2 andVisitFilterSettings:(id)arg3;

@end
