//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGDHarvestQueueItem.h>

@class SGDWorkQueueItem;

@interface SGDHarvestQueueItemLegacy : SGDHarvestQueueItem
{
    SGDWorkQueueItem *_workQueueItem;
    BOOL _highPriority;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)finish;
- (BOOL)highPriority;
- (id)initWithWorkQueueItem:(id)arg1 item:(id)arg2 highPriority:(BOOL)arg3;
- (void)markAsFailed;

@end

