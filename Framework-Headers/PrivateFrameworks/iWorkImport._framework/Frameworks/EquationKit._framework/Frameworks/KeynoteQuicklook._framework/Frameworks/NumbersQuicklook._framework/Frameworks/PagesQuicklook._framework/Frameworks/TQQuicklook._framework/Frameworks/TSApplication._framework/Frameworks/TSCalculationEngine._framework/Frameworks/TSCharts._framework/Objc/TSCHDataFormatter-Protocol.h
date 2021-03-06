//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/NSObject-Protocol.h>

@class NSString, TSULocale;
@protocol TSCHChartGridValue, TSCHDataFormatter, TSCHDataFormatterPersistableStyleObject, TSCHDataFormatterSupportedClientFormatObject;

@protocol TSCHDataFormatter <NSObject>
- (NSString *)chartFormattedInspectorStringForValue:(id<TSCHChartGridValue>)arg1 locale:(TSULocale *)arg2;
- (NSString *)chartFormattedStringForValue:(id<TSCHChartGridValue>)arg1 locale:(TSULocale *)arg2;
- (id<TSCHDataFormatterPersistableStyleObject>)convertToPersistableStyleObject;
- (id<TSCHDataFormatterSupportedClientFormatObject>)convertToSupportedClientFormatObjectWithLocale:(TSULocale *)arg1;
- (BOOL)isCompatibleWithDataFormatter:(id<TSCHDataFormatter>)arg1;
- (long long)numberOfDecimalPlaces;
@end

