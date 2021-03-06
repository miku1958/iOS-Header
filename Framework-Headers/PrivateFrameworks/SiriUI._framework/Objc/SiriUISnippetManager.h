//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AFClientPluginManager, NSDictionary;
@protocol OS_dispatch_queue;

@interface SiriUISnippetManager : NSObject
{
    AFClientPluginManager *_pluginManager;
    NSDictionary *_snippetExtensionsCache;
    NSObject<OS_dispatch_queue> *_snippetExtensionsQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)_compareObject:(id)arg1 toObject:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)_createDebugViewControllerForAceObject:(id)arg1;
- (BOOL)_listItem:(id)arg1 isEqualToListItem:(id)arg2;
- (BOOL)_listItem:(id)arg1 isPreferredOverListItem:(id)arg2;
- (void)_prewarmSnippetExtensionsCacheSynchronously;
- (id)_snippetExtensionsCache;
- (id)disambiguationItemForListItem:(id)arg1 disambiguationKey:(id)arg2;
- (id)extensionForSnippet:(id)arg1;
- (id)filteredDisambiguationListItems:(id)arg1;
- (id)init;
- (id)listItemToPickInAutodisambiguationForListItems:(id)arg1;
- (void)preloadPluginBundles;
- (void)prewarmSnippetExtensionsCache;
- (id)snippetViewControllerForSnippet:(id)arg1;
- (id)speakableProviderForObject:(id)arg1;
- (id)transcriptItemForObject:(id)arg1;
- (id)transcriptItemForObject:(id)arg1 sizeClass:(long long)arg2;

@end

