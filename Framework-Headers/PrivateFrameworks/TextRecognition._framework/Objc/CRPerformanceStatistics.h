//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface CRPerformanceStatistics : NSObject
{
    BOOL _measureRecentPeak;
    NSString *_name;
    NSDictionary *_metrics;
}

@property (readonly) BOOL measureRecentPeak; // @synthesize measureRecentPeak=_measureRecentPeak;
@property (strong) NSDictionary *metrics; // @synthesize metrics=_metrics;
@property (strong) NSString *name; // @synthesize name=_name;

+ (BOOL)_canEnableRecentPeakReset;
- (void).cxx_destruct;
- (void)_addMetricWithKey:(id)arg1 name:(id)arg2 unit:(id)arg3 denominator:(double)arg4 pcMetricID:(unsigned long long)arg5;
- (void)_evaluateEndedSession:(struct pc_session *)arg1 duration:(double)arg2;
- (void)addStatistics:(id)arg1;
- (id)description;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 measureRecentPeak:(BOOL)arg2;
- (id)initWithStatistics:(id)arg1;
- (void)measureBlock:(CDUnknownBlockType)arg1;

@end
