//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AWDSupportFramework/AWDCoreRoutineLMPAutofillSelectedInstance.h>

#import <coreroutine/RTMetricManagerMetricIdProtocol-Protocol.h>

@class NSString;

@interface AWDCoreRoutineLMPAutofillSelectedInstance (MetricManager) <RTMetricManagerMetricIdProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_init;
- (long long)metricId;
- (void)setEventId:(id)arg1;
- (BOOL)valid:(id *)arg1;
@end

