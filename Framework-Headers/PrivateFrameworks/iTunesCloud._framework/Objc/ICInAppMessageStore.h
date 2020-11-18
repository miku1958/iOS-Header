//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ICInAppMessageStore : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_messageEntryCache;
    NSMutableDictionary *_globalPropertyCache;
    NSMutableDictionary *_applicationPropertyCache;
    NSMutableDictionary *_messageMetadataCache;
    NSMutableArray *_pendingEvents;
    NSString *_filePath;
}

- (void).cxx_destruct;
- (void)_commit;
- (id)_defaultStoreFilePath;
- (void)_load;
- (void)addMessageEntry:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addPendingMessageEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)allApplicationStorePropertiesWithCompletion:(CDUnknownBlockType)arg1;
- (void)allStorePropertiesWithCompletion:(CDUnknownBlockType)arg1;
- (void)getAllMessageEntriesForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAllMessageEntriesForBundleIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAllMessageEntriesWithCompletion:(CDUnknownBlockType)arg1;
- (void)getAllMetadataForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAllMetadataForBundleIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getMessageEntryWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getMetadataForMessageIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getStorePropertyForKey:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getStorePropertyForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithFilePath:(id)arg1;
- (void)pendingMessageEventsWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeAllMessageEntriesForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeAllMetadataForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeMessageEntry:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeMessageEntryWithIdentifier:(id)arg1 forBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeMetadataForMessageIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removePendingMessageEventWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetStoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateMessageEntry:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateMetadata:(id)arg1 messageIdentifier:(id)arg2 bundleIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateStoreProperty:(id)arg1 forKey:(id)arg2 bundleIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateStoreProperty:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
