//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/MPQueueBehaviorManaging-Protocol.h>

@class MPAVItem;

@protocol MPCQueueBehaviorManaging <MPQueueBehaviorManaging>

@optional
- (BOOL)preventsHardQueueModificationsForItem:(MPAVItem *)arg1;
- (BOOL)supportsAddToQueue;
@end

