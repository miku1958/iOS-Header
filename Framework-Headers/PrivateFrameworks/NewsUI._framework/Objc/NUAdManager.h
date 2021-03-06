//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUAdAnalyticsProvider-Protocol.h>
#import <NewsUI/NUAdContextProvider-Protocol.h>
#import <NewsUI/NUAdProvider-Protocol.h>

@class NSString, NUAdInterstitial, NUAdStore;
@protocol NUAdManagerConfigurationProvider, NUDevice;

@interface NUAdManager : NSObject <NUAdContextProvider, NUAdProvider, NUAdAnalyticsProvider>
{
    NUAdStore *_adStore;
    id<NUAdManagerConfigurationProvider> _configurationProvider;
    id<NUDevice> _device;
    NUAdInterstitial *_interstitialAdPendingLoad;
}

@property (readonly, nonatomic) NUAdStore *adStore; // @synthesize adStore=_adStore;
@property (readonly, nonatomic) id<NUAdManagerConfigurationProvider> configurationProvider; // @synthesize configurationProvider=_configurationProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<NUDevice> device; // @synthesize device=_device;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NUAdInterstitial *interstitialAdPendingLoad; // @synthesize interstitialAdPendingLoad=_interstitialAdPendingLoad;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)adContextValueForKeyPath:(id)arg1;
- (void)adForIdentifier:(id)arg1 contextProviders:(id)arg2 constructor:(id)arg3 layoutOptions:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)adWithIdentifier:(id)arg1;
- (void)bannerViewDidLoad:(id)arg1;
- (void)bannerViewDidUnload:(id)arg1;
- (void)bannerViewForIdentifier:(id)arg1 contextProviders:(id)arg2 layoutOptions:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (id)contextForContextProviders:(id)arg1 keyedContextProviders:(id)arg2 constructor:(id)arg3;
- (id)defaultArticleDefinition;
- (id)defaultBodyDefinition;
- (id)defaultFeedMetadataDefinition;
- (id)defaultHeaderDefinition;
- (id)defaultIssueDefinition;
- (id)defaultRootDefinition;
- (id)inArticleContextConstructor;
- (id)initWithConfigurationProvider:(id)arg1 device:(id)arg2;
- (id)interstitialContextConstructor;
- (void)interstitialViewForContextProviders:(id)arg1 contextProvidersWithKeys:(id)arg2 layoutOptions:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)interstitialViewForContextProviders:(id)arg1 layoutOptions:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (id)prerollBodyDefinition;
- (id)prerollContextConstructor;
- (void)prerollForContextProviders:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)prerollHeaderDefinition;
- (id)prerollRootDefinition;
- (void)videoAdForContextProviders:(id)arg1 constructor:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (id)videoInTodayHeaderDefinition;
- (id)videoPlaylistAdBodyDefinition;
- (id)videoPlaylistAdContextConstructor;
- (void)videoPlaylistAdForContextProviders:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)videoPlaylistAdRootDefinition;

@end

