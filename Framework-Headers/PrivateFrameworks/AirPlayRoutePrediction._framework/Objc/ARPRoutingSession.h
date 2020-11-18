//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AirPlayRoutePrediction/NSCopying-Protocol.h>
#import <AirPlayRoutePrediction/NSSecureCoding-Protocol.h>

@class NSDateInterval, NSDictionary, NSString;

@interface ARPRoutingSession : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_outputDeviceID;
    NSDictionary *_microLocationProbabilityVector;
    NSDateInterval *_interval;
}

@property (readonly, copy, nonatomic) NSDateInterval *interval; // @synthesize interval=_interval;
@property (readonly, nonatomic) NSDictionary *microLocationProbabilityVector; // @synthesize microLocationProbabilityVector=_microLocationProbabilityVector;
@property (readonly, copy, nonatomic) NSString *outputDeviceID; // @synthesize outputDeviceID=_outputDeviceID;

+ (double)microLocationCorrelationGracePeriod;
+ (double)minimumRoutingEventDuration;
+ (double)routingSessionTimeout;
+ (id)routingSessionsFromNowPlayingEvents:(id)arg1 microLocationEvents:(id)arg2 routingSessionTimeout:(double)arg3;
+ (BOOL)supportsSecureCoding;
+ (void)writeSessions:(id)arg1 routingSessionTimeout:(double)arg2 file:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOutputDeviceID:(id)arg1 interval:(id)arg2 microLocationProbabilityVector:(id)arg3;

@end

