//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIDocument.h>

#import <TSReading/TSADocumentRootDelegate-Protocol.h>
#import <TSReading/TSKDocumentRootProvider-Protocol.h>
#import <TSReading/TSPObjectContextDelegate-Protocol.h>

@class NSObject, NSString, NSURL, SFUCryptoKey, TIADocumentInfo, TSADocumentRoot, TSPObjectContext;
@protocol NSFilePresenter, OS_dispatch_queue, TIADocumentPassphraseDelegate;

@interface TIADocument : UIDocument <TSADocumentRootDelegate, TSKDocumentRootProvider, TSPObjectContextDelegate>
{
    int _hasPersistenceErrors;
    TSADocumentRoot *_documentRootForDocumentDidLoad;
    TSADocumentRoot *_suspendedDocumentRoot;
    TSPObjectContext *_context;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSObject<OS_dispatch_queue> *_ioOperationQueue;
    id _documentStateChangedObserver;
    BOOL _passwordEntryWasAbandoned;
    BOOL _isShowingConflictResolutionSheet;
    BOOL _isClosingWithoutSaving;
    BOOL _isReadOnly;
    BOOL _documentNeedsDownloadOnRevert;
    BOOL _documentRevertWasAbandoned;
    TIADocumentInfo *_documentInfo;
    id<TIADocumentPassphraseDelegate> _passphraseDelegate;
    SFUCryptoKey *_encryptionKey;
    NSString *_sourcePathForNondestructiveImport;
    TSPObjectContext *_contextForRevert;
    NSURL *_templateURL;
}

@property (readonly, nonatomic) BOOL areNewExternalReferencesToDataAllowed;
@property (strong, nonatomic) TSPObjectContext *context; // @synthesize context=_context;
@property (strong, nonatomic) TSPObjectContext *contextForRevert; // @synthesize contextForRevert=_contextForRevert;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *defaultDraftName;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *documentCachePath;
@property (strong, nonatomic) TIADocumentInfo *documentInfo; // @synthesize documentInfo=_documentInfo;
@property (readonly) BOOL documentNeedsDownloadOnRevert; // @synthesize documentNeedsDownloadOnRevert=_documentNeedsDownloadOnRevert;
@property (copy, nonatomic) NSString *documentPasswordHint;
@property (readonly) BOOL documentRevertWasAbandoned; // @synthesize documentRevertWasAbandoned=_documentRevertWasAbandoned;
@property (readonly, strong, nonatomic) TSADocumentRoot *documentRoot;
@property (strong, nonatomic) SFUCryptoKey *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
@property (readonly, nonatomic) id<NSFilePresenter> filePresenter;
@property (readonly) BOOL hasPersistenceErrors;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL ignoreDocumentSupport;
@property (readonly, nonatomic) BOOL isClosed;
@property BOOL isClosingWithoutSaving; // @synthesize isClosingWithoutSaving=_isClosingWithoutSaving;
@property (readonly, nonatomic) BOOL isDocumentSupportTemporary;
@property (readonly, nonatomic) BOOL isPasswordProtected;
@property BOOL isReadOnly; // @synthesize isReadOnly=_isReadOnly;
@property (readonly) BOOL isShowingConflictResolutionSheet; // @synthesize isShowingConflictResolutionSheet=_isShowingConflictResolutionSheet;
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) id<TIADocumentPassphraseDelegate> passphraseDelegate; // @synthesize passphraseDelegate=_passphraseDelegate;
@property (readonly) BOOL passwordEntryWasAbandoned; // @synthesize passwordEntryWasAbandoned=_passwordEntryWasAbandoned;
@property (readonly) BOOL shouldHideForSnapshots;
@property (strong, nonatomic) NSString *sourcePathForNondestructiveImport; // @synthesize sourcePathForNondestructiveImport=_sourcePathForNondestructiveImport;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSURL *templateURL; // @synthesize templateURL=_templateURL;

- (BOOL)_shouldPreventFileProtectionUpgradeToLevel:(id)arg1;
- (id)additionalDocumentPropertiesForWrite;
- (void)closeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)contentsForType:(id)arg1 error:(id *)arg2;
- (void)context:(id)arg1 didDownloadDocumentResources:(id)arg2 failedOrCancelledDocumentResources:(id)arg3 error:(id)arg4;
- (void)coordinatedReadUsingAccessor:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)decryptedDocumentWithKey:(id)arg1;
- (void)documentDidLoad;
- (id)documentUUID;
- (BOOL)hasUnsavedChanges;
- (id)initWithTemporaryFileURL:(id)arg1;
- (id)newExporterForType:(id)arg1 options:(id)arg2 preferredType:(id *)arg3;
- (void)p_performSynchronousBlockOnMainThread:(CDUnknownBlockType)arg1;
- (id)packageDataForWrite;
- (void)passwordStateDidChange;
- (id)persistenceWarningsForData:(id)arg1 isReadable:(BOOL)arg2 isExternal:(BOOL)arg3;
- (void)setDocumentFileProtectionTo:(id)arg1;
- (void)setEncryptionKeyWithPassphrase:(id)arg1;
- (void)setFileProtectionTo:(id)arg1 atPath:(id)arg2;
- (BOOL)shouldAbandonDocumentRevert;
- (BOOL)validatePassphrase:(id)arg1;

@end

