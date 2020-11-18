//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreParsec/PARClientXPC-Protocol.h>
#import <CoreParsec/SFFeedbackListener-Protocol.h>

@class NSString, NSXPCConnection, PARBag, PARRanker, PARSearchClient, PARSessionConfiguration;
@protocol PARSessionDelegate;

@interface PARSession : NSObject <PARClientXPC, SFFeedbackListener>
{
    PARBag *_bag;
    PARSearchClient *_client;
    PARSessionConfiguration *_configuration;
    NSXPCConnection *_connection;
    id<PARSessionDelegate> _delegate;
    PARRanker *_ranker;
}

@property (readonly) PARBag *bag; // @synthesize bag=_bag;
@property (strong, nonatomic) PARSearchClient *client; // @synthesize client=_client;
@property (strong, nonatomic) PARSessionConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PARSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) PARRanker *ranker; // @synthesize ranker=_ranker;
@property (readonly) Class superclass;

+ (id)sessionWithConfiguration:(id)arg1;
+ (id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2 startImmediately:(BOOL)arg3;
+ (id)sharedPARSessionWithConfiguration:(id)arg1;
- (void).cxx_destruct;
- (void)_addTopicsToSearchRequest:(id)arg1;
- (void)_setupRanker;
- (unsigned long long)_userAgentToMKSearchFoundationFeedbackClientType:(id)arg1;
- (id)awaitBag;
- (void)bagDidLoad:(id)arg1 error:(id)arg2;
- (void)captureMapsResultsDisplayedFeedback:(id)arg1;
- (void)cardViewDidDisappear:(id)arg1;
- (void)didAppendLateSections:(id)arg1;
- (void)didClearInput:(id)arg1;
- (void)didEndSearch:(id)arg1;
- (void)didEngageCardSection:(id)arg1;
- (void)didEngageResult:(id)arg1;
- (void)didEngageSection:(id)arg1;
- (void)didEngageSuggestion:(id)arg1;
- (void)didErrorOccur:(id)arg1;
- (void)didGoToSite:(id)arg1;
- (void)didRankSections:(id)arg1;
- (void)didReceiveResultsAfterTimeout:(id)arg1;
- (void)didStartSearch:(id)arg1;
- (unsigned long long)enabledStatus;
- (void)fileHandleAndAttributesForResource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 connection:(id)arg2;
- (id)initWithConfiguration:(id)arg1 connection:(id)arg2 delegate:(id)arg3 startImmediately:(BOOL)arg4;
- (void)loadTask:(id)arg1;
- (void)reportEvent:(id)arg1;
- (void)resultsDidBecomeVisible:(id)arg1;
- (void)searchViewDidAppear:(id)arg1;
- (void)searchViewDidDisappear:(id)arg1;
- (void)sectionHeaderDidBecomeVisible:(id)arg1;
- (void)sendCustomFeedback:(id)arg1;
- (void)start;
- (void)suggestionsDidBecomeVisible:(id)arg1;
- (id)taskWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

