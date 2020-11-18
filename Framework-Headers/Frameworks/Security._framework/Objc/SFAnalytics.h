//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SFAnalyticsSQLiteStore;
@protocol OS_dispatch_queue;

@interface SFAnalytics : NSObject
{
    SFAnalyticsSQLiteStore *_database;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_samplers;
    NSMutableDictionary *_multisamplers;
    unsigned int _disableLogging:1;
}

@property (strong, nonatomic) SFAnalyticsSQLiteStore *database; // @synthesize database=_database;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

+ (void)addOSVersionToEvent:(id)arg1;
+ (id)databasePath;
+ (id)defaultAnalyticsDatabasePath:(id)arg1;
+ (long long)fuzzyDaysSinceDate:(id)arg1;
+ (id)logger;
- (void).cxx_destruct;
- (id)AddMultiSamplerForName:(id)arg1 withTimeInterval:(double)arg2 block:(CDUnknownBlockType)arg3;
- (id)addMetricSamplerForName:(id)arg1 withTimeInterval:(double)arg2 block:(CDUnknownBlockType)arg3;
- (id)datePropertyForKey:(id)arg1;
- (id)eventDictForEventName:(id)arg1 withAttributes:(id)arg2 eventClass:(long long)arg3;
- (id)existingMetricSamplerForName:(id)arg1;
- (id)existingMultiSamplerForName:(id)arg1;
- (id)init;
- (void)logEventNamed:(id)arg1 class:(long long)arg2 attributes:(id)arg3;
- (void)logHardFailureForEventNamed:(id)arg1 withAttributes:(id)arg2;
- (void)logMetric:(id)arg1 withName:(id)arg2;
- (void)logMetric:(id)arg1 withName:(id)arg2 oncePerReport:(BOOL)arg3;
- (void)logResultForEvent:(id)arg1 hardFailure:(BOOL)arg2 result:(id)arg3;
- (void)logSoftFailureForEventNamed:(id)arg1 withAttributes:(id)arg2;
- (void)logSuccessForEventNamed:(id)arg1;
- (id)logSystemMetricsForActivityNamed:(id)arg1 withAction:(CDUnknownBlockType)arg2;
- (void)noteEventNamed:(id)arg1;
- (void)removeMetricSamplerForName:(id)arg1;
- (void)removeMultiSamplerForName:(id)arg1;
- (void)removeState;
- (void)setDateProperty:(id)arg1 forKey:(id)arg2;

@end

