//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString, NSUUID;

@interface IMBalloonPluginManager : NSObject
{
    Class _richLinksDataSourceClass;
    NSMutableDictionary *_pluginsMap;
    id _extensionMatchingContext;
    id _highMemoryExtensionMatchingContext;
    NSString *_pluginMetaDataFolder;
    NSMutableDictionary *_pluginIDToMetadataCache;
    NSMutableSet *_pluginsToRemoveAfterExtensionsUpdate;
    NSString *_simulatedConversationID1;
    NSString *_simulatedConversationID2;
    NSUUID *_localParticipantID1;
    NSUUID *_localParticipantID2;
}

@property (strong, nonatomic) id extensionMatchingContext; // @synthesize extensionMatchingContext=_extensionMatchingContext;
@property (strong, nonatomic) id highMemoryExtensionMatchingContext; // @synthesize highMemoryExtensionMatchingContext=_highMemoryExtensionMatchingContext;
@property (strong, nonatomic) NSUUID *localParticipantID1; // @synthesize localParticipantID1=_localParticipantID1;
@property (strong, nonatomic) NSUUID *localParticipantID2; // @synthesize localParticipantID2=_localParticipantID2;
@property (strong, nonatomic) NSMutableDictionary *pluginIDToMetadataCache; // @synthesize pluginIDToMetadataCache=_pluginIDToMetadataCache;
@property (strong, nonatomic) NSString *pluginMetaDataFolder; // @synthesize pluginMetaDataFolder=_pluginMetaDataFolder;
@property (strong, nonatomic) NSMutableDictionary *pluginsMap; // @synthesize pluginsMap=_pluginsMap;
@property (strong, nonatomic) NSMutableSet *pluginsToRemoveAfterExtensionsUpdate; // @synthesize pluginsToRemoveAfterExtensionsUpdate=_pluginsToRemoveAfterExtensionsUpdate;
@property (readonly, strong, nonatomic) Class richLinksDataSourceClass; // @synthesize richLinksDataSourceClass=_richLinksDataSourceClass;
@property (strong, nonatomic) NSString *simulatedConversationID1; // @synthesize simulatedConversationID1=_simulatedConversationID1;
@property (strong, nonatomic) NSString *simulatedConversationID2; // @synthesize simulatedConversationID2=_simulatedConversationID2;

+ (id)_extensionBlacklist;
+ (id)balloonProviderBundlePathURL;
+ (void)disableExtensionDiscovery;
+ (void)enableAlternatePathPlugins;
+ (BOOL)isRunningPPT;
+ (void)setIsRunningPPT:(BOOL)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_appProxyBundleIdentifiersForAppPlugins;
- (void)_clearPluginMetadataForUninstalledApps;
- (id)_currentlyInstalledExtensionsExcludingExtensionPoint:(id)arg1;
- (void)_deleteMetaDataForPlugins:(id)arg1;
- (id)_extensionWithIdentifier:(id)arg1;
- (id)_fallBackMessagesExtensionPluginForBundleID:(id)arg1;
- (void)_findPluginsInPathInternal:(id)arg1;
- (void)_findPluginsInPaths:(id)arg1;
- (id)_identifiersForAppPlugins;
- (id)_infoPlistPathForPluginCreatingFolderIfNeeded:(id)arg1;
- (id)_insertPluginForAppBundle:(id)arg1 balloonProviderBundle:(id)arg2;
- (id)_insertPluginForExtension:(id)arg1 balloonProviderBundle:(id)arg2 andTimingCollection:(id)arg3;
- (BOOL)_isExtensionBlackListed:(id)arg1;
- (BOOL)_isServerBlackListedBundle:(id)arg1 serverBag:(id)arg2;
- (void)_loadAllDataSources;
- (void)_loadAppBundleDataSources;
- (void)_loadAppExtensionDataSources;
- (id)_loadAppExtensionDataSourcesForExtensionPoint:(id)arg1;
- (id)_metadataForPluginIdentifier:(id)arg1;
- (void)_moveExtensionDataSourcesFromMessagesExtensionPluginToAppExtensions;
- (id)_participantIDForSimulator:(id)arg1;
- (id)_pluginPlistPath:(id)arg1;
- (id)_pluginsForWhichWeHaveMetadata;
- (id)_proxyIdentifiersForPlugins;
- (void)_removePluginsForIdentifiers:(id)arg1;
- (void)_removePluginsWithDelay;
- (void)_setPluginsToRemoveAndCallSelectorWithDelay:(id)arg1;
- (void)_storeMetadata:(id)arg1 _forPlugin:(id)arg2;
- (void)_updatePluginsForBundles:(id)arg1;
- (void)_updatePluginsForExtensions:(id)arg1 extensionPoint:(id)arg2;
- (id)allPlugins;
- (id)balloonPluginForBundleID:(id)arg1;
- (id)conversationID:(id)arg1 appID:(id)arg2;
- (Class)dataSourceClassForBundleID:(id)arg1;
- (id)dataSourceForPluginPayload:(id)arg1;
- (void)dealloc;
- (id)existingDataSourceForMessageGUID:(id)arg1 bundleID:(id)arg2;
- (id)init;
- (void)insertDataSource:(id)arg1 forGUID:(id)arg2;
- (void)loadExtensionWithIdentifierIfNeeded:(id)arg1;
- (id)localParticipantIdentifierForAppID:(id)arg1 conversationID:(id)arg2;
- (void)pluginChatItem:(id)arg1 didRelenquishNonResuableController:(id)arg2 contextIdentifier:(id)arg3;
- (void)pluginChatItem:(id)arg1 didRelinquishReusableController:(id)arg2 contextIdentifier:(id)arg3;
- (id)recipientIDForRecipient:(id)arg1 appID:(id)arg2;
- (void)removePluginWithBundleID:(id)arg1;
- (void)setPluginEnabled:(BOOL)arg1 identifier:(id)arg2;
- (id)systemBundleIdentifierForPluginIdentifier:(id)arg1;

@end

