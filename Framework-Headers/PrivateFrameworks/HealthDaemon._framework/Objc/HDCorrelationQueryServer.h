//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDBatchedQueryServer.h>

@class NSDictionary;

@interface HDCorrelationQueryServer : HDBatchedQueryServer
{
    BOOL _permitPartiallyFilteredCorrelations;
    BOOL _suspended;
    NSDictionary *_dataFilters;
}

@property (readonly, nonatomic) NSDictionary *dataFilters; // @synthesize dataFilters=_dataFilters;

- (void).cxx_destruct;
- (void)_queue_start;
- (BOOL)_queue_validateConfiguration:(id *)arg1;
- (id)initWithQueryUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;
- (id)requiredEntitlements;

@end

