//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSProgress, NSString, PHImportOptions, PHImportResults, PHImportSource, PHPhotoLibrary, PLImportFileManager;
@protocol OS_dispatch_queue, PHImportServiceImporterDelegate;

@interface PHImporter : NSObject
{
    id<PHImportServiceImporterDelegate> _delegate;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_importQueue;
    unsigned char _importState;
    PLImportFileManager *_importFileManager;
    NSMutableDictionary *_downloadFolderUrlByImportIdentifier;
    NSMutableArray *_additionalDcimImportFolders;
    NSMutableDictionary *_parentFolderMapping;
    NSMutableArray *_downloadedRecords;
    BOOL _isCanceled;
    NSMutableDictionary *_folderByFolderPath;
    NSMutableDictionary *_containerPathByLocalIdentifier;
    NSMutableDictionary *_albumByAlbumPath;
    NSMutableDictionary *_albumRequestsByAlbumId;
    NSMutableDictionary *_folderRequestByFolderId;
    unsigned long long _importBatchSize;
    NSProgress *_progress;
    PHImportOptions *_options;
    PHImportResults *_results;
    PHPhotoLibrary *_library;
    NSString *_importSessionID;
    NSMutableSet *_importedBurstUUIDs;
    PHImportSource *_source;
}

@property (strong, nonatomic) NSString *importSessionID; // @synthesize importSessionID=_importSessionID;
@property (strong, nonatomic) NSMutableSet *importedBurstUUIDs; // @synthesize importedBurstUUIDs=_importedBurstUUIDs;
@property (strong, nonatomic) PHPhotoLibrary *library; // @synthesize library=_library;
@property (strong, nonatomic) PHImportOptions *options; // @synthesize options=_options;
@property (strong, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property (strong, nonatomic) PHImportResults *results; // @synthesize results=_results;
@property (strong, nonatomic) PHImportSource *source; // @synthesize source=_source;

+ (void)dumpImageData:(id)arg1;
+ (void)dumpMetadataForData:(id)arg1;
+ (void)importAssets:(id)arg1 fromImportSource:(id)arg2 intoLibrary:(id)arg3 withOptions:(id)arg4 progress:(id *)arg5 delegate:(id)arg6 atEnd:(CDUnknownBlockType)arg7;
- (void).cxx_destruct;
- (void)_applyFastVideoModernizationToRecord:(id)arg1;
- (void)_importRecord:(id)arg1 createdAlbumIdentifiers:(id)arg2 createdFolderIdentifiers:(id)arg3;
- (id)_recordsToImportWithCount:(unsigned long long)arg1;
- (void)addDescriptionPropertiesFromImportAsset:(id)arg1 toCreationRequest:(id)arg2;
- (void)addLibraryPropertiesFromImportAssetBundleAsset:(id)arg1 toCreationRequest:(id)arg2;
- (void)addRecordToResults:(id)arg1;
- (id)beginImport:(id)arg1;
- (void)cancellationHandler;
- (id)createAlbumForPath:(id)arg1 inFolder:(id)arg2 error:(id *)arg3;
- (id)createFolderForPath:(id)arg1 inFolder:(id)arg2 error:(id *)arg3;
- (void)downloadNextAssetInRecord:(id)arg1 toURL:(id)arg2 subRecordEnumerator:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)ensureContainersExistForAlbumPath:(id)arg1 forAsset:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)finishImport;
- (id)folderChangeRequestForFolder:(id)arg1;
- (id)getDestinationUrlForImportAsset:(id)arg1;
- (BOOL)handleErrorsForRecord:(id)arg1 batch:(id)arg2 file:(char *)arg3 line:(int)arg4;
- (void)importNextAsset:(id)arg1;
- (void)importRecords:(id)arg1;
- (void)importRecords:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importedBurstAsset:(id)arg1;
- (id)initWithLibrary:(id)arg1 options:(id)arg2 source:(id)arg3 delegate:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)makeDownloadUrlForParentFolderPath:(id)arg1;
- (id)relativePathComponentsForAlbumPath:(id)arg1 fromRootPath:(id)arg2;
- (id)removeImportDirectoryForLibrary:(id)arg1;
- (BOOL)shouldImportRecordAsReference:(id)arg1;
- (BOOL)shouldIngestInPlace:(id)arg1;
- (void)updateAlbumCacheWithAlbumIdentifiers:(id)arg1;
- (void)updateFolderCacheWithFolders:(id)arg1;
- (void)validateSourceForAsset:(id)arg1;

@end
