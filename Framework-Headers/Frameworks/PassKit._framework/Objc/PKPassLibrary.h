//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/PKPassLibraryExportedInterface-Protocol.h>

@class PKAsyncCache, PKXPCService;
@protocol NSObject, PKPassLibraryDelegate;

@interface PKPassLibrary : NSObject <PKPassLibraryExportedInterface>
{
    PKXPCService *_remoteService;
    PKPassLibrary *_remoteLibrary;
    id<NSObject> _remoteLibraryObserver;
    PKAsyncCache *_libraryCache;
    BOOL _usesExtendedInterface;
    id<PKPassLibraryDelegate> _delegate;
}

@property (nonatomic) id<PKPassLibraryDelegate> delegate; // @synthesize delegate=_delegate;

+ (void)endAutomaticPassPresentationSuppressionWithRequestToken:(unsigned long long)arg1;
+ (BOOL)isPassLibraryAvailable;
+ (BOOL)isPaymentPassActivationAvailable;
+ (BOOL)isSuppressingAutomaticPassPresentation;
+ (unsigned long long)requestAutomaticPassPresentationSuppressionWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)_activatePaymentPass:(id)arg1 withActivationCode:(id)arg2 activationData:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_applyDataAccessorToObject:(id)arg1;
- (void)_applyDataAccessorToObjects:(id)arg1;
- (CDUnknownBlockType)_errorHandlerWithCompletion:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_errorHandlerWithSemaphore:(id)arg1;
- (id)_extendedRemoteObjectProxy;
- (id)_extendedRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_extendedRemoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_extendedRemoteObjectProxyWithSemaphore:(id)arg1;
- (void)_getArchivedObjectWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_getPassWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_getPassesAndCatalogOfPassTypes:(unsigned long long)arg1 limitResults:(BOOL)arg2 withRetries:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4;
- (BOOL)_hasRemoteLibrary;
- (id)_passesOfType:(unsigned long long)arg1 withRetries:(unsigned long long)arg2;
- (id)_passesWithRetries:(unsigned long long)arg1;
- (void)_postLibraryChangeWithUserInfo:(id)arg1;
- (id)_remoteObjectProxy;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;
- (void)activatePaymentPass:(id)arg1 withActivationCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)activatePaymentPass:(id)arg1 withActivationData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addFakeBulletin;
- (void)addPasses:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)archiveForObjectWithUniqueID:(id)arg1;
- (BOOL)canAddPassOfType:(unsigned long long)arg1;
- (BOOL)canAddPaymentPassWithPrimaryAccountIdentifier:(id)arg1;
- (void)catalogChanged:(id)arg1 withNewPasses:(id)arg2;
- (BOOL)containsPass:(id)arg1;
- (void)dealloc;
- (id)diffForPassBulletinWithRecordID:(id)arg1;
- (void)enabledValueAddedServicePassesWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchContentForUniqueID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchCurrentRelevantPassInfo:(CDUnknownBlockType)arg1;
- (void)fetchHasCandidatePasses:(CDUnknownBlockType)arg1;
- (void)fetchImageSetForUniqueID:(id)arg1 ofType:(long long)arg2 displayProfile:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)getContainmentStatusAndSettingsForPass:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getPassUniqueIdentifiersForFieldProperties:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getPassesAndCatalog:(BOOL)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getPassesAndCatalogOfPassTypes:(unsigned long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getPassesWithUniqueIdentifiers:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)getRouteRelevantPassesFromLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)hasInAppPaymentPassesForNetworks:(id)arg1 capabilities:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)hasInAppPaymentPassesForNetworks:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)hasInAppPrivateLabelPaymentPassesForApplicationIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (BOOL)hasPassesOfType:(unsigned long long)arg1;
- (void)inAppPaymentPassesForNetworks:(id)arg1 capabilities:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)inAppPaymentPassesForNetworks:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)inAppPrivateLabelPaymentPassesForApplicationIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)ingestPassData:(id)arg1 settings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithMachServiceName:(id)arg1 resumeNotificationName:(id)arg2 extendedInterface:(BOOL)arg3;
- (void)introduceDatabaseIntegrityProblem;
- (BOOL)isPaymentPassActivationAvailable;
- (BOOL)isRemovingPassesOfType:(unsigned long long)arg1;
- (void)logDelayExitReasons;
- (BOOL)migrateData;
- (void)noteAccountChanged;
- (void)noteAccountDeleted;
- (void)noteObjectSharedWithUniqueID:(id)arg1;
- (void)notifyPassUsed:(id)arg1 fromSource:(long long)arg2;
- (void)nukeDatabaseAndExit;
- (void)openPaymentSetup;
- (void)passAdded:(id)arg1;
- (void)passRemoved:(id)arg1;
- (void)passUpdated:(id)arg1;
- (id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (id)passWithUniqueID:(id)arg1;
- (id)passes;
- (id)passesOfType:(unsigned long long)arg1;
- (void)recomputeRelevantPassesWithSearchMode:(long long)arg1;
- (id)remotePaymentPasses;
- (void)removePass:(id)arg1;
- (void)removePassWithUniqueID:(id)arg1;
- (void)removePassesOfType:(unsigned long long)arg1;
- (void)removingPassesOfType:(unsigned long long)arg1 didFinishWithSuccess:(BOOL)arg2;
- (void)removingPassesOfType:(unsigned long long)arg1 didUpdateWithProgress:(double)arg2;
- (BOOL)replacePassWithPass:(id)arg1;
- (void)requestContactlessInterfaceSuppressionFromUserWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestUpdateOfObjectWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendUserEditedCatalog:(id)arg1;
- (void)shuffleGroups:(int)arg1;
- (void)updateSettings:(unsigned long long)arg1 forObjectWithUniqueID:(id)arg2;

@end
