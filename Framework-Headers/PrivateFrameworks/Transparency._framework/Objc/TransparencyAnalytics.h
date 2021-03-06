//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TransparencySFAnalytics;

@interface TransparencyAnalytics : NSObject
{
    TransparencySFAnalytics *_sfanalytics;
}

@property (strong) TransparencySFAnalytics *sfanalytics; // @synthesize sfanalytics=_sfanalytics;

+ (unsigned long long)doKTResultWithAnalyticsForEventName:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
+ (BOOL)doWithAnalyticsForEventName:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
+ (id)formatEventName:(id)arg1 application:(id)arg2;
+ (BOOL)hasInternalDiagnostics;
+ (id)logger;
- (void).cxx_destruct;
- (void)addMultiSamplerForName:(id)arg1 withTimeInterval:(double)arg2 block:(CDUnknownBlockType)arg3;
- (void)logHardFailureForEventNamed:(id)arg1 withAttributes:(id)arg2;
- (void)logMetric:(id)arg1 withName:(id)arg2;
- (void)logResultForEvent:(id)arg1 hardFailure:(BOOL)arg2 result:(id)arg3;
- (void)logResultForEvent:(id)arg1 hardFailure:(BOOL)arg2 result:(id)arg3 withAttributes:(id)arg4;
- (void)logSoftFailureForEventNamed:(id)arg1 withAttributes:(id)arg2;
- (void)logSuccessForEventNamed:(id)arg1;
- (void)noteEventNamed:(id)arg1;
- (void)removeMultiSamplerForName:(id)arg1;

@end

