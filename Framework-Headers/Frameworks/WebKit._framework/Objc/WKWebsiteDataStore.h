//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/NSSecureCoding-Protocol.h>
#import <WebKit/WKObject-Protocol.h>

@class NSString, WKHTTPCookieStore;

@interface WKWebsiteDataStore : NSObject <WKObject, NSSecureCoding>
{
    struct ObjectStorage<API::WebsiteDataStore> _websiteDataStore;
}

@property (nonatomic, setter=_setAllowsCellularAccess:) BOOL _allowsCellularAccess;
@property (readonly) struct Object *_apiObject;
@property (nonatomic, setter=_setBoundInterfaceIdentifier:) NSString *_boundInterfaceIdentifier;
@property (nonatomic, setter=_setCacheStorageDirectory:) NSString *_cacheStorageDirectory;
@property (nonatomic, setter=_setCacheStoragePerOriginQuota:) unsigned long long _cacheStoragePerOriginQuota;
@property (nonatomic, setter=_setResourceLoadStatisticsEnabled:) BOOL _resourceLoadStatisticsEnabled;
@property (nonatomic, setter=_setServiceWorkerRegistrationDirectory:) NSString *_serviceWorkerRegistrationDirectory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) WKHTTPCookieStore *httpCookieStore;
@property (readonly, nonatomic, getter=isPersistent) BOOL persistent;
@property (readonly) Class superclass;

+ (id)_allWebsiteDataTypesIncludingPrivate;
+ (void)_allowWebsiteDataRecordsForAllOrigins;
+ (BOOL)_defaultDataStoreExists;
+ (id)allWebsiteDataTypes;
+ (id)defaultDataStore;
+ (id)nonPersistentDataStore;
+ (BOOL)supportsSecureCoding;
- (void)_fetchDataRecordsOfTypes:(id)arg1 withOptions:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_initWithConfiguration:(id)arg1;
- (void)_resourceLoadStatisticsClearInMemoryAndPersistentStore;
- (void)_resourceLoadStatisticsClearInMemoryAndPersistentStoreModifiedSinceHours:(unsigned int)arg1;
- (void)_resourceLoadStatisticsHadUserInteraction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_resourceLoadStatisticsIsGrandfathered:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_resourceLoadStatisticsIsPrevalentResource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_resourceLoadStatisticsIsRegisteredAsRedirectingTo:(id)arg1 hostRedirectedTo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_resourceLoadStatisticsIsRegisteredAsSubFrameUnder:(id)arg1 topFrameHost:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_resourceLoadStatisticsProcessStatisticsAndDataRecords;
- (void)_resourceLoadStatisticsResetToConsistentState;
- (void)_resourceLoadStatisticsSetGrandfatheringTime:(double)arg1;
- (void)_resourceLoadStatisticsSetHadUserInteraction:(BOOL)arg1 forHost:(id)arg2;
- (void)_resourceLoadStatisticsSetHasHadNonRecentUserInteractionForHost:(id)arg1;
- (void)_resourceLoadStatisticsSetIsGrandfathered:(BOOL)arg1 forHost:(id)arg2;
- (void)_resourceLoadStatisticsSetIsPrevalentResource:(BOOL)arg1 forHost:(id)arg2;
- (void)_resourceLoadStatisticsSetLastSeen:(double)arg1 forHost:(id)arg2;
- (void)_resourceLoadStatisticsSetMaxStatisticsEntries:(unsigned long long)arg1;
- (void)_resourceLoadStatisticsSetMinimumTimeBetweenDataRecordsRemoval:(double)arg1;
- (void)_resourceLoadStatisticsSetNotifyPagesWhenDataRecordsWereScanned:(BOOL)arg1;
- (void)_resourceLoadStatisticsSetNotifyPagesWhenTelemetryWasCaptured:(BOOL)arg1;
- (void)_resourceLoadStatisticsSetPruneEntriesDownTo:(unsigned long long)arg1;
- (void)_resourceLoadStatisticsSetShouldClassifyResourcesBeforeDataRecordsRemoval:(BOOL)arg1;
- (void)_resourceLoadStatisticsSetShouldPartitionCookies:(BOOL)arg1 forHost:(id)arg2;
- (void)_resourceLoadStatisticsSetShouldSubmitTelemetry:(BOOL)arg1;
- (void)_resourceLoadStatisticsSetSubframeUnderTopFrameOrigin:(id)arg1 forHost:(id)arg2;
- (void)_resourceLoadStatisticsSetSubresourceUnderTopFrameOrigin:(id)arg1 forHost:(id)arg2;
- (void)_resourceLoadStatisticsSetSubresourceUniqueRedirectTo:(id)arg1 forHost:(id)arg2;
- (void)_resourceLoadStatisticsSetTimeToLiveCookiePartitionFree:(double)arg1;
- (void)_resourceLoadStatisticsSetTimeToLiveUserInteraction:(double)arg1;
- (void)_resourceLoadStatisticsSubmitTelemetry;
- (void)_resourceLoadStatisticsUpdateCookiePartitioning;
- (void)_setResourceLoadStatisticsTestingCallback:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchDataRecordsOfTypes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithCoder:(id)arg1;
- (void)removeDataOfTypes:(id)arg1 forDataRecords:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeDataOfTypes:(id)arg1 modifiedSince:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
