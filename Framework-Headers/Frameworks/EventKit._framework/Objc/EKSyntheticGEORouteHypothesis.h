//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKit/EKGEORouteHypothesis-Protocol.h>

@class NSDate, NSString;

@interface EKSyntheticGEORouteHypothesis : NSObject <EKGEORouteHypothesis>
{
    BOOL _supportsLiveTraffic;
    int _transportType;
    NSDate *_conservativeDepartureDate;
    double _conservativeTravelTime;
    NSDate *_suggestedDepartureDate;
    double _estimatedTravelTime;
    NSDate *_aggressiveDepartureDate;
    double _aggressiveTravelTime;
    NSString *_routeName;
    unsigned long long _currentTrafficDensity;
    NSString *_trafficDensityDescription;
    long long _travelState;
}

@property (strong, nonatomic) NSDate *aggressiveDepartureDate; // @synthesize aggressiveDepartureDate=_aggressiveDepartureDate;
@property (nonatomic) double aggressiveTravelTime; // @synthesize aggressiveTravelTime=_aggressiveTravelTime;
@property (strong, nonatomic) NSDate *conservativeDepartureDate; // @synthesize conservativeDepartureDate=_conservativeDepartureDate;
@property (nonatomic) double conservativeTravelTime; // @synthesize conservativeTravelTime=_conservativeTravelTime;
@property (nonatomic) unsigned long long currentTrafficDensity; // @synthesize currentTrafficDensity=_currentTrafficDensity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double estimatedTravelTime; // @synthesize estimatedTravelTime=_estimatedTravelTime;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *routeName; // @synthesize routeName=_routeName;
@property (strong, nonatomic) NSDate *suggestedDepartureDate; // @synthesize suggestedDepartureDate=_suggestedDepartureDate;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsLiveTraffic; // @synthesize supportsLiveTraffic=_supportsLiveTraffic;
@property (strong, nonatomic) NSString *trafficDensityDescription; // @synthesize trafficDensityDescription=_trafficDensityDescription;
@property (nonatomic) int transportType; // @synthesize transportType=_transportType;
@property (nonatomic) long long travelState; // @synthesize travelState=_travelState;

- (void).cxx_destruct;
- (id)initWithStartDate:(id)arg1 conservativeTravelTime:(double)arg2 estimatedTravelTime:(double)arg3 aggressiveTravelTime:(double)arg4;

@end

