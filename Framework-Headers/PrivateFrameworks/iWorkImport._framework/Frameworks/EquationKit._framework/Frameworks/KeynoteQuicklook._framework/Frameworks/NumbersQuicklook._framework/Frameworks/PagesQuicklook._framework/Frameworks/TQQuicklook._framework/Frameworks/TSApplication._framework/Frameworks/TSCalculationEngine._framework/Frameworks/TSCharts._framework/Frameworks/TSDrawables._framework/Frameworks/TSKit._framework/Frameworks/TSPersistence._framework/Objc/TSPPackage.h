//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSError, NSHashTable, NSString, SFUCryptoKey, TSPDocumentProperties, TSUZipFileArchive;
@protocol OS_dispatch_queue, TSPFileCoordinatorDelegate;

@interface TSPPackage : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    TSPDocumentProperties *_documentProperties;
    TSUZipFileArchive *_zipArchive;
    unsigned long long _additionalZipArchiveOptions;
    NSError *_lastReloadError;
    NSHashTable *_packageDatas;
    id<TSPFileCoordinatorDelegate> _fileCoordinatorDelegate;
    struct {
        unsigned int isLazyLoadingDocumentProperties:1;
        unsigned int isLazyLoadingZip:1;
    } _flags;
    unsigned char _packageIdentifier;
    BOOL _isClosed;
    SFUCryptoKey *_decryptionKey;
    unsigned long long _fileFormatVersion;
    unsigned long long _documentReadVersion;
}

@property (readonly) TSUZipFileArchive *componentZipArchive;
@property (readonly, nonatomic) SFUCryptoKey *decryptionKey; // @synthesize decryptionKey=_decryptionKey;
@property (readonly, nonatomic) TSPDocumentProperties *documentProperties;
@property (readonly, nonatomic) unsigned long long documentReadVersion; // @synthesize documentReadVersion=_documentReadVersion;
@property (readonly, weak, nonatomic) id<TSPFileCoordinatorDelegate> fileCoordinatorDelegate; // @synthesize fileCoordinatorDelegate=_fileCoordinatorDelegate;
@property (readonly, nonatomic) unsigned long long fileFormatVersion; // @synthesize fileFormatVersion=_fileFormatVersion;
@property (readonly, nonatomic) BOOL isClosed; // @synthesize isClosed=_isClosed;
@property (readonly, nonatomic) BOOL isPasswordProtected;
@property (readonly) NSError *lastReloadError;
@property (readonly, nonatomic) unsigned char packageIdentifier; // @synthesize packageIdentifier=_packageIdentifier;
@property (readonly, nonatomic) long long packageType;
@property (readonly, nonatomic) NSString *passwordHint;
@property (readonly, nonatomic) NSData *passwordVerifier;
@property (strong) TSUZipFileArchive *zipArchive;

+ (id)dataEntryPathForFilename:(id)arg1;
+ (BOOL)hasZipArchive;
+ (BOOL)isValidPackageAtURL:(id)arg1;
+ (BOOL)isZeroLengthFileOrEmptyDirectory:(id)arg1 isDirectory:(BOOL *)arg2;
+ (id)newLazyPackageWithURL:(id)arg1 packageIdentifier:(unsigned char)arg2 decryptionKey:(id)arg3 fileCoordinatorDelegate:(id)arg4;
+ (id)newPackageWithURL:(id)arg1 options:(unsigned long long)arg2 packageIdentifier:(unsigned char)arg3 decryptionKey:(id)arg4 fileCoordinatorDelegate:(id)arg5 error:(id *)arg6;
+ (id)objectArchiveEntryPathForPackageLocator:(id)arg1;
+ (unsigned long long)zipArchiveOptions;
+ (id)zipArchiveURLFromPackageURL:(id)arg1;
- (void).cxx_destruct;
- (BOOL)checkPassword:(id)arg1;
- (BOOL)containsData:(id)arg1;
- (void)copyComponent:(id)arg1 toPackageURL:(id)arg2 packageLocator:(id)arg3 zipFileWriter:(id)arg4 encryptionKey:(id)arg5 canLink:(BOOL)arg6 completion:(CDUnknownBlockType)arg7;
- (id)dataAtRelativePath:(id)arg1 allowDecryption:(BOOL)arg2 error:(id *)arg3;
- (void)didCloseDocument;
- (void)didReadDocumentReadVersion:(unsigned long long)arg1;
- (void)didReadFileFormatVersion:(unsigned long long)arg1;
- (void)didReferenceData:(id)arg1;
- (BOOL)didReloadZipArchive:(id)arg1 packageURL:(id)arg2 error:(id *)arg3;
- (void)didRetrieveDecryptionKey:(id)arg1;
- (void)enumerateDatasUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)hasDataAtRelativePath:(id)arg1;
- (id)init;
- (id)initWithPackageIdentifier:(unsigned char)arg1 documentProperties:(id)arg2 fileFormatVersion:(unsigned long long)arg3 decryptionKey:(id)arg4 fileCoordinatorDelegate:(id)arg5 isLazyLoading:(BOOL)arg6;
- (id)initWithURL:(id)arg1 zipArchiveOrNil:(id)arg2 zipArchiveOptions:(unsigned long long)arg3 packageIdentifier:(unsigned char)arg4 documentProperties:(id)arg5 decryptionKey:(id)arg6 fileCoordinatorDelegate:(id)arg7 error:(id *)arg8;
- (id)keyFromPassword:(id)arg1;
- (id)keyFromPassword:(id)arg1 passwordVerifier:(id)arg2;
- (id)newCompressionReadChannelWithReadChannel:(id)arg1 compressionAlgorithm:(long long)arg2;
- (id)newDataStorageAtRelativePath:(id)arg1 decryptionInfo:(id)arg2 packageURL:(id)arg3 lastModificationDate:(out id *)arg4;
- (id)newDocumentPropertiesWithURL:(id)arg1 zipProvider:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)newRawDataReadChannelAtRelativePath:(id)arg1;
- (id)newRawReadChannelForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(BOOL)arg2 error:(id *)arg3;
- (id)newReadChannelForComponentLocator:(id)arg1 compressionAlgorithm:(long long)arg2 isStoredOutsideObjectArchive:(BOOL)arg3 error:(id *)arg4;
- (id)newZipArchiveFromPackageURL:(id)arg1 isLazyLoading:(BOOL)arg2 error:(id *)arg3;
- (id)packageEntryInfoAtRelativePath:(id)arg1 error:(id *)arg2;
- (id)packageEntryInfoForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(BOOL)arg2;
- (void)peformSynchronousAccessToZipArchive:(CDUnknownBlockType)arg1;
- (void)prepareForDocumentReplacementWithSuccess:(BOOL)arg1 forSafeSave:(BOOL)arg2 originalURL:(id)arg3;
- (BOOL)reloadZipArchiveIfNeededWithURLImpl:(id)arg1 isLazyLoading:(BOOL)arg2 error:(id *)arg3;
- (void)removeAllDataReferences;

@end

