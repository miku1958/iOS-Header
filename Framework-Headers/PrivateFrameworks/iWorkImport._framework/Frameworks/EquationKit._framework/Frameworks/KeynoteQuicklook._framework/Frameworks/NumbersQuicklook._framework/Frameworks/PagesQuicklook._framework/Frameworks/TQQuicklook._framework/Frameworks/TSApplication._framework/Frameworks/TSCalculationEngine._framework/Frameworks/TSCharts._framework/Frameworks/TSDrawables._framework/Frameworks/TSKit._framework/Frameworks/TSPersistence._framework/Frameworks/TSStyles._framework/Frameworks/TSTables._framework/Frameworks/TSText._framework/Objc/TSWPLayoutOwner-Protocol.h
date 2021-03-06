//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSText/NSObject-Protocol.h>

@class NSObject, TSUColor, TSULocale, TSWPLayoutManager, TSWPLayoutMetricsCache, TSWPStorage;
@protocol TSWPLayoutTarget, TSWPOffscreenColumn, TSWPStyleProvider, TSWPTextWrap, TSWPTopicNumberHints;

@protocol TSWPLayoutOwner <NSObject>
- (BOOL)caresAboutStorageChanges;
- (void)didLayoutChangingDirtyRanges;
- (void)layoutManager:(TSWPLayoutManager *)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(unsigned long long)arg3;
- (void)layoutManagerNeedsLayout:(TSWPLayoutManager *)arg1;
- (id<TSWPTextWrap>)textWrapper;

@optional
- (void)didLayoutWithLayoutManager:(TSWPLayoutManager *)arg1;
- (BOOL)forceWesternLineBreaking;
- (TSULocale *)locale;
- (TSWPLayoutMetricsCache *)metricsCacheForStorage:(TSWPStorage *)arg1;
- (NSObject<TSWPOffscreenColumn> *)nextTargetFirstColumnForTarget:(id<TSWPLayoutTarget>)arg1;
- (NSObject<TSWPTopicNumberHints> *)nextTargetTopicNumbersForTarget:(id<TSWPLayoutTarget>)arg1;
- (NSObject<TSWPOffscreenColumn> *)previousTargetLastColumnForTarget:(id<TSWPLayoutTarget>)arg1;
- (NSObject<TSWPTopicNumberHints> *)previousTargetTopicNumbersForTarget:(id<TSWPLayoutTarget>)arg1;
- (id<TSWPStyleProvider>)styleProvider;
- (TSUColor *)textColorOverride;
@end

