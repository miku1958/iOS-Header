//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

@class HKMCDaySummaryQueryConfiguration;

@interface HDMCDaySummaryQueryServer : HDQueryServer
{
    HKMCDaySummaryQueryConfiguration *_configuration;
}

+ (Class)queryClass;
+ (id)requiredEntitlements;
+ (BOOL)validateConfiguration:(id)arg1 client:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (void)_queue_start;
- (BOOL)_queue_surfaceDaySummariesWithError:(id *)arg1;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)objectTypes;

@end

