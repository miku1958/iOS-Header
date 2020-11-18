//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCCKDatabaseDelegate-Protocol.h>
#import <NewsCore/FCContentContext-Protocol.h>
#import <NewsCore/FCNetworkReachabilityRequirementObserving-Protocol.h>

@class FCAppConfiguration, FCArticleController, FCAssetManager, FCContentContextInternal, FCFlintResourceManager, FCTagController, NSString;
@protocol FCNetworkReachabilityRequirement;

@interface FCContentContext : NSObject <FCCKDatabaseDelegate, FCNetworkReachabilityRequirementObserving, FCContentContext>
{
    FCAppConfiguration *_appConfiguration;
    FCArticleController *_articleController;
    FCAssetManager *_assetManager;
    FCFlintResourceManager *_flintResourceManager;
    FCTagController *_tagController;
    NSString *_contentDirectory;
    FCContentContextInternal *_internalContentContext;
    id<FCNetworkReachabilityRequirement> _supportedCountryNetworkReachabilityRequirement;
}

@property (readonly, nonatomic) FCAppConfiguration *appConfiguration; // @synthesize appConfiguration=_appConfiguration;
@property (readonly, nonatomic) FCArticleController *articleController; // @synthesize articleController=_articleController;
@property (readonly, nonatomic) FCAssetManager *assetManager; // @synthesize assetManager=_assetManager;
@property (copy, nonatomic) NSString *contentDirectory; // @synthesize contentDirectory=_contentDirectory;
@property (readonly, copy, nonatomic) NSString *contentStoreFrontID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FCFlintResourceManager *flintResourceManager; // @synthesize flintResourceManager=_flintResourceManager;
@property (readonly, nonatomic) BOOL hasBeenRateLimited;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) FCContentContextInternal *internalContentContext; // @synthesize internalContentContext=_internalContentContext;
@property (readonly) Class superclass;
@property (strong, nonatomic) id<FCNetworkReachabilityRequirement> supportedCountryNetworkReachabilityRequirement; // @synthesize supportedCountryNetworkReachabilityRequirement=_supportedCountryNetworkReachabilityRequirement;
@property (readonly, nonatomic) FCTagController *tagController; // @synthesize tagController=_tagController;

+ (void)initialize;
- (void).cxx_destruct;
- (void)_updateReachabilityGivenRequirements;
- (void)clearCloudKitCaches;
- (void)databaseHasBeenRateLimited:(id)arg1 retryAfter:(double)arg2;
- (void)dealloc;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1;
- (id)initWithContentDatabase:(id)arg1 contentContainer:(id)arg2 contentHostDirectory:(id)arg3 contentDirectory:(id)arg4 networkBehaviorMonitor:(id)arg5 setupExcerptURLProtocol:(BOOL)arg6 desiredHeadlineFieldOptions:(unsigned long long)arg7 feedUsage:(long long)arg8;
- (id)initWithContentHostDirectory:(id)arg1 networkBehaviorMonitor:(id)arg2 desiredHeadlineFieldOptions:(unsigned long long)arg3 feedUsage:(long long)arg4;
- (void)networkReachabilityRequirementDidBecomeDirty:(id)arg1;

@end

