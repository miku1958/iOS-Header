//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGViewDiagnosticsSource-Protocol.h>

@class NSString, PHPhotoLibrary, PXAssetReference, PXCuratedLibraryAssetsDataSourceManager, PXCuratedLibraryFooterController, PXCuratedLibraryItemCountsController, PXCuratedLibraryLayout, PXCuratedLibraryVideoPlaybackController, PXCuratedLibraryViewModel, PXExtendedTraitCollection, PXGView, PXSectionedObjectReference, PXUIMediaProvider;
@protocol PXCuratedLibraryEventLogger;

@interface PXCuratedLibraryViewProvider : NSObject <PXGViewDiagnosticsSource>
{
    PHPhotoLibrary *_photoLibrary;
    PXExtendedTraitCollection *_extendedTraitCollection;
    PXGView *_gridView;
    PXCuratedLibraryLayout *_layout;
    PXCuratedLibraryViewModel *_viewModel;
    PXUIMediaProvider *_mediaProvider;
    PXCuratedLibraryAssetsDataSourceManager *_assetsDataSourceManager;
    PXCuratedLibraryVideoPlaybackController *_videoPlaybackController;
    PXCuratedLibraryItemCountsController *_itemCountsController;
    PXCuratedLibraryFooterController *_footerController;
    id<PXCuratedLibraryEventLogger> _eventLogger;
}

@property (readonly, nonatomic) PXCuratedLibraryAssetsDataSourceManager *assetsDataSourceManager; // @synthesize assetsDataSourceManager=_assetsDataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<PXCuratedLibraryEventLogger> eventLogger; // @synthesize eventLogger=_eventLogger;
@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection; // @synthesize extendedTraitCollection=_extendedTraitCollection;
@property (readonly, nonatomic) PXCuratedLibraryFooterController *footerController; // @synthesize footerController=_footerController;
@property (readonly, nonatomic) PXGView *gridView; // @synthesize gridView=_gridView;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PXCuratedLibraryItemCountsController *itemCountsController; // @synthesize itemCountsController=_itemCountsController;
@property (readonly, nonatomic) PXCuratedLibraryLayout *layout; // @synthesize layout=_layout;
@property (readonly, nonatomic) PXUIMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property (readonly, nonatomic) PXAssetReference *preferredAnchorAssetReference;
@property (readonly, nonatomic) PXSectionedObjectReference *preferredObjectReferenceToScrollToWhenRestoringState;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXCuratedLibraryVideoPlaybackController *videoPlaybackController; // @synthesize videoPlaybackController=_videoPlaybackController;
@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel; // @synthesize viewModel=_viewModel;

- (void).cxx_destruct;
- (struct PXSimpleIndexPath)_indexPathClosestToIndexPath:(struct PXSimpleIndexPath)arg1 fromDataSource:(id)arg2 inDirection:(unsigned long long)arg3;
- (id)_itemsGeometryForDataSource:(id)arg1;
- (void)_stopLibraryViewScrolling;
- (id)additionalRectDiagnosticsProvidersForView:(id)arg1;
- (BOOL)canSelectObjectAtIndexPath:(struct PXSimpleIndexPath)arg1 inDataSource:(id)arg2;
- (id)hitTestResultControlsForCurrentZoomLevel;
- (id)indexPathsForItemsInRect:(struct CGRect)arg1 coordinateSpace:(id)arg2;
- (id)indexPathsFromIndexPath:(struct PXSimpleIndexPath)arg1 toIndexPath:(struct PXSimpleIndexPath)arg2 inDataSource:(id)arg3;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1 extendedTraitCollection:(id)arg2;
- (void)scrollLibraryViewToAssetReference:(id)arg1 scrollPosition:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)scrollLibraryViewToObjectReference:(id)arg1 scrollPosition:(unsigned long long)arg2 padding:(struct UIEdgeInsets)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (struct PXSimpleIndexPath)selectableIndexPathClosestToIndexPath:(struct PXSimpleIndexPath)arg1 fromDataSource:(id)arg2 inDirection:(unsigned long long)arg3;

@end
