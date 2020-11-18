//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSPFileCoordinatorDelegate-Protocol.h>
#import <iWorkImport/TSPLazyReferenceDelegate-Protocol.h>
#import <iWorkImport/TSPObjectDelegate-Protocol.h>
#import <iWorkImport/TSPPassphraseConsumer-Protocol.h>
#import <iWorkImport/TSPSupportDirectoryDelegate-Protocol.h>

@class NSData, NSHashTable, NSMapTable, NSMutableArray, NSProgress, NSRecursiveLock, NSSet, NSString, NSURL, NSUUID, SFUCryptoKey, TSPCancellationState, TSPComponentManager, TSPDataDownloadManager, TSPDataManager, TSPDocumentMetadata, TSPDocumentProperties, TSPDocumentRevision, TSPDocumentSaveOperationState, TSPObject, TSPObjectContainer, TSPObjectUUIDMap, TSPPackage, TSPPackageWriteCoordinator, TSPRegistry, TSPResourceContext, TSPSupportManager, TSPSupportMetadata, TSUTemporaryDirectory;
@protocol NSFilePresenter, OS_dispatch_group, OS_dispatch_queue, TSPObjectContextDelegate;

__attribute__((visibility("hidden")))
@interface TSPObjectContext : NSObject <TSPFileCoordinatorDelegate, TSPLazyReferenceDelegate, TSPObjectDelegate, TSPSupportDirectoryDelegate, TSPPassphraseConsumer>
{
    _Atomic long long _lastObjectIdentifier;
    _Atomic long long _modifyObjectToken;
    _Atomic int _modifyObjectCount;
    _Atomic BOOL _didClose;
    unsigned int _mode;
    SFUCryptoKey *_decryptionKey;
    NSURL *_documentURL;
    TSPPackage *_documentPackage;
    TSPPackage *_supportPackage;
    NSURL *_supportURL;
    NSProgress *_readProgress;
    TSPCancellationState *_readCancellationState;
    TSPDocumentProperties *_documentProperties;
    NSMapTable *_objects;
    TSPObjectUUIDMap *_objectUUIDMap;
    TSPDocumentRevision *_documentRevision;
    long long _preferredPackageType;
    NSObject<OS_dispatch_queue> *_objectsQueue;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSRecursiveLock *_readLock;
    NSObject<OS_dispatch_queue> *_documentStateQueue;
    NSObject<OS_dispatch_queue> *_dataAttributesQueue;
    NSObject<OS_dispatch_queue> *_loadObserversQueue;
    NSObject<OS_dispatch_queue> *_runLoadObserversQueue;
    NSObject<OS_dispatch_queue> *_runLoadObserversForKnownObjectQueue;
    NSObject<OS_dispatch_queue> *_resourceAccessQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSProgress *_nextSaveProgress;
    TSPDocumentSaveOperationState *_saveOperationState;
    TSPPackageWriteCoordinator *_packageWriteCoordinator;
    NSHashTable *_objectsToIgnoreModifications;
    NSHashTable *_objectModifyDelegates;
    BOOL _isWaitingForEndSave;
    NSObject<OS_dispatch_group> *_pendingEndSaveGroup;
    NSObject<OS_dispatch_group> *_outstandingReadsGroup;
    NSObject<OS_dispatch_queue> *_temporaryDirectoryQueue;
    TSUTemporaryDirectory *_temporaryDirectory;
    struct unordered_map<const long long, NSMutableArray *, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, NSMutableArray *>>> _loadObservers;
    NSObject<OS_dispatch_queue> *_asynchronousObjectModifierQueue;
    NSHashTable *_asynchronousObjectModifiers;
    NSMutableArray *_suspendedAsynchronousObjectModifierStack;
    TSPObject *_supportObject;
    TSPPackageWriteCoordinator *_supportWriteCoordinator;
    NSHashTable *_objectProviders;
    NSObject<OS_dispatch_queue> *_objectProvidersQueue;
    struct {
        unsigned int delegateRespondsToAdditionalDocumentPropertiesForWrite:1;
        unsigned int delegateRespondsToAdditionalDocumentSupportPropertiesForWrite:1;
        unsigned int delegateRespondsToDocumentPasswordHintForWrite:1;
        unsigned int delegateRespondsToPackageDataForWrite:1;
        unsigned int delegateRespondsToAreNewExternalReferencesToDataAllowed:1;
        unsigned int delegateRespondsToAreExternalReferencesToDataAllowedAtURL:1;
        unsigned int delegateRespondsToBaseUUIDForObjectUUID:1;
        unsigned int delegateRespondsToPreserveDocumentRevisionIdentifierForSaveURL:1;
        unsigned int delegateRespondsToFilePresenter:1;
        unsigned int delegateRespondsToSupportDirectoryURLReturningIsUnique:1;
        unsigned int delegateRespondsToSupportDirectoryURL:1;
        unsigned int delegateRespondsToIgnoreDocumentSupport:1;
        unsigned int delegateRespondsToIsDocumentSupportTemporary:1;
        unsigned int delegateRespondsToShouldLoadAllComponents:1;
        unsigned int delegateRespondsToNewObjectUUID:1;
        unsigned int delegateRespondsToIsInCollaborationModeForContext:1;
        unsigned int delegateRespondsToIsInReadOnlyModeForContext:1;
        unsigned int delegateRespondsToIsCollaborationOfflineForContext:1;
        unsigned int delegateRespondsToDidCollaborationContextValidateWithServerForContext:1;
        unsigned int skipDocumentUpgrade:1;
    } _flags;
    BOOL _nested;
    BOOL _losesDataOnWrite;
    NSSet *_unsupportedFeatureIdentifiers;
    NSString *_documentPasswordHint;
    TSPObject *_documentObject;
    id<TSPObjectContextDelegate> _delegate;
    TSPRegistry *_registry;
    TSPComponentManager *_componentManager;
    TSPResourceContext *_resourceContext;
    TSPDataManager *_dataManager;
    TSPDataDownloadManager *_dataDownloadManager;
    TSPSupportManager *_supportManager;
    TSPObjectContainer *_documentObjectContainer;
    TSPObjectContainer *_supportObjectContainer;
    TSPDocumentMetadata *_documentMetadata;
    TSPSupportMetadata *_supportMetadata;
    unsigned long long _saveToken;
    NSData *_passwordVerifier;
}

@property (readonly) long long aggregateReadabilityForDocumentResources;
@property (readonly, nonatomic) BOOL areNewExternalReferencesToDataAllowed;
@property (readonly, nonatomic) TSPComponentManager *componentManager; // @synthesize componentManager=_componentManager;
@property (readonly, nonatomic) TSPObjectContext *context;
@property (readonly, nonatomic) TSPDataDownloadManager *dataDownloadManager; // @synthesize dataDownloadManager=_dataDownloadManager;
@property (readonly, nonatomic) TSPDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) SFUCryptoKey *decryptionKey;
@property (weak, nonatomic) id<TSPObjectContextDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL didCollaborationContextValidateWithServer;
@property (readonly, nonatomic) unsigned long long documentDataSize;
@property (readonly, nonatomic) TSPDocumentMetadata *documentMetadata; // @synthesize documentMetadata=_documentMetadata;
@property (readonly, nonatomic) TSPObject *documentObject; // @synthesize documentObject=_documentObject;
@property (readonly, nonatomic) TSPObjectContainer *documentObjectContainer; // @synthesize documentObjectContainer=_documentObjectContainer;
@property (readonly, nonatomic) TSPPackage *documentPackage;
@property (readonly, nonatomic) NSString *documentPasswordHint; // @synthesize documentPasswordHint=_documentPasswordHint;
@property (readonly, nonatomic) TSPDocumentProperties *documentProperties;
@property (strong) TSPDocumentRevision *documentRevision;
@property (readonly, nonatomic) unsigned long long documentSize;
@property (readonly, nonatomic) NSURL *documentURL;
@property (readonly, nonatomic) NSUUID *documentUUID;
@property (readonly, nonatomic) id<NSFilePresenter> filePresenter;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL ignoreDocumentResourcesWhileReading;
@property (readonly, nonatomic) BOOL ignoreDocumentSupport;
@property (readonly, nonatomic) BOOL ignoreUnknownContentWhileReading;
@property (readonly, nonatomic) BOOL ignoreVersionCheckingWhileReading;
@property (readonly, nonatomic) BOOL isCollaborationOffline;
@property (readonly, nonatomic) BOOL isDocumentModified;
@property (readonly, nonatomic) BOOL isDocumentSupportTemporary;
@property (readonly, nonatomic) BOOL isInReadOnlyMode;
@property (readonly, nonatomic) BOOL isPasswordProtected;
@property (readonly, nonatomic) BOOL isReadCancelled;
@property (readonly, nonatomic) BOOL isSupportModified;
@property (readonly, nonatomic) NSData *keychainGenericItem;
@property (nonatomic) long long lastObjectIdentifier;
@property (readonly, nonatomic) NSString *lastPasswordAttempted;
@property (readonly, nonatomic) BOOL losesDataOnWrite; // @synthesize losesDataOnWrite=_losesDataOnWrite;
@property (nonatomic) BOOL nested; // @synthesize nested=_nested;
@property (readonly, nonatomic) long long packageType;
@property (readonly, nonatomic) NSString *passphraseHint;
@property (readonly, nonatomic) NSData *passwordVerifier; // @synthesize passwordVerifier=_passwordVerifier;
@property long long preferredPackageType;
@property (readonly, nonatomic) TSPRegistry *registry; // @synthesize registry=_registry;
@property (readonly, nonatomic) BOOL requiresNetworkValidation;
@property (readonly, nonatomic) TSPResourceContext *resourceContext; // @synthesize resourceContext=_resourceContext;
@property (readonly, nonatomic) unsigned long long saveToken; // @synthesize saveToken=_saveToken;
@property (readonly) Class superclass;
@property (readonly, nonatomic) TSPSupportManager *supportManager; // @synthesize supportManager=_supportManager;
@property (readonly, nonatomic) TSPSupportMetadata *supportMetadata; // @synthesize supportMetadata=_supportMetadata;
@property (strong, nonatomic) TSPObject *supportObject;
@property (readonly, nonatomic) TSPObjectContainer *supportObjectContainer; // @synthesize supportObjectContainer=_supportObjectContainer;
@property (readonly, nonatomic) TSPPackage *supportPackage;
@property (readonly, nonatomic) NSSet *unsupportedFeatureIdentifiers; // @synthesize unsupportedFeatureIdentifiers=_unsupportedFeatureIdentifiers;
@property (readonly, nonatomic) NSUUID *versionUUID;

+ (id)documentRevisionAtURL:(id)arg1 passphrase:(id)arg2 error:(id *)arg3;
+ (BOOL)dumpMessagesForDocument:(id)arg1 decryptionKey:(id)arg2 toURL:(id)arg3;
+ (void)garbageCollectDocumentSupportWithKnownDocumentUUIDs:(id)arg1 delegate:(id)arg2;
+ (BOOL)isNativeDirectoryFormatURL:(id)arg1;
+ (BOOL)isNativeOrTangierEditingFormatURL:(id)arg1;
+ (BOOL)isNativeOrTangierEditingFormatURL:(id)arg1 hasNativeUTI:(BOOL)arg2;
+ (BOOL)isNativeOrTangierEditingFormatURL:(id)arg1 hasNativeUTI:(BOOL)arg2 nestedDocumentFilename:(id)arg3;
+ (BOOL)isTangierEditingFormatURL:(id)arg1;
+ (void)purgeSharedDocumentResourceCache;
+ (id)releaseQueue;
+ (void)removeDefaultSupportDirectory;
+ (id)supportBundleURLForDocumentUUID:(id)arg1 delegate:(id)arg2;
+ (void)waitForPendingEndSaveGroup:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)UUIDsFromObjects:(id)arg1;
- (void)addLoadObserver:(id)arg1 action:(SEL)arg2 forLazyReference:(id)arg3;
- (void)addLoadObserver:(id)arg1 action:(SEL)arg2 forObjectIdentifier:(long long)arg3 objectOrNil:(id)arg4;
- (id)addLoadedObjectsAndEnqueueNotifications:(id)arg1;
- (void)addObjectModifyDelegate:(id)arg1;
- (BOOL)areExternalReferencesSupported;
- (BOOL)areExternalReferencesToDataAllowedAtURL:(id)arg1;
- (id)baseUUIDForObjectUUID;
- (void)beginAssertOnModify;
- (void)beginIgnoringCachedObjectEviction;
- (void)beginIgnoringModificationsForObject:(id)arg1;
- (void)beginSaveToURL:(id)arg1 updateType:(long long)arg2 packageType:(long long)arg3;
- (void)beginSaveToURL:(id)arg1 updateType:(long long)arg2 packageType:(long long)arg3 documentUUID:(id)arg4;
- (void)beginWriteOperation;
- (void)beginWriteWithOriginalURL:(id)arg1;
- (void)beginWriteWithOriginalURL:(id)arg1 relativeURLForExternalData:(id)arg2;
- (void)canPerformUserActionUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)canSetObjectUUIDForObject:(id)arg1;
- (void)checkforDataWarningsWithPackageURL:(id)arg1;
- (void)close;
- (void)closeFromDealloc:(BOOL)arg1;
- (void)conditionallyPerformResourceAccessUsingQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)containsDataConformingToUTI:(id)arg1;
- (BOOL)continueReadingDocumentObjectFromPackageURL:(id)arg1 areExternalDataReferencesAllowed:(BOOL)arg2 error:(id *)arg3;
- (BOOL)copyIfAppropriateFromOriginalURL:(id)arg1 toURL:(id)arg2 apfsMode:(BOOL)arg3 originalPackage:(id)arg4 packageType:(long long)arg5;
- (void)createInternalMetadataIfNeeded;
- (id)currentPackageDataWriter;
- (id)dataWithContentsOfPackagePath:(id)arg1;
- (id)dataWithDigest:(id)arg1;
- (id)dataWithDigest:(id)arg1 preferredFilename:(id)arg2 canDownload:(BOOL)arg3 downloadPriority:(long long)arg4;
- (id)dataWithLegacyDataIdentifier:(long long)arg1;
- (void)dealloc;
- (id)deterministicObjectUUIDRelativeToObject:(id)arg1 offset:(unsigned long long)arg2;
- (BOOL)didFinishSuccessfullyReadingObjects:(id)arg1 readCoordinator:(id)arg2 finalizeHandlerQueue:(id)arg3;
- (void)didMoveSupportToURL:(id)arg1;
- (void)didMoveToURL:(id)arg1;
- (void)didReadDocumentObject:(id)arg1;
- (void)didReadSupportObject:(id)arg1;
- (unsigned long long)documentObjectSize;
- (id)documentResourceDataForDigestString:(id)arg1 locator:(id)arg2 filename:(id)arg3 canDownload:(BOOL)arg4;
- (id)documentRoot;
- (void)endAssertOnModify;
- (void)endIgnoringCachedObjectEviction;
- (void)endIgnoringModificationsForObject:(id)arg1;
- (void)endSaveWithSuccess:(BOOL)arg1;
- (void)endWriteOperation;
- (BOOL)endWriteWithSuccess:(BOOL)arg1 error:(id *)arg2;
- (void)enumerateDocumentResourcesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateObjectProvidersUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)estimatedProgressTotalUnitCountForURL:(id)arg1 packageType:(long long)arg2;
- (id)incrementDocumentRevisionWithIdentifier:(id)arg1;
- (long long)incrementLastObjectIdentifier:(long long)arg1;
- (id)init;
- (id)initForQuickLookWithURL:(id)arg1 registry:(id)arg2 delegate:(id)arg3 passphrase:(id)arg4 error:(id *)arg5;
- (id)initForSpotlightWithURL:(id)arg1 delegate:(id)arg2 registry:(id)arg3 error:(id *)arg4;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 registry:(id)arg2;
- (id)initWithPartialDocumentURL:(id)arg1 delegate:(id)arg2 passphrase:(id)arg3 error:(id *)arg4;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 error:(id *)arg3;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 mode:(unsigned int)arg3 passphrase:(id)arg4 skipDocumentUpgrade:(BOOL)arg5 error:(id *)arg6;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 passphrase:(id)arg3 error:(id *)arg4;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 passphrase:(id)arg3 skipDocumentUpgrade:(BOOL)arg4 error:(id *)arg5;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 registry:(id)arg3 mode:(unsigned int)arg4 passphrase:(id)arg5 skipDocumentUpgrade:(BOOL)arg6 error:(id *)arg7;
- (BOOL)isInCollaborationMode;
- (BOOL)isObjectInDocument:(id)arg1;
- (long long)modifyObjectTokenForNewObject;
- (long long)newObjectIdentifier;
- (id)newObjectUUIDForObject:(id)arg1;
- (id)objectForIdentifier:(long long)arg1;
- (id)objectLocale;
- (id)objectUUIDMap;
- (id)objectWithUUID:(id)arg1;
- (id)objectWithUUID:(id)arg1 onlyIfLoaded:(BOOL)arg2 validateNewObjects:(BOOL)arg3 identifier:(long long *)arg4;
- (id)objectWithUUIDIfAvailable:(id)arg1;
- (id)objectWithUUIDIfAvailableAndLoaded:(id)arg1;
- (id)objectWithUUIDPath:(id)arg1;
- (id)objectsFromUUIDs:(id)arg1;
- (void)performAsynchronousWriteOperationOnDataAttributes:(CDUnknownBlockType)arg1;
- (void)performAsynchronousWriteOperationOnDocumentState:(CDUnknownBlockType)arg1;
- (void)performReadOperation:(CDUnknownBlockType)arg1;
- (void)performReadOperationOnDataAttributes:(CDUnknownBlockType)arg1;
- (void)performReadOperationOnDocumentState:(CDUnknownBlockType)arg1;
- (void)performReadOperationOnKnownObjects:(CDUnknownBlockType)arg1;
- (void)performReadUsingAccessor:(CDUnknownBlockType)arg1;
- (void)performReadUsingAccessorImpl:(CDUnknownBlockType)arg1;
- (id)performResourceAccessUsingQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)prepareForDocumentReplacement;
- (void)prepareForDocumentReplacementWithSuccess:(BOOL)arg1 forSafeSave:(BOOL)arg2;
- (id)prepareSaveProgress;
- (void)prepareToReadSupportObjectExternalDataReferencesAllowed:(BOOL)arg1 accessor:(CDUnknownBlockType)arg2;
- (void)proxyObjectMapping:(id)arg1 willProxyReferencedObject:(id)arg2;
- (BOOL)readComponent:(id)arg1 isWeakReference:(BOOL)arg2 documentPackage:(id)arg3 supportPackage:(id)arg4 rootObject:(id *)arg5 allObjects:(id *)arg6 error:(id *)arg7;
- (BOOL)readComponent:(id)arg1 isWeakReference:(BOOL)arg2 rootObject:(id *)arg3 allObjects:(id *)arg4 error:(id *)arg5;
- (BOOL)readDocumentObjectFromDatabasePackageURL:(id)arg1 error:(id *)arg2;
- (BOOL)readDocumentObjectFromPackageURL:(id)arg1 error:(id *)arg2;
- (BOOL)readLazyReference:(id)arg1 object:(id *)arg2 error:(id *)arg3;
- (BOOL)readObjectForIdentifier:(long long)arg1 isWeakReference:(BOOL)arg2 rootObjectComponent:(id)arg3 object:(id *)arg4 error:(id *)arg5;
- (id)readObjectIfNeededForIdentifier:(long long)arg1 isWeakReference:(BOOL)arg2 componentIdentifier:(long long)arg3;
- (BOOL)readWithReadCoordinator:(id)arg1 finalizeHandlerQueue:(id)arg2 rootObject:(id *)arg3 error:(id *)arg4 readCompletion:(CDUnknownBlockType)arg5;
- (void)registerAsynchronousObjectModifier:(id)arg1;
- (void)registerObjectProvider:(id)arg1;
- (void)removeObjectModifyDelegate:(id)arg1;
- (void)replaceDocumentObject:(id)arg1;
- (void)requestAutosave;
- (void)requestAutosaveForExpensiveCalculation;
- (void)resetDocumentRevision;
- (void)resumeAsynchronousModifications;
- (void)resumeAutosaveWithReason:(id)arg1;
- (void)resumeLoadingModifiedFlushedComponents;
- (void)resumeSaveAndAutosaveWithReason:(id)arg1;
- (BOOL)saveToURL:(id)arg1 packageType:(long long)arg2 encryptionKey:(id)arg3 originalURL:(id)arg4 error:(id *)arg5;
- (BOOL)setDecryptionKey:(id)arg1;
- (void)setDocumentObject:(id)arg1;
- (BOOL)setPassphrase:(id)arg1;
- (void)setSupportObjectImpl:(id)arg1;
- (BOOL)shouldLoadAllComponentsForDocumentURL:(id)arg1;
- (BOOL)shouldUseAPFSModeToWriteToURL:(id)arg1 originalURL:(id)arg2;
- (id)supportDirectoryURLReturningIsBundleURL:(BOOL *)arg1;
- (void)suspendAsynchronousModificationsForObjectTargetType:(unsigned long long)arg1;
- (void)suspendAutosaveWithReason:(id)arg1;
- (void)suspendLoadingModifiedFlushedComponentsAndWait;
- (void)suspendSaveAndAutosaveWithReason:(id)arg1;
- (id)temporaryDirectory;
- (void)updateAdditionalResourceRequests;
- (BOOL)updateDocumentUUIDPreserveOriginalDocumentSupport:(BOOL)arg1 preserveShareUUID:(BOOL)arg2 error:(id *)arg3;
- (long long)updateModifyObjectToken;
- (void)waitForSaveToFinishIfNeeded;
- (void)willModifyObject:(id)arg1 duringReadOperation:(BOOL)arg2;
- (BOOL)writeToURL:(id)arg1 encryptionKey:(id)arg2 error:(id *)arg3;
- (BOOL)writeToURL:(id)arg1 originalPackage:(id)arg2 supportURL:(id)arg3 originalSupportPackage:(id)arg4 encryptionKey:(id)arg5 error:(id *)arg6;

@end

