//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSURLCompletionMatchData-Protocol.h>

@class NSArray, NSString;

@interface WBSHistoryServiceURLCompletionMatchData : NSObject <WBSURLCompletionMatchData>
{
    unique_ptr_3ff2d08e _streamData;
    NSArray *_autocompleteTriggersAsStringArray;
    NSArray *_entries;
}

@property (readonly, nonatomic) BOOL containsBookmark;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *entries; // @synthesize entries=_entries;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL lastVisitWasFailure;
@property (nonatomic) double lastVisitedTimeInterval;
@property (readonly, nonatomic) NSString *originalURLString;
@property (readonly, nonatomic) BOOL shouldPreload;
@property (readonly, nonatomic) struct _HistoryStreamedMatchData *streamData;
@property (readonly) Class superclass;
@property (nonatomic) long long visitCount;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)enumeratePageTitlesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateUserVisibleURLsUsingBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithLastVisitWasFailure:(BOOL)arg1 visitWasFromThisDevice:(BOOL)arg2;
- (id)initWithStreamData:(unique_ptr_3ff2d08e *)arg1 entries:(id)arg2;
- (id)matchDataByMergingWithMatchData:(id)arg1;
- (BOOL)matchesAutocompleteTrigger:(id)arg1;
- (id)pageTitleAtIndex:(unsigned long long)arg1;
- (id)pageTitleForUserVisibleURLStringAtIndex:(unsigned long long)arg1;
- (void)setAutocompleteTriggers:(const void *)arg1 length:(unsigned long long)arg2;
- (float)topSitesScoreForPageTitleAtTime:(double)arg1;
- (float)topSitesScoreForURLStringAtIndex:(unsigned long long)arg1 atTime:(double)arg2;
- (id)userVisibleURLStringAtIndex:(unsigned long long)arg1;
- (id)userVisibleURLStringForPageTitleAtIndex:(unsigned long long)arg1;

@end

