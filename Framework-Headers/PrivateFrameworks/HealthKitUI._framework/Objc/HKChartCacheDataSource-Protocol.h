//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKitUI/NSObject-Protocol.h>

@class HKChartCacheFetchOperation;
@protocol NSCopying;

@protocol HKChartCacheDataSource <NSObject>
- (HKChartCacheFetchOperation *)operationForIdentifier:(id<NSCopying>)arg1 completion:(void (^)(HKChartCacheFetchOperation *, id, NSError *))arg2;
@end

