//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenTimeCore/STPersistenceControllerProtocol-Protocol.h>

@class NSManagedObjectContext, NSMutableDictionary, NSPersistentContainer, NSPersistentStore, NSString;
@protocol OS_dispatch_queue;

@interface STPersistenceController : NSObject <STPersistenceControllerProtocol>
{
    NSObject *_lastPersistentHistoryTokenByStoreIdentifierLock;
    NSPersistentContainer *_persistentContainer;
    NSMutableDictionary *_lastPersistentHistoryTokenByStoreIdentifier;
    NSObject<OS_dispatch_queue> *_coreDataQueue;
}

@property (readonly) NSPersistentStore *cloudStore;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *coreDataQueue; // @synthesize coreDataQueue=_coreDataQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasStoreLoaded;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSMutableDictionary *lastPersistentHistoryTokenByStoreIdentifier; // @synthesize lastPersistentHistoryTokenByStoreIdentifier=_lastPersistentHistoryTokenByStoreIdentifier;
@property (readonly) NSPersistentStore *localStore;
@property (strong, nonatomic) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSManagedObjectContext *viewContext;

- (void).cxx_destruct;
- (void)_logAboutMissingStoreName:(id)arg1;
- (void)_persistentStoreCoordinatorStoresDidChange:(id)arg1;
- (void)_remotePersistentStoreDidChange:(id)arg1;
- (id)descriptionForPersistentStore:(id)arg1;
- (id)init;
- (id)initWithPersistentContainer:(id)arg1;
- (id)localPersistentStoreMetadataValueForKey:(id)arg1;
- (id)newBackgroundContext;
- (void)performBackgroundTask:(CDUnknownBlockType)arg1;
- (void)performBackgroundTaskAndWait:(CDUnknownBlockType)arg1;
- (id)persistentHistoryTokenForStore:(id)arg1;
- (void)savePersistentHistoryToken:(id)arg1 forStore:(id)arg2;
- (void)setLocalPersistentStoreValue:(id)arg1 forKey:(id)arg2;

@end

