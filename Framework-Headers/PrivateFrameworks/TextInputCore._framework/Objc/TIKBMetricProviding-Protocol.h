//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/TIMetricProviding-Protocol.h>

@class NSArray, NSObject, NSString, TIAnalyticsMetricsContext, TIMetricDescriptorRegistry;

@protocol TIKBMetricProviding <TIMetricProviding>
- (NSObject *)valueForMetricWithName:(NSString *)arg1 withContext:(TIAnalyticsMetricsContext *)arg2 fromRegistry:(TIMetricDescriptorRegistry *)arg3;
- (NSArray *)valuesByBucketedWordLengthForMetricWithName:(NSString *)arg1 withContext:(TIAnalyticsMetricsContext *)arg2 fromRegistry:(TIMetricDescriptorRegistry *)arg3;
@end
