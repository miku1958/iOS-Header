//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariSharedUI/WBSSiteMetadataImageCacheDelegate-Protocol.h>
#import <SafariSharedUI/WBSSiteMetadataProvider-Protocol.h>

@class NSCache, NSMutableDictionary, NSMutableSet, NSString, NSURL, WBSSiteMetadataImageCache;
@protocol OS_dispatch_queue, WBSSiteMetadataProviderDelegate;

@interface WBSTemplateIconCache : NSObject <WBSSiteMetadataImageCacheDelegate, WBSSiteMetadataProvider>
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    BOOL _areSettingsLoaded;
    WBSSiteMetadataImageCache *_imageCache;
    struct os_unfair_lock_s _templateIconsDataForHostsAccessLock;
    NSMutableDictionary *_templateIconsDataForHosts;
    NSMutableDictionary *_hostsToRequestSets;
    NSMutableSet *_pendingTemplateIconRequestHosts;
    NSMutableSet *_pendingTemplateIconFallbackRequestHosts;
    NSMutableSet *_pendingSVGImageRenderingRequests;
    NSMutableDictionary *_requestsToDelayedResponses;
    NSCache *_requestsToResponses;
    BOOL _historyDidFinishLoading;
    BOOL _hasPurgedUnneededItems;
    id<WBSSiteMetadataProviderDelegate> _providerDelegate;
    struct CGSize _defaultIconSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGSize defaultIconSize; // @synthesize defaultIconSize=_defaultIconSize;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSURL *imageDirectoryURL;
@property (weak) id<WBSSiteMetadataProviderDelegate> providerDelegate; // @synthesize providerDelegate=_providerDelegate;
@property (readonly, nonatomic) BOOL providesFavicons;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didAddHistoryItems:(id)arg1;
- (void)_didLoadHistory:(id)arg1;
- (void)_didRemoveHistoryItems:(id)arg1;
- (id)_generateResponseForRequest:(id)arg1;
- (id)_imageForRequest:(id)arg1 getThemeColor:(id *)arg2;
- (BOOL)_isLocalIconRequest:(id)arg1;
- (id)_monogramForRequest:(id)arg1 themeColor:(id)arg2;
- (void)_notifyDidLoadIconForHost:(id)arg1;
- (void)_notifyImageWasLoaded:(id)arg1 forHost:(id)arg2;
- (void)_purgeUnneededTemplateIconsIfReady;
- (void)_registerRequest:(id)arg1;
- (void)_removeTemplateIconsDataForHost:(id)arg1 ifIconIsInCache:(BOOL)arg2;
- (void)_requestTemplateIconForRequest:(id)arg1;
- (void)_saveTemplateIcon:(id)arg1 withThemeColor:(id)arg2 forHost:(id)arg3 toDisk:(BOOL)arg4;
- (void)_setUpAndReturnDelayedResponseForRequest:(id)arg1;
- (void)_setUpAndReturnPreparedResponseForRequest:(id)arg1;
- (id)_templateIconForURL:(id)arg1 getThemeColor:(id *)arg2;
- (BOOL)_templateIconRetainerIsReadyForCleanUp;
- (void)_updateTemplateIconsDataForHost:(id)arg1 image:(id)arg2 themeColor:(id)arg3 isSavedToDisk:(BOOL)arg4;
- (void)_upgradeCacheVersionIfNeeded;
- (void)addTemplateIconAtURL:(id)arg1 withThemeColor:(id)arg2 forHost:(id)arg3 toDisk:(BOOL)arg4;
- (BOOL)canHandleRequest:(id)arg1;
- (void)dealloc;
- (void)emptyCaches;
- (BOOL)hasDeterminedIconAvailabilityForURL:(id)arg1;
- (id)init;
- (id)initWithImageDirectoryURL:(id)arg1;
- (void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2;
- (void)purgeUnneededCacheEntries;
- (void)releaseTemplateIconForHost:(id)arg1;
- (void)releaseTemplateIconForURLString:(id)arg1;
- (void)releaseTemplateIconsForHosts:(id)arg1;
- (id)responseForRequest:(id)arg1 willProvideUpdates:(BOOL *)arg2;
- (void)retainTemplateIconForHost:(id)arg1;
- (void)retainTemplateIconForURLString:(id)arg1;
- (void)retainTemplateIconsForHosts:(id)arg1;
- (void)savePendingChangesBeforeTermination;
- (BOOL)shouldRequestTemplateIconForURL:(id)arg1 allowRefresh:(BOOL)arg2;
- (void)siteMetadataImageCache:(id)arg1 didFinishLoadingImage:(id)arg2 forKeyString:(id)arg3;
- (void)siteMetadataImageCache:(id)arg1 didRemoveImageFromCacheForKeyString:(id)arg2;
- (void)siteMetadataImageCacheDidEmptyCache:(id)arg1;
- (void)siteMetadataImageCacheDidFinishLoadingSettings:(id)arg1;
- (void)stopWatchingUpdatesForRequest:(id)arg1;

@end

