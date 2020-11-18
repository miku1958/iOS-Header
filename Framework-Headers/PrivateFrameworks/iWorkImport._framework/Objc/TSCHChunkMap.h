//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCHChunkMap : NSObject
{
    unsigned long long mChunkStyle;
    unsigned long long *mSeriesMap;
    unsigned long long *mValuesMap;
    unsigned long long mChunkMapCount;
}

@property (readonly, nonatomic) unsigned long long count; // @synthesize count=mChunkMapCount;

- (void)dealloc;
- (id)initWithChart:(id)arg1 chunkStyle:(unsigned long long)arg2;
- (BOOL)p_canAddChunkForSeries:(id)arg1 valueIndex:(long long)arg2;
- (void)p_setupCacheForElementsInSeriesWithModel:(id)arg1;
- (void)p_setupCacheForElementsInSetsWithModel:(id)arg1;
- (void)p_setupCacheForSeriesWithModel:(id)arg1;
- (void)p_setupCacheForSetsWithModel:(id)arg1;
- (unsigned long long)seriesIndexAtIndex:(unsigned long long)arg1;
- (unsigned long long)valueIndexAtIndex:(unsigned long long)arg1;

@end

