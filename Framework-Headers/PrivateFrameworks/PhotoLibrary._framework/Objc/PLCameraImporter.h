//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PhotoLibrary/ICCameraDeviceDelegate-Protocol.h>
#import <PhotoLibrary/ICDeviceDelegate-Protocol.h>

@class ICCameraDevice, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, PLCameraImportQueue, PLImportFileManager, PLMutableCameraImportQueue;
@protocol PLCameraImporterDelegate;

@interface PLCameraImporter : NSObject <ICDeviceDelegate, ICCameraDeviceDelegate>
{
    id _delegate;
    NSMutableDictionary *_itemsMapping;
    NSMutableArray *_items;
    PLMutableCameraImportQueue *_thumbnailQueue;
    PLCameraImportQueue *_downloadQueue;
    PLCameraImportQueue *_importQueue;
    PLCameraImportQueue *_deleteQueue;
    NSMutableArray *_orphanItems;
    NSMutableArray *_coalescedDeletedItems;
    BOOL _importInProgress;
    NSMutableDictionary *_parentFolderMapping;
    BOOL _autosplitEvents;
    long long _eventSplitGranularity;
    ICCameraDevice *_camera;
    PLImportFileManager *_importFileManager;
    BOOL _stopAfterNextItemImport;
    BOOL _importItemInProgress;
    NSMutableSet *_avalanchesImported;
    BOOL _isAppleDevice;
    NSString *importSessionIdentifier;
}

@property (strong, nonatomic) ICCameraDevice *camera; // @synthesize camera=_camera;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<PLCameraImporterDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *importSessionIdentifier; // @synthesize importSessionIdentifier;
@property (nonatomic) BOOL isAppleDevice; // @synthesize isAppleDevice=_isAppleDevice;
@property (strong, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property (strong, nonatomic) NSMutableDictionary *itemsMapping; // @synthesize itemsMapping=_itemsMapping;
@property (readonly) Class superclass;

- (void)_addImportItemFromCameraFile:(id)arg1;
- (void)_clearImportItemsForDownload:(id)arg1;
- (void)_coalescedRemoveImportItems;
- (void)_deleteImportItemFromDisk:(id)arg1;
- (void)_deleteImportItems:(id)arg1;
- (void)_deleteImportItemsFromDiskInBackground:(id)arg1;
- (void)_didFinishDeletingItems:(id)arg1;
- (void)_didFinishImportingItems:(id)arg1;
- (void)_downloadImportItems:(id)arg1;
- (void)_photoLibraryFinishedImportForPhoto:(id)arg1 atPath:(id)arg2 error:(id)arg3;
- (void)_removeImportItemsAtPathsInBackground:(id)arg1;
- (void)_separateItems:(id)arg1 intoEventsWithGranularity:(long long)arg2;
- (void)_stopImport;
- (void)addImportItemsFromCameraFiles:(id)arg1;
- (id)allImportItems;
- (unsigned long long)approximateBytesRequiredToImportItem:(id)arg1;
- (void)camaraDidEnumerateContents;
- (void)cameraDevice:(id)arg1 didAddItems:(id)arg2;
- (void)cameraDevice:(id)arg1 didReceiveMetadata:(id)arg2 forItem:(id)arg3 error:(id)arg4;
- (void)cameraDevice:(id)arg1 didReceiveThumbnail:(struct CGImage *)arg2 forItem:(id)arg3 error:(id)arg4;
- (void)cameraDevice:(id)arg1 didRemoveItems:(id)arg2;
- (void)cameraDidError:(id)arg1;
- (id)cameraKind;
- (id)cameraName;
- (unsigned long long)contentPercentCompleted;
- (void)dealloc;
- (void)device:(id)arg1 didCloseSessionWithError:(id)arg2;
- (void)device:(id)arg1 didEncounterError:(id)arg2;
- (void)device:(id)arg1 didOpenSessionWithError:(id)arg2;
- (void)deviceDidBecomeReady:(id)arg1;
- (BOOL)deviceIsLocked;
- (void)didConnectToCamera:(id)arg1 error:(id)arg2;
- (void)didDisconnectFromCamera:(id)arg1 error:(id)arg2;
- (void)didDownloadFile:(id)arg1 error:(id)arg2 options:(id)arg3 contextInfo:(void *)arg4;
- (void)didImportImportItem:(id)arg1 error:(id)arg2;
- (void)didReceiveImportNotification:(id)arg1;
- (void)didReceiveMetadata:(id)arg1 forCameraFile:(id)arg2 error:(id)arg3;
- (void)didReceiveThumbnail:(struct CGImage *)arg1 forCameraFile:(id)arg2 error:(id)arg3;
- (void)didReceiveThumbnail:(struct CGImage *)arg1 forImportItem:(id)arg2 error:(id)arg3;
- (void)didRemoveDevice:(id)arg1;
- (void)ejectCamera;
- (unsigned long long)estimatedNumberOfItems;
- (void)importImportItem:(id)arg1;
- (id)importItemForCameraFile:(id)arg1;
- (void)importItems:(id)arg1;
- (id)initWithDevice:(id)arg1 delegate:(id)arg2;
- (BOOL)isImporting;
- (void)readImportItems;
- (void)readMetadataForImportItems:(id)arg1;
- (void)readThumbnailsForImportItems:(id)arg1;
- (void)removeImportItemsForCameraFiles:(id)arg1;
- (void)removeItems:(id)arg1;
- (void)stopImport;

@end
