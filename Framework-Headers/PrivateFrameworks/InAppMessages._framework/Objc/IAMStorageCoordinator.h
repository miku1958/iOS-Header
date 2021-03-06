//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <InAppMessages/IAMMessageEntryProviderDelegate-Protocol.h>

@class IAMICStorageProvider, NSSet, NSString;
@protocol IAMMessageEntryProvider, IAMMessageMetadataStorage, IAMPropertyStorage, IAMStorageCoordinatorDelegate;

@interface IAMStorageCoordinator : NSObject <IAMMessageEntryProviderDelegate>
{
    id<IAMMessageEntryProvider> _messageEntryProvider;
    id<IAMMessageMetadataStorage> _messageMetadataStorage;
    id<IAMPropertyStorage> _propertyStorage;
    NSSet *_messageBundleIdentifiers;
    IAMICStorageProvider *_iTunesCloudStorageProvider;
    id<IAMStorageCoordinatorDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IAMStorageCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) IAMICStorageProvider *iTunesCloudStorageProvider; // @synthesize iTunesCloudStorageProvider=_iTunesCloudStorageProvider;
@property (readonly) Class superclass;

+ (id)_propertyNameForGlobalPresentationPolicyGroupLastDisplayTime:(int)arg1;
- (void).cxx_destruct;
- (void)_fetchLastDisplayTimeForGlobalPresentationPolicyGroup:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchMessageEntries:(CDUnknownBlockType)arg1;
- (void)_fetchMessagesMetadata:(CDUnknownBlockType)arg1;
- (void)_updateLastDisplayTime:(id)arg1 forGlobalPresentationPolicyGroup:(int)arg2;
- (void)downloadResourcesForMessageEntry:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchGlobalPresentationPolicyGroupDisplayTimes:(CDUnknownBlockType)arg1;
- (void)fetchMessagesEntriesAndMetadata:(CDUnknownBlockType)arg1;
- (id)initWithMessageEntryProvider:(id)arg1 messageMetadataStorage:(id)arg2 propertyStorage:(id)arg3 messageBundleIdentifiers:(id)arg4;
- (void)messageEntriesDidChange:(id)arg1;
- (void)removeMessageEntry:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reportEventForMessageIdentifier:(id)arg1 withParams:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateLastDisplayTimeGlobalPresentationPolicyGroupNormal:(id)arg1;
- (void)updateLastDisplayTimeGlobalPresentationPolicyGroupRestricted:(id)arg1;
- (void)updateMetadata:(id)arg1 forMessageEntry:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

