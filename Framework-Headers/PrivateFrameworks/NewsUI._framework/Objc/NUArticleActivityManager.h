//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUActivityProvider-Protocol.h>

@class FCReadingHistory, FCReadingList, FCSubscriptionList, NSString;
@protocol FCHeadlineProviding, NUURLHandler;

@interface NUArticleActivityManager : NSObject <NUActivityProvider>
{
    id<FCHeadlineProviding> _headline;
    FCReadingHistory *_readingHistory;
    FCReadingList *_readingList;
    FCSubscriptionList *_subscriptionList;
    id<NUURLHandler> _URLHandler;
}

@property (readonly, nonatomic) id<NUURLHandler> URLHandler; // @synthesize URLHandler=_URLHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<FCHeadlineProviding> headline; // @synthesize headline=_headline;
@property (readonly, nonatomic) FCReadingHistory *readingHistory; // @synthesize readingHistory=_readingHistory;
@property (readonly, nonatomic) FCReadingList *readingList; // @synthesize readingList=_readingList;
@property (readonly, nonatomic) FCSubscriptionList *subscriptionList; // @synthesize subscriptionList=_subscriptionList;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activities;
- (id)activityImageForHeadline:(id)arg1 withType:(unsigned long long)arg2;
- (id)activityItemSources;
- (id)activityTitleForHeadline:(id)arg1 withType:(unsigned long long)arg2;
- (id)activityTypeForHeadline:(id)arg1 withType:(unsigned long long)arg2;
- (BOOL)articleDislikedForHeadline:(id)arg1;
- (BOOL)articleLikedForHeadline:(id)arg1;
- (BOOL)articleSavedForHeadline:(id)arg1;
- (BOOL)channelMutedForHeadline:(id)arg1;
- (id)initWithHeadline:(id)arg1 readingHistory:(id)arg2 readingList:(id)arg3 subscriptionList:(id)arg4 URLHandler:(id)arg5;
- (CDUnknownBlockType)performBlockForHeadline:(id)arg1 withType:(unsigned long long)arg2;
- (id)supportedActivities;
- (void)toggleArticleDislikeStatusForHeadline:(id)arg1;
- (void)toggleArticleLikeStatusForHeadline:(id)arg1;
- (void)toggleMuteForHeadline:(id)arg1;
- (void)toggleSaveForHeadline:(id)arg1;

@end

