//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface GEORouteHypothesizerAnalyticsStore : NSObject <NSSecureCoding>
{
    double _observedEarlyDeltaFromRequiredTimeToLeave;
    double _observedLateDeltaFromRequiredTimeToLeave;
    unsigned long long _hypothesizerRerouteCount;
    unsigned long long _etaUpdatesAfterEventStart;
    BOOL _etaUpdatesWereReported;
    unsigned long long _hypothesisCount;
    BOOL _stopped;
    unsigned long long _uiNotificationType;
    NSDate *_lastGenerationDate;
}

@property (nonatomic) unsigned long long etaUpdatesAfterEventStart; // @synthesize etaUpdatesAfterEventStart=_etaUpdatesAfterEventStart;
@property (nonatomic) BOOL etaUpdatesWereReported; // @synthesize etaUpdatesWereReported=_etaUpdatesWereReported;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didArriveWithExpectedArrivalTime:(id)arg1;
- (void)didGenerateHypothesis;
- (void)didReroute;
- (void)didShowUI:(unsigned long long)arg1;
- (void)didStartMovingWithExpectedDepartureTime:(id)arg1;
- (void)didStopHypothesizing;
- (void)didStopMoving;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

