//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUImportActionCoordinatorDelegate-Protocol.h>
#import <PhotosUI/PXImportAssetsDataSourceManagerObserver-Protocol.h>
#import <PhotosUI/PXImportMediaProviderNotificationsReceiver-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString, PUImportActionCoordinator, PUImportPPTImportSource, PUTabbedLibraryViewController, PXImportAssetsDataSourceManager, PXImportController, PXImportMediaProvider;
@protocol OS_dispatch_semaphore;

@interface PUImportPPTDriver : NSObject <PXImportAssetsDataSourceManagerObserver, PXImportMediaProviderNotificationsReceiver, PUImportActionCoordinatorDelegate>
{
    CDUnknownBlockType _insertDatasourceReply;
    CDUnknownBlockType _thumbnailTestReply;
    CDUnknownBlockType _importToLibraryTestReply;
    NSMutableDictionary *_extraResults;
    PXImportAssetsDataSourceManager *_dataSourceManager;
    PXImportController *_importController;
    PUImportPPTImportSource *_currentImportSource;
    PXImportMediaProvider *_mediaProvider;
    PUImportActionCoordinator *_actionCoordinator;
    NSObject<OS_dispatch_semaphore> *_importSemaphore;
    BOOL _importComplete;
    long long _iteration;
    double _startTime;
    double _endTime;
    BOOL _loadingContentStarted;
    BOOL _hasSeenAbsolulteLastThumbnailMarker;
    PUTabbedLibraryViewController *_tabbedLibraryViewController;
    NSDictionary *_testOptions;
    NSDictionary *_options;
}

@property (readonly, nonatomic) NSDictionary *additionalResults;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) NSDictionary *options; // @synthesize options=_options;
@property (readonly) Class superclass;
@property (weak) PUTabbedLibraryViewController *tabbedLibraryViewController; // @synthesize tabbedLibraryViewController=_tabbedLibraryViewController;
@property (copy) NSDictionary *testOptions; // @synthesize testOptions=_testOptions;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (double)_contentLoadingCheckInterval;
- (void)_removeCurrentImportSourceIfNecessary;
- (void)_updateLoadingContentState;
- (void)actionCoordinator:(id)arg1 didCompleteWithImportSession:(id)arg2 results:(id)arg3;
- (void)actionCoordinatorDidBeginDelete:(id)arg1;
- (void)actionCoordinatorDidBeginImport:(id)arg1;
- (void)actionCoordinatorDidCancelImport:(id)arg1;
- (void)actionCoordinatorDidEndDelete:(id)arg1;
- (void)actionCoordinatorWillBeginDelete:(id)arg1;
- (void)actionCoordinatorWillBeginImport:(id)arg1;
- (id)importController;
- (id)importDestinationForActionCoordinator:(id)arg1;
- (id)importViewController;
- (id)init;
- (id)mediaProvider;
- (id)modelBatchesForOptions:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)ppt_insertImportDataSourceWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)ppt_mediaProviderDidProcessAsset:(id)arg1;
- (void)ppt_performDeleteWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)ppt_performImportToLibraryWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)ppt_performThumbnailWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)ppt_removeImportDataSourceWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)signalImportToLibraryTestReply:(BOOL)arg1;
- (void)signalInsertDatasourceReply:(BOOL)arg1;
- (void)signalThumbnailTestReply:(BOOL)arg1;

@end

