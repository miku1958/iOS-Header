//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@interface FCSingleTagFeedGroupEmittingOperation : FCFeedGroupEmittingOperation
{
}

- (void)_fetchOrdinaryHeadlinesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_fetchPinnedHeadlinesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)_runningPPT;
- (unsigned long long)feedItemsToFetchForDesiredHeadlineCount:(unsigned long long)arg1;
- (id)feedTransformations;
- (void)performOperation;
- (void)supplementFeedItems:(id)arg1 fromCursor:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
