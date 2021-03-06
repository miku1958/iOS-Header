//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsFeed/FCCacheFlushing-Protocol.h>
#import <NewsFeed/NSObject-Protocol.h>

@class FCArticleController, FCAssetManager, FCContentManifest, FCFlintResourceManager, FCInterestToken, FCJSONRecordSourceSchema, FCNetworkBehaviorMonitor, FCTagController, NSArray, NSString, NSURL;
@protocol FCAVAssetPrewarming, FCBackgroundTaskable, FCCacheFlushing, FCCoreConfigurationManager, FCCoreConfigurationManager><FCNewsAppConfigurationManager, FCJSONRecordSourceType, FCJSONRecordTreeSourceType, FCMagazinesConfigurationManager, FCNewsAppConfigurationManager, FCPPTContext;

@protocol FCContentContext <NSObject, FCCacheFlushing>

@property (nonatomic, readonly) id<FCNewsAppConfigurationManager> appConfigurationManager;
@property (nonatomic, readonly) FCArticleController *articleController;
@property (nonatomic, readonly) NSURL *assetCacheDirectoryURL;
@property (nonatomic, readonly) FCAssetManager *assetManager;
@property (nonatomic, readonly) id<FCAVAssetPrewarming> avAssetPrewarmer;
@property (nonatomic, readonly) id<FCBackgroundTaskable> backgroundTaskable;
@property (nonatomic, readonly) id<FCCoreConfigurationManager> configurationManager;
@property (nonatomic, readonly) NSString *contentDirectory;
@property (nonatomic, readonly) NSString *contentEnvironmentToken;
@property (nonatomic, readonly) NSString *contentStoreFrontID;
@property (nonatomic, readonly) FCFlintResourceManager *flintResourceManager;
@property (nonatomic, readonly) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (nonatomic, readonly) id<FCPPTContext> pptContext;
@property (nonatomic, readonly) NSString *supportedContentStoreFrontID;
@property (nonatomic, readonly) FCTagController *tagController;

- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1 exceptForFlusher:(id<FCCacheFlushing>)arg2;
- (FCInterestToken *)interestTokenForContentManifest:(FCContentManifest *)arg1;
- (id<FCMagazinesConfigurationManager>)magazinesConfigurationManager;
- (id<FCCoreConfigurationManager><FCNewsAppConfigurationManager>)news_core_ConfigurationManager;
- (void)ppt_overrideFeedEndpoint:(long long)arg1;
- (void)ppt_prewarmFeedDatabase;
- (id<FCJSONRecordSourceType>)recordSourceWithSchema:(FCJSONRecordSourceSchema *)arg1;
- (id<FCJSONRecordTreeSourceType>)recordTreeSourceWithRecordSources:(NSArray *)arg1;
@end

