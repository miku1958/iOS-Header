//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class MPAVItem, MPPlaybackContext, NSString;
@protocol MPAVQueueController;

@protocol MPAVQueueControllerDelegate <NSObject>
- (void)queueController:(id<MPAVQueueController>)arg1 didChangeActionAtQueueEnd:(long long)arg2;
- (void)queueController:(id<MPAVQueueController>)arg1 didChangeContentsWithReplacementPlaybackContext:(MPPlaybackContext *)arg2;
- (void)queueController:(id<MPAVQueueController>)arg1 didChangeRepeatType:(long long)arg2;
- (void)queueController:(id<MPAVQueueController>)arg1 didChangeShuffleType:(long long)arg2;
- (void)queueController:(id<MPAVQueueController>)arg1 didIncrementVersionForSegment:(NSString *)arg2;
- (void)queueController:(id<MPAVQueueController>)arg1 failedToLoadItem:(MPAVItem *)arg2;
- (void)queueControllerDidChangeContents:(id<MPAVQueueController>)arg1;
@end
