//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKUnitTestingTaskServerInterface-Protocol.h>

@class HKCodableQuantitySeries, NSDictionary;

@protocol HKQuantitySeriesSampleBuilderTaskServerInterface <HKUnitTestingTaskServerInterface>
- (void)remote_discardWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)remote_finishSeriesWithMetadata:(NSDictionary *)arg1 finalSeries:(HKCodableQuantitySeries *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)remote_insertQuantitySeries:(HKCodableQuantitySeries *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
@end

