//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/NSObject-Protocol.h>

@protocol WBSCompletionListItem, _CompletionListRankingObserverFeedbackGenerator;

@protocol _CompletionListRankingObserverFeedbackGeneratorDelegate <NSObject>

@optional
- (unsigned long long)completionListRankingObserverFeedbackGenerator:(id<_CompletionListRankingObserverFeedbackGenerator>)arg1 frequentlyVisitedSitesIndexOfItem:(id<WBSCompletionListItem>)arg2 hidingItem:(id<WBSCompletionListItem>)arg3;
@end

