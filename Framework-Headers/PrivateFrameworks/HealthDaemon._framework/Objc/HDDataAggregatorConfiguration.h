//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDDataAggregatorConfiguration : NSObject <NSCopying>
{
    BOOL _hasActiveWorkout;
    BOOL _hasForegroundObserver;
    double _collectionLatency;
    double _aggregationInterval;
    double _maximumSeriesDuration;
}

@property (readonly, nonatomic) double aggregationInterval; // @synthesize aggregationInterval=_aggregationInterval;
@property (readonly, nonatomic) double collectionLatency; // @synthesize collectionLatency=_collectionLatency;
@property (readonly, nonatomic) BOOL hasActiveWorkout; // @synthesize hasActiveWorkout=_hasActiveWorkout;
@property (nonatomic) BOOL hasForegroundObserver; // @synthesize hasForegroundObserver=_hasForegroundObserver;
@property (readonly, nonatomic) double maximumSeriesDuration; // @synthesize maximumSeriesDuration=_maximumSeriesDuration;

+ (id)configurationWithLatency:(double)arg1 interval:(double)arg2 seriesDuration:(double)arg3 activeWorkout:(BOOL)arg4 foregroundObserver:(BOOL)arg5;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithLatency:(double)arg1 interval:(double)arg2 seriesDuration:(double)arg3 activeWorkout:(BOOL)arg4 foregroundObserver:(BOOL)arg5;
- (BOOL)isEqual:(id)arg1;

@end

