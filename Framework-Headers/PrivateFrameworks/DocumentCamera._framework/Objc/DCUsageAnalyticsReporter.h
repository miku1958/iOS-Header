//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DocumentCamera/DCAnalyticsReporterBase.h>

@interface DCUsageAnalyticsReporter : DCAnalyticsReporterBase
{
}

+ (void)clearSharedCollector;
+ (id)sharedReporter;
- (void)incrementCountForKey:(id)arg1;
- (void)incrementCountForKey:(id)arg1 withSignature:(id)arg2;
- (void)logDocCamFilterUsageForFilterType:(short)arg1;

@end
