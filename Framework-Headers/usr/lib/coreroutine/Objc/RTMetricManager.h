//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AWDServerConnection, NSArray, RTManagedConfiguration, RTPlatform, RTXPCActivityManager;
@protocol OS_dispatch_queue;

@interface RTMetricManager : NSObject
{
    RTPlatform *_platform;
    NSArray *_configuredMetricClasses;
    AWDServerConnection *_awdServerConnection;
    RTManagedConfiguration *_managedConfigurationManager;
    NSObject<OS_dispatch_queue> *_queue;
    RTXPCActivityManager *_xpcActivityManager;
}

@property (strong, nonatomic) AWDServerConnection *awdServerConnection; // @synthesize awdServerConnection=_awdServerConnection;
@property (strong, nonatomic) NSArray *configuredMetricClasses; // @synthesize configuredMetricClasses=_configuredMetricClasses;
@property (strong, nonatomic) RTManagedConfiguration *managedConfigurationManager; // @synthesize managedConfigurationManager=_managedConfigurationManager;
@property (strong, nonatomic) RTPlatform *platform; // @synthesize platform=_platform;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) RTXPCActivityManager *xpcActivityManager; // @synthesize xpcActivityManager=_xpcActivityManager;

+ (int)doubleToInt:(double)arg1 shifts:(int)arg2;
+ (double)doubleWithSignificantDigits:(double)arg1 digits:(int)arg2;
+ (int)intWithSignificantDigits:(int)arg1 digits:(int)arg2;
+ (id)metricForType:(unsigned long long)arg1;
+ (id)productionMetrics;
+ (int)roundTimeInterval:(double)arg1 byIntervalUnit:(unsigned long long)arg2;
- (void).cxx_destruct;
- (void)_fetchDiagnosticsEnabled:(CDUnknownBlockType)arg1;
- (void)_registerQueriableMetric:(unsigned long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_releaseMetricPlaceholderForMetric:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (BOOL)_routineConfiguredForMetric:(id)arg1;
- (void)_submitMetric:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)createMetricForType:(unsigned long long)arg1;
- (void)fetchDiagnosticsEnabled:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithAWDServerConnection:(id)arg1 configuredClasses:(id)arg2 managedConfigurationManager:(id)arg3 platform:(id)arg4 xpcActivityManager:(id)arg5;
- (id)initWithPlatform:(id)arg1 xpcActivityManager:(id)arg2;
- (void)registerForXPCActivities:(id)arg1;
- (void)registerQueriableMetric:(unsigned long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (BOOL)setupWithConfiguredClasses:(id)arg1 platform:(id)arg2 error:(id *)arg3;
- (void)shutdown;
- (void)submitMetric:(id)arg1;
- (void)submitMetric:(id)arg1 withHandler:(CDUnknownBlockType)arg2;

@end
