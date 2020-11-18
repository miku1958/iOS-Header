//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreParsec/SFFeedbackListener-Protocol.h>
#import <CoreParsec/SFResourceLoader-Protocol.h>

@class GEOSearchFoundationFeedbackListener, NSFileManager, NSSet, NSString, NSXPCConnection, PARBag, PARSearchClient, PARSessionConfiguration;
@protocol OS_dispatch_queue, PARSessionDelegate;

@interface PARSession : NSObject <SFFeedbackListener, SFResourceLoader>
{
    NSFileManager *_fileManager;
    GEOSearchFoundationFeedbackListener *_mapsListener;
    PARBag *_bag;
    _Atomic BOOL _sampled;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSSet *_allowedAppsForSiriSuggestions;
    NSSet *_sampleClientTimingEventWhitelist;
    PARSearchClient *_client;
    PARSessionConfiguration *_configuration;
    id<PARSessionDelegate> _delegate;
}

@property (strong) NSSet *allowedAppsForSiriSuggestions;
@property (strong) PARBag *bag;
@property (readonly, nonatomic) PARSearchClient *client; // @synthesize client=_client;
@property (strong) PARSessionConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<PARSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSSet *sampleClientTimingEventWhitelist;
@property (readonly) Class superclass;

+ (id)sessionWithConfiguration:(id)arg1;
+ (id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2 startImmediately:(BOOL)arg3;
+ (id)sharedPARSessionWithConfiguration:(id)arg1;
+ (id)sharedSession;
- (void).cxx_destruct;
- (void)_flushUsingConnectionToFBF:(id)arg1;
- (void)_scheduleEagerFlush;
- (void)cardViewDidAppear:(id)arg1;
- (void)cardViewDidDisappear:(id)arg1;
- (void)didAppendLateSections:(id)arg1;
- (void)didClearInput:(id)arg1;
- (void)didEndSearch:(id)arg1;
- (void)didEngageCardSection:(id)arg1;
- (void)didEngageResult:(id)arg1;
- (void)didEngageSection:(id)arg1;
- (void)didEngageSuggestion:(id)arg1;
- (void)didErrorOccur:(id)arg1;
- (void)didGoToSearch:(id)arg1;
- (void)didGoToSite:(id)arg1;
- (void)didGradeLookupHintRelevancy:(id)arg1;
- (void)didGradeResultRelevancy:(id)arg1;
- (void)didRankSections:(id)arg1;
- (void)didReceiveResultsAfterTimeout:(id)arg1;
- (void)didReportUserResponseFeedback:(id)arg1;
- (void)didStartSearch:(id)arg1;
- (void)didSubmitUserReportFeedback:(id)arg1;
- (void)didUpdateSiriSuggestionsAppWhitelist;
- (unsigned long long)enabledStatus;
- (void)fileHandleAndAttributesForResource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 connection:(id)arg2;
- (id)initWithConfiguration:(id)arg1 connection:(id)arg2 delegate:(id)arg3 startImmediately:(BOOL)arg4;
- (BOOL)loadCard:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)loadImage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)loadMoreResults:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)loadTask:(id)arg1;
- (void)reportEvent:(id)arg1;
- (void)reportFeedback:(id)arg1;
- (void)reportFeedback:(id)arg1 queryId:(long long)arg2;
- (void)resultsDidBecomeVisible:(id)arg1;
- (void)searchViewDidAppear:(id)arg1;
- (void)searchViewDidDisappear:(id)arg1;
- (void)sectionHeaderDidBecomeVisible:(id)arg1;
- (void)sendCBAEngagementFeedback:(id)arg1 query:(unsigned long long)arg2;
- (void)sendCustomFeedback:(id)arg1;
- (void)sendCustomFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)start;
- (void)suggestionsDidBecomeVisible:(id)arg1;
- (id)taskWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
