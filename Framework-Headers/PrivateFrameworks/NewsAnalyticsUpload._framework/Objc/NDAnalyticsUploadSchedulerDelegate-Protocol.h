//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsAnalyticsUpload/NSObject-Protocol.h>

@class NDAnalyticsUploadScheduler;

@protocol NDAnalyticsUploadSchedulerDelegate <NSObject>
- (void)uploadScheduler:(NDAnalyticsUploadScheduler *)arg1 performUploadWithCompletion:(void (^)(void))arg2;
- (void)uploadSchedulerDidDropScheduledBackgroundUpload:(NDAnalyticsUploadScheduler *)arg1;
@end

