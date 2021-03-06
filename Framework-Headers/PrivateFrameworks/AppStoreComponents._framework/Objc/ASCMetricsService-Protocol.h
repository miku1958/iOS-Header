//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreComponents/NSObject-Protocol.h>

@class ASCLockup, ASCMetricsActivity, ASCMetricsData, ASCSignpostPredicate, NSArray, NSDictionary, NSString;

@protocol ASCMetricsService <NSObject>
- (void)logErrorMessage:(NSArray *)arg1;
- (void)processMetricsData:(ASCMetricsData *)arg1 pageFields:(NSDictionary *)arg2 activity:(ASCMetricsActivity *)arg3 withReplyHandler:(void (^)(NSError *))arg4;
- (void)processViewRenderWithPredicate:(ASCSignpostPredicate *)arg1 withReplyHandler:(void (^)(NSError *))arg2;
- (void)recordCampaignToken:(NSString *)arg1 providerToken:(NSString *)arg2 withLockup:(ASCLockup *)arg3 withReplyHandler:(void (^)(NSError *))arg4;
@end

