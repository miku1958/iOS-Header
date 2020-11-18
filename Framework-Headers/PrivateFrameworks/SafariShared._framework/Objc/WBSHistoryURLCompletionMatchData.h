//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSURLCompletionMatchData-Protocol.h>

@class NSString;

@interface WBSHistoryURLCompletionMatchData : NSObject <WBSURLCompletionMatchData>
{
    RefPtr_ed2a6bdb _item;
}

@property (readonly, nonatomic) BOOL containsBookmark;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL lastVisitWasFailure;
@property (readonly, nonatomic) double lastVisitedTimeInterval;
@property (readonly, nonatomic) NSString *originalURLString;
@property (readonly) Class superclass;
@property (readonly, nonatomic) long long visitCount;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)enumeratePageTitlesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateUserVisibleURLsUsingBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithCompletionItem:(struct HistoryURLCompletionItem *)arg1;
- (id)matchDataByMergingWithMatchData:(id)arg1;
- (BOOL)matchesAutocompleteTrigger:(id)arg1;
- (id)pageTitleAtIndex:(unsigned long long)arg1;
- (id)pageTitleForUserVisibleURLStringAtIndex:(unsigned long long)arg1;
- (float)topSitesScoreForPageTitleAtIndex:(unsigned long long)arg1 atTime:(double)arg2;
- (float)topSitesScoreForURLStringAtIndex:(unsigned long long)arg1 atTime:(double)arg2;
- (id)userVisibleURLStringAtIndex:(unsigned long long)arg1;
- (id)userVisibleURLStringForPageTitleAtIndex:(unsigned long long)arg1;

@end

