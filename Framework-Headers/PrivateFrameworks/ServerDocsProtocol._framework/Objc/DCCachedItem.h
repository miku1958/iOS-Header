//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ServerDocsProtocol/DCCachedItem-Protocol.h>

@class DCFullPath, DCRelativePath, DCService, NSData, NSDate, NSDictionary;

@interface DCCachedItem : NSObject <DCCachedItem>
{
    DCRelativePath *_path;
    NSData *_documentIdentifier;
    BOOL _hasBeenRemoved;
    DCService *_service;
}

@property (readonly, strong) NSData *documentIdentifier;
@property (readonly) BOOL existsOnDisk;
@property (readonly, strong) DCFullPath *fullPath;
@property (readonly) BOOL isContentsUpToDate;
@property (readonly) BOOL isRemoteMetadataUpToDate;
@property (readonly) BOOL isRoot;
@property (readonly) BOOL isUpToDate;
@property (strong) NSDate *lastDownloadDate;
@property (readonly, strong) NSDate *lastRemoteMetadataUpdate;
@property (readonly, strong) NSData *lastRemoteMetadataVersionIdentifier;
@property (strong) NSDate *lastUploadDate;
@property (readonly, strong) NSDictionary *localMetadata;
@property (readonly, strong) NSDictionary *otherMetadata;
@property (readonly, strong) NSDictionary *parentContentsMetadata;
@property (readonly, strong) DCRelativePath *relativePath; // @synthesize relativePath=_path;
@property (readonly, strong) NSDictionary *remoteMetadata;
@property (readonly, strong) NSDictionary *remoteMetadataFromDisk;
@property (strong, nonatomic) DCService *service; // @synthesize service=_service;
@property (readonly, strong) NSData *versionIdentifier;

- (void).cxx_destruct;
- (void)_clearRemoteMetadataOnDiskWithDocumentIdentifier:(id)arg1 versionIdentifier:(id)arg2;
- (void)_clearRemoteMetadataWithDocumentIdentifier:(id)arg1 versionIdentifier:(id)arg2;
- (id)_contents;
- (id)_contentsFullPath;
- (id)_dataKey;
- (id)_fileSystemMetadata;
- (id)_fileSystemMetadataWithoutNeedingLocking;
- (BOOL)_isUpToDateWithoutNeedingLocking;
- (id)_localGenerationIdentifier;
- (id)_localGenerationIdentifierFullPath;
- (id)_otherMetadataWithoutNeedingLocking;
- (id)_pathsKeyString;
- (id)_readDictionaryFromPath:(id)arg1;
- (BOOL)_replaceFileAtURL:(id)arg1 withData:(id)arg2 error:(id *)arg3;
- (BOOL)_replaceFileWithURL:(id)arg1 error:(id *)arg2;
- (void)_saveDictionary:(id)arg1 toPath:(id)arg2 previousVersionPath:(id)arg3;
- (void)_saveLastUpdateGenerationIdentifier;
- (void)_saveRemoteMetadataOnDisk:(id)arg1 documentIdentifier:(id)arg2 previousVersionIdentifier:(id)arg3;
- (void)_saveRootDocumentIdentifierOnDisk:(id)arg1;
- (void)_setLastRemoteMetadataUpdate:(id)arg1;
- (void)_setLastRemoteMetadataVersionIdentifier:(id)arg1;
- (void)_setOtherMetadataWithoutNeedingLocking:(id)arg1;
- (void)_setRemoteMetadataWithoutNeedingLocking:(id)arg1 error:(id *)arg2;
- (void)_setStoredLocalMetadataWithoutNeedingLocking:(id)arg1;
- (id)_storedLocalMetadata;
- (id)_storedLocalMetadataObjectForKey:(id)arg1;
- (id)_storedLocalMetadataWithoutNeedingLocking;
- (void)clearRemoteMetadata;
- (id)database;
- (id)debugDescription;
- (id)description;
- (BOOL)existsOnServer;
- (BOOL)hasBeenDownloaded;
- (BOOL)hasBeenRemoved;
- (BOOL)hasBeenUploaded;
- (id)initWithRelativePath:(id)arg1;
- (id)managedOtherMetadata;
- (BOOL)needsDownload;
- (BOOL)needsInitialDownload;
- (BOOL)needsInitialSynchronization;
- (BOOL)needsInitialUpload;
- (BOOL)needsUpload;
- (id)parent;
- (unsigned long long)relativeAge;
- (void)renameRelativePath:(id)arg1;
- (void)setHasBeenRemoved:(BOOL)arg1;
- (BOOL)updateDocumentIdentifier:(id)arg1;
- (void)updateItemFromResponseContainer:(id)arg1;

@end
