//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCCKDatabase.h>

@class FCCKTestFeedQueryEndpoint, FCCKTestOrderFeedQueryEndpoint, NSMutableArray;

@interface FCCKTestDatabase : FCCKDatabase
{
    BOOL _simulateNetworkError;
    NSMutableArray *_records;
    FCCKTestFeedQueryEndpoint *_feedQueryEndpoint;
    FCCKTestOrderFeedQueryEndpoint *_orderFeedQueryEndpoint;
}

@property (strong, nonatomic) FCCKTestFeedQueryEndpoint *feedQueryEndpoint; // @synthesize feedQueryEndpoint=_feedQueryEndpoint;
@property (strong, nonatomic) FCCKTestOrderFeedQueryEndpoint *orderFeedQueryEndpoint; // @synthesize orderFeedQueryEndpoint=_orderFeedQueryEndpoint;
@property (strong, nonatomic) NSMutableArray *records; // @synthesize records=_records;
@property (nonatomic) BOOL simulateNetworkError; // @synthesize simulateNetworkError=_simulateNetworkError;

- (void).cxx_destruct;
- (id)addArticlesToTopOfFeed:(id)arg1 count:(unsigned long long)arg2;
- (void)addOperation:(id)arg1;
- (void)deleteArticleWithID:(id)arg1;
- (void)deleteFeedID:(id)arg1;
- (id)initWithDatabase:(id)arg1 middleware:(id)arg2;
- (void)insertArticleID:(id)arg1 atBottomOfFeedID:(id)arg2;
- (void)insertArticleID:(id)arg1 atTopOfFeedID:(id)arg2;
- (void)insertArticleID:(id)arg1 inFeedID:(id)arg2 withOrder:(unsigned long long)arg3;
- (void)insertArticleID:(id)arg1 inFeedID:(id)arg2 withOrder:(unsigned long long)arg3 subOrder:(unsigned long long)arg4;
- (id)insertTestArticle;
- (void)insertTestArticleWithID:(id)arg1 properties:(id)arg2;
- (id)insertTestArticleWithProperties:(id)arg1;
- (id)insertTestTagWithType:(id)arg1 feedID:(id)arg2;
- (id)insertTestTagWithType:(id)arg1 feedID:(id)arg2 properties:(id)arg3;
- (id)insertTestTagWithType:(id)arg1 properties:(id)arg2;
- (unsigned long long)orderForArticleID:(id)arg1 feedID:(id)arg2;
- (void)populateWithBasicTestFeeds;
- (void)updateArticleID:(id)arg1 inFeedID:(id)arg2 withProperties:(id)arg3;
- (void)updateArticleWithID:(id)arg1 modDate:(id)arg2 properties:(id)arg3;
- (void)updateArticleWithID:(id)arg1 properties:(id)arg2;
- (void)updateTagWithID:(id)arg1 properties:(id)arg2;

@end

