//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSSiteMetadataImageCacheDelegate-Protocol.h>
#import <SafariShared/WBSSiteMetadataProvider-Protocol.h>
#import <SafariShared/WBSWebViewMetadataFetchOperationDelegate-Protocol.h>

@class NSCache, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSURL, WBSSiteMetadataImageCache, WBSTouchIconCacheSettingsSQLiteStore;
@protocol OS_dispatch_queue, WBSSiteMetadataProviderDelegate;

@interface WBSTouchIconCache : NSObject <WBSSiteMetadataImageCacheDelegate, WBSWebViewMetadataFetchOperationDelegate, WBSSiteMetadataProvider>
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    BOOL _didLoadSettings;
    WBSSiteMetadataImageCache *_imageCache;
    NSMutableDictionary *_hostsToRequestSets;
    NSMutableDictionary *_touchIconsDataForHosts;
    NSMutableSet *_failedTouchIconRequestHosts;
    NSCache *_requestsToResponses;
    NSMutableDictionary *_requestsToDelayedResponses;
    NSMutableArray *_pendingSaveTouchIconToDiskBlocks;
    NSMutableSet *_pendingTouchIconRequestHosts;
    WBSTouchIconCacheSettingsSQLiteStore *_cacheSettingsStore;
    long long _protectionType;
    BOOL _allowFetchingOverCellularNetwork;
    long long _fileMappingStyle;
    BOOL _readOnly;
    BOOL _internalQueueBusy;
    id<WBSSiteMetadataProviderDelegate> _providerDelegate;
    NSURL *_cacheDirectoryURL;
}

@property (readonly, nonatomic) NSURL *cacheDirectoryURL; // @synthesize cacheDirectoryURL=_cacheDirectoryURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSURL *imageDirectoryURL;
@property (getter=isInternalQueueBusy) BOOL internalQueueBusy; // @synthesize internalQueueBusy=_internalQueueBusy;
@property (weak, nonatomic) id<WBSSiteMetadataProviderDelegate> providerDelegate; // @synthesize providerDelegate=_providerDelegate;
@property (readonly, nonatomic) BOOL providesFavicons;
@property (readonly, nonatomic, getter=isReadOnly) BOOL readOnly; // @synthesize readOnly=_readOnly;
@property (readonly) Class superclass;

+ (id)_favoritesGlyph;
+ (id)_generateDefaultFavoritesIconWithGlyphColor:(id)arg1;
+ (id)_generateFavoritesIconForRequest:(id)arg1 withBackgroundColor:(id)arg2;
+ (id)_monogramConfiguration;
+ (id)defaultBackgroundColor;
+ (id)defaultFavoritesIcon;
+ (id)defaultGlyphColor;
+ (id)generateFavoritesIconForTitle:(id)arg1 url:(id)arg2 backgroundColor:(id)arg3;
- (void).cxx_destruct;
- (id)_didGenerateResponse:(id)arg1 forRequest:(id)arg2;
- (void)_didLoadTouchIcon:(id)arg1 withCacheSettingsEntry:(id)arg2;
- (void)_ensureCacheDirectory;
- (void)_enumerateRequestsForHost:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_imageCacheSettingsDatabaseURL;
- (double)_maximumScreenScale;
- (void)_notifyImageWasLoaded:(id)arg1 forHost:(id)arg2;
- (void)_openCacheSettingsDatabaseIfNeeded;
- (id)_operationWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_registerRequest:(id)arg1;
- (void)_removeTouchIconsDataForHost:(id)arg1;
- (id)_resizedImage:(id)arg1 forHost:(id)arg2;
- (id)_responseForRequest:(id)arg1 withTouchIcon:(id)arg2;
- (id)_responseForTouchIconRequestWithNoHost:(id)arg1;
- (void)_saveTouchIconToDisk:(id)arg1 forHost:(id)arg2 requestDidSucceed:(BOOL)arg3 isUserLoadedWebpageRequest:(BOOL)arg4 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg5;
- (void)_saveTouchIconToDiskWithResult:(id)arg1 forRequest:(id)arg2;
- (void)_setUpAndReturnDelayedResponseForRequest:(id)arg1;
- (void)_setUpAndReturnPreparedResponseForRequest:(id)arg1 didReceiveNewData:(BOOL)arg2;
- (void)_setUpImageCacheSettingsSQLiteStore;
- (BOOL)_shouldGenerateTouchIconFromTouchIcon:(id)arg1 forRequest:(id)arg2;
- (BOOL)_shouldRequestTouchIconForURL:(id)arg1 inUserLoadedWebpage:(BOOL)arg2 initiatedFromBookmarkInteraction:(BOOL)arg3;
- (BOOL)_shouldRequestTouchIconWithTimeoutForURL:(id)arg1 inUserLoadedWebpage:(BOOL)arg2 initiatedFromBookmarkInteraction:(BOOL)arg3;
- (id)_touchIconForURL:(id)arg1;
- (void)_updateTouchIconsDataForHost:(id)arg1 image:(id)arg2 requestDidSucceed:(BOOL)arg3 isUserLoadedWebpageRequest:(BOOL)arg4 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg5 UUIDString:(id)arg6;
- (void)_willSaveTouchIcon:(id)arg1 withCacheSettingsEntry:(id)arg2;
- (void)cacheFirstAvailableTouchIcon:(id)arg1 forURL:(id)arg2;
- (BOOL)canHandleRequest:(id)arg1;
- (void)dealloc;
- (void)emptyCaches;
- (BOOL)hasDeterminedIconAvailabilityForURL:(id)arg1;
- (id)init;
- (id)initWithCacheDirectoryURL:(id)arg1;
- (id)initWithCacheDirectoryURL:(id)arg1 isReadOnly:(BOOL)arg2;
- (id)initWithCacheDirectoryURL:(id)arg1 isReadOnly:(BOOL)arg2 protectionType:(long long)arg3 allowFetchingOverCellularNetwork:(BOOL)arg4 fileMappingStyle:(long long)arg5;
- (id)operationForRequest:(id)arg1;
- (void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2;
- (void)purgeUnneededCacheEntries;
- (void)releaseTouchIconForHost:(id)arg1;
- (void)releaseTouchIconForURLString:(id)arg1;
- (void)releaseTouchIconsForHosts:(id)arg1;
- (void)removeTouchIconMetadataForHosts:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)responseForRequest:(id)arg1 willProvideUpdates:(BOOL *)arg2;
- (void)retainTouchIconForHost:(id)arg1;
- (void)retainTouchIconForURLString:(id)arg1;
- (void)retainTouchIconsForHosts:(id)arg1;
- (void)savePendingChangesBeforeTermination;
- (BOOL)shouldRequestTouchIconForURL:(id)arg1 inUserLoadedWebpage:(BOOL)arg2;
- (BOOL)shouldRequestTouchIconForWebPageNavigationFromBookmarkInteractionForURL:(id)arg1;
- (id)siteMetadataImageCache:(id)arg1 customFileNameForKeyString:(id)arg2;
- (void)siteMetadataImageCache:(id)arg1 didFinishLoadingImage:(id)arg2 forKeyString:(id)arg3;
- (void)siteMetadataImageCache:(id)arg1 didRemoveImageFromCacheForKeyString:(id)arg2;
- (void)siteMetadataImageCacheDidEmptyCache:(id)arg1;
- (void)siteMetadataImageCacheDidFinishLoadingSettings:(id)arg1;
- (void)stopWatchingUpdatesForRequest:(id)arg1;
- (id)uuidStringToHost;
- (void)webViewMetadataFetchOperation:(id)arg1 didFinishUsingWebView:(id)arg2;
- (id)webViewMetadataFetchOperation:(id)arg1 webViewOfSize:(struct CGSize)arg2 withConfiguration:(id)arg3;

@end

