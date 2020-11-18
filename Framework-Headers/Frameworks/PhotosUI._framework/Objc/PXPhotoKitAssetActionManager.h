//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXAssetActionManager.h>

#import <PhotosUICore/PXActivityActionDelegate-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSString, PHPerson, PXAssetActionPerformer, PXPhotoKitAssetsDataSourceManager, PXPhotoKitImportStatusManager, PXPhotosDataSource;

@interface PXPhotoKitAssetActionManager : PXAssetActionManager <PXActivityActionDelegate>
{
    PXPhotoKitAssetsDataSourceManager *_dataSourceManager;
    PXPhotoKitImportStatusManager *_importStatusManager;
    NSString *_importSessionID;
    PHPerson *_person;
    NSMutableDictionary *__performerClassByType;
    NSMapTable *__actionTypeByBarButtonItem;
    PXAssetActionPerformer *__activePerformer;
}

@property (readonly, nonatomic) NSMapTable *_actionTypeByBarButtonItem; // @synthesize _actionTypeByBarButtonItem=__actionTypeByBarButtonItem;
@property (strong, nonatomic, setter=_setActivePerformer:) PXAssetActionPerformer *_activePerformer; // @synthesize _activePerformer=__activePerformer;
@property (readonly, nonatomic) PXPhotosDataSource *_dataSourceSnapshot;
@property (readonly, nonatomic) NSMutableDictionary *_performerClassByType; // @synthesize _performerClassByType=__performerClassByType;
@property (strong, nonatomic) PXPhotoKitAssetsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *importSessionID; // @synthesize importSessionID=_importSessionID;
@property (strong, nonatomic) PXPhotoKitImportStatusManager *importStatusManager; // @synthesize importStatusManager=_importStatusManager;
@property (strong, nonatomic) PHPerson *person; // @synthesize person=_person;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleActionPerformerComplete:(id)arg1 success:(BOOL)arg2 error:(id)arg3;
- (void)_handleBarButtonItem:(id)arg1;
- (void)_handlePreviewAction:(id)arg1 actionType:(id)arg2;
- (id)_selectionSnapshotForPerfomerClass:(Class)arg1 applySubsetIfNeeded:(BOOL)arg2;
- (id)actionPerformerForActionType:(id)arg1;
- (id)activityForActionType:(id)arg1;
- (id)alertActionForActionType:(id)arg1;
- (id)barButtonItemForActionType:(id)arg1;
- (BOOL)canPerformActionType:(id)arg1;
- (BOOL)canPerformAssetVariationActions;
- (BOOL)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2;
- (void)executeActionForActionType:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)initWithSelectedObjectReference:(id)arg1 dataSourceManager:(id)arg2;
- (id)initWithSelectionManager:(id)arg1;
- (id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2;
- (void)performActivity:(id)arg1;
- (id)previewActionForActionType:(id)arg1 image:(id)arg2;
- (void)registerPerformerClass:(Class)arg1 forType:(id)arg2;
- (BOOL)shouldEnableActionType:(id)arg1 onAsset:(id)arg2;

@end
