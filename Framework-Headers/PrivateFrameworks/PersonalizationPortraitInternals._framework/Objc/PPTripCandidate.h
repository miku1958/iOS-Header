//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PPTripCandidate : NSObject
{
    NSArray *_flights;
    NSArray *_hotels;
    NSArray *_others;
}

@property (strong, nonatomic) NSArray *flights; // @synthesize flights=_flights;
@property (strong, nonatomic) NSArray *hotels; // @synthesize hotels=_hotels;
@property (strong, nonatomic) NSArray *others; // @synthesize others=_others;

- (void).cxx_destruct;
- (id)allEvents;
- (BOOL)canBeMergedWithTripCandidate:(id)arg1;
- (struct _NSRange)eventsTimeRange;
- (id)initWithTripCandidateA:(id)arg1 andTripCandidateB:(id)arg2;
- (unsigned char)modeForEventCategory:(unsigned char)arg1;
- (id)partFromEvents:(id)arg1 tripMode:(unsigned char)arg2 takingLocationFromEvent:(id)arg3;
- (id)partFromEvents:(id)arg1 tripMode:(unsigned char)arg2 takingLocationFromEvent:(id)arg3 overradingStartDate:(id)arg4 endDate:(id)arg5;
- (id)reverseGeocodedLocation:(id)arg1;
- (BOOL)shouldPromoteToTripEvent;
- (double)timeIntervalBetweenEvent:(id)arg1 andEvent:(id)arg2;
- (id)tripEventFromCandidate;

@end
