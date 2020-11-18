//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _PASLock;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PPEventCache : NSObject
{
    CDUnknownBlockType _backfiller;
    _PASLock *_data;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    unsigned long long _memoryPressureStatus;
}

- (void).cxx_destruct;
- (void)_handleMemoryPressureStatus;
- (id)cachedEventHighlightForEKEvent:(id)arg1 rankingOptions:(int)arg2;
- (void)evictAllEventsNotInRange:(struct _NSRange)arg1;
- (void)evictAllEventsNotInRanges:(id)arg1;
- (id)evictEventWithIdentifier:(id)arg1;
- (id)initWithBackfiller:(CDUnknownBlockType)arg1;
- (id)objectForRange:(struct _NSRange)arg1;
- (void)refreshCachedEvent:(id)arg1;
- (void)removeAllObjects;
- (void)setEventHighlight:(id)arg1;
- (void)setExtraSecondsToBackfill:(unsigned long long)arg1;

@end

