//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXBarsController.h>

#import <PhotosUICore/PXActionPerformerDelegate-Protocol.h>
#import <PhotosUICore/PXAssetCollectionActionPerformerDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXPhotosGridActionPerformerDelegate-Protocol.h>
#import <PhotosUICore/PXPhotosGridOptionsControllerDelegate-Protocol.h>
#import <PhotosUICore/PXSettingsKeyObserver-Protocol.h>

@class NSArray, NSMapTable, NSString, PLDateRangeFormatter, PXActionPerformer, PXAssetSelectionTypeCounter, PXMiroMoviePresenter, PXPhotosBarButtonItemsController, PXPhotosGridActionMenuController, PXPhotosUIViewController, PXPhotosViewModel;

@interface PXPhotosBarsController : PXBarsController <PXChangeObserver, PXActionPerformerDelegate, PXPhotosGridActionPerformerDelegate, PXPhotosGridOptionsControllerDelegate, PXAssetCollectionActionPerformerDelegate, PXSettingsKeyObserver>
{
    NSArray *_leftBarButtonItemIdentifiers;
    NSArray *_rightBarButtonItemIdentifiers;
    NSArray *_toolbarItemIdentifiers;
    PLDateRangeFormatter *_dateRangeFormatter;
    PXPhotosViewModel *_viewModel;
    PXAssetSelectionTypeCounter *_assetTypeCounter;
    PXPhotosBarButtonItemsController *_barButtonItemsController;
    PXActionPerformer *_activeActionPerformer;
    PXActionPerformer *_lastActionPerformer;
    PXPhotosGridActionMenuController *_menuController;
    PXMiroMoviePresenter *_miroMoviePresenter;
    NSMapTable *_actionTypeByBarButtonItem;
    NSString *_contentSizeCategory;
    double _interButtonSpacing;
    double _endButtonSpacing;
}

@property (readonly, nonatomic) NSMapTable *actionTypeByBarButtonItem; // @synthesize actionTypeByBarButtonItem=_actionTypeByBarButtonItem;
@property (strong, nonatomic) PXActionPerformer *activeActionPerformer; // @synthesize activeActionPerformer=_activeActionPerformer;
@property (readonly, nonatomic) PXAssetSelectionTypeCounter *assetTypeCounter; // @synthesize assetTypeCounter=_assetTypeCounter;
@property (readonly, nonatomic) PXPhotosBarButtonItemsController *barButtonItemsController; // @synthesize barButtonItemsController=_barButtonItemsController;
@property (strong, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property (readonly, nonatomic) PLDateRangeFormatter *dateRangeFormatter; // @synthesize dateRangeFormatter=_dateRangeFormatter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double endButtonSpacing; // @synthesize endButtonSpacing=_endButtonSpacing;
@property (readonly) unsigned long long hash;
@property (nonatomic) double interButtonSpacing; // @synthesize interButtonSpacing=_interButtonSpacing;
@property (strong, nonatomic) PXActionPerformer *lastActionPerformer; // @synthesize lastActionPerformer=_lastActionPerformer;
@property (strong, nonatomic) NSArray *leftBarButtonItemIdentifiers; // @synthesize leftBarButtonItemIdentifiers=_leftBarButtonItemIdentifiers;
@property (strong, nonatomic) PXPhotosGridActionMenuController *menuController; // @synthesize menuController=_menuController;
@property (strong, nonatomic) PXMiroMoviePresenter *miroMoviePresenter; // @synthesize miroMoviePresenter=_miroMoviePresenter;
@property (readonly, nonatomic) PXPhotosUIViewController *photosViewController;
@property (strong, nonatomic) NSArray *rightBarButtonItemIdentifiers; // @synthesize rightBarButtonItemIdentifiers=_rightBarButtonItemIdentifiers;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSArray *toolbarItemIdentifiers; // @synthesize toolbarItemIdentifiers=_toolbarItemIdentifiers;
@property (readonly, nonatomic) PXPhotosViewModel *viewModel; // @synthesize viewModel=_viewModel;

- (void).cxx_destruct;
- (BOOL)_actionPerformer:(id)arg1 presentViewController:(id)arg2;
- (void)_handleActionTypeBarButtonItem:(id)arg1;
- (id)_identifierForActionType:(id)arg1;
- (void)_reloadOptionsButton;
- (void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;
- (BOOL)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)actionPerformer:(id)arg1 transitionToViewController:(id)arg2 transitionType:(long long)arg3;
- (void)assetCollectionActionPerformer:(id)arg1 playMovieForAssetCollection:(id)arg2;
- (id)barAppearance;
- (id)createAssetActionManagerForAssetReference:(id)arg1;
- (id)createBarButtonItemForIdentifier:(id)arg1 placement:(unsigned long long)arg2;
- (void)didChangeActionPerformerTypeForOptionsController:(id)arg1;
- (void)didChangeSystemItemForOptionsController:(id)arg1;
- (double)fixedSpaceForEndButtonSpacing;
- (double)fixedSpaceForInterButtonSpacing;
- (void)handleActionMenuBarButtonItem:(id)arg1;
- (void)handleAddButtonItem:(id)arg1;
- (void)handleCancelBarButtonItem:(id)arg1;
- (void)handleDeselectAllBarButtonItem:(id)arg1;
- (void)handleSelectAllBarButtonItem:(id)arg1;
- (void)handleSelectBarButtonItem:(id)arg1;
- (id)hostViewControllerForActionPerformer:(id)arg1;
- (id)init;
- (id)initWithPhotosViewController:(id)arg1 viewModel:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)photosGridActionPerformer:(id)arg1 filterStateChanged:(id)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)updateBars;

@end
