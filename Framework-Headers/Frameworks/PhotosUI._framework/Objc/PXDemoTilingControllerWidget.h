//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXAssetsSceneDelegate-Protocol.h>
#import <PhotosUICore/PXTileSource-Protocol.h>
#import <PhotosUICore/PXTilingControllerTransitionDelegate-Protocol.h>
#import <PhotosUICore/PXWidget-Protocol.h>

@class NSMutableSet, NSString, PXAssetsDataSourceManager, PXBasicUIViewTileAnimator, PXPhotoKitUIMediaProvider, PXPhotosDetailsContext, PXSectionedSelectionManager, PXTilingController, PXUIAssetsScene, PXWidgetSpec;
@protocol PXAnonymousView, PXWidgetDelegate;

@interface PXDemoTilingControllerWidget : NSObject <PXAssetsSceneDelegate, PXTileSource, PXTilingControllerTransitionDelegate, PXWidget>
{
    id<PXWidgetDelegate> _widgetDelegate;
    PXPhotosDetailsContext *_context;
    PXAssetsDataSourceManager *__dataSourceManager;
    PXPhotoKitUIMediaProvider *__mediaProvider;
    PXTilingController *__tilingController;
    PXBasicUIViewTileAnimator *__tileAnimator;
    NSMutableSet *__tilesInUse;
    PXUIAssetsScene *__scene;
    NSString *_localizedSubtitle;
}

@property (readonly, nonatomic) PXAssetsDataSourceManager *_dataSourceManager; // @synthesize _dataSourceManager=__dataSourceManager;
@property (readonly, nonatomic) PXPhotoKitUIMediaProvider *_mediaProvider; // @synthesize _mediaProvider=__mediaProvider;
@property (readonly, nonatomic) PXUIAssetsScene *_scene; // @synthesize _scene=__scene;
@property (readonly, nonatomic) PXBasicUIViewTileAnimator *_tileAnimator; // @synthesize _tileAnimator=__tileAnimator;
@property (readonly, nonatomic) NSMutableSet *_tilesInUse; // @synthesize _tilesInUse=__tilesInUse;
@property (readonly, nonatomic) PXTilingController *_tilingController; // @synthesize _tilingController=__tilingController;
@property (readonly, nonatomic) BOOL allowUserInteractionWithSubtitle;
@property (readonly, nonatomic) long long contentLayoutStyle;
@property (readonly, nonatomic) PXTilingController *contentTilingController;
@property (readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
@property (readonly, nonatomic) long long contentViewAnchoringType;
@property (strong, nonatomic) PXPhotosDetailsContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFaceModeEnabled) BOOL faceModeEnabled;
@property (readonly, nonatomic) BOOL hasContentForCurrentInput;
@property (readonly, nonatomic) BOOL hasLoadedContentData;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *localizedCaption;
@property (readonly, nonatomic) NSString *localizedDisclosureTitle;
@property (strong, nonatomic, setter=_setLocalizedSubtitle:) NSString *localizedSubtitle; // @synthesize localizedSubtitle=_localizedSubtitle;
@property (readonly, nonatomic) NSString *localizedTitle; // @dynamic localizedTitle;
@property (nonatomic, getter=isSelecting) BOOL selecting;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (strong, nonatomic) PXWidgetSpec *spec;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFaceMode;
@property (readonly, nonatomic) BOOL supportsSelection;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (weak, nonatomic) id<PXWidgetDelegate> widgetDelegate; // @synthesize widgetDelegate=_widgetDelegate;

- (void).cxx_destruct;
- (id)_demoTilingLayoutForDataSource:(id)arg1;
- (void)_loadTilingController;
- (id)assetsScene:(id)arg1 layoutForDataSource:(id)arg2;
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (id)init;
- (double)preferredContentHeightForWidth:(double)arg1;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (void)userDidSelectSubtitle;

@end
