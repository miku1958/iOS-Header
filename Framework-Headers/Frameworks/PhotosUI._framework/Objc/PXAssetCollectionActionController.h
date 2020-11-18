//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PHAssetCollection, PXAssetCollectionActionManager, PXDisplayTitleInfo;
@protocol PXActionPerformerDelegate;

@interface PXAssetCollectionActionController : NSObject
{
    struct {
        BOOL assetCollectionActionManager;
    } _needsUpdateFlags;
    BOOL __needsUpdateActions;
    PHAssetCollection *_assetCollection;
    PXDisplayTitleInfo *_displayTitleInfo;
    id<PXActionPerformerDelegate> _actionPerformerDelegate;
    PXAssetCollectionActionManager *__assetCollectionActionManager;
    NSArray *_previewActions;
}

@property (strong, nonatomic, setter=_setAssetCollectionActionManager:) PXAssetCollectionActionManager *_assetCollectionActionManager; // @synthesize _assetCollectionActionManager=__assetCollectionActionManager;
@property (nonatomic, setter=_setNeedsUpdateActions:) BOOL _needsUpdateActions; // @synthesize _needsUpdateActions=__needsUpdateActions;
@property (weak, nonatomic) id<PXActionPerformerDelegate> actionPerformerDelegate; // @synthesize actionPerformerDelegate=_actionPerformerDelegate;
@property (strong, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property (strong, nonatomic) PXDisplayTitleInfo *displayTitleInfo; // @synthesize displayTitleInfo=_displayTitleInfo;
@property (strong, nonatomic, setter=_setPreviewActions:) NSArray *previewActions; // @synthesize previewActions=_previewActions;

- (void).cxx_destruct;
- (void)_invalidateActions;
- (void)_invalidateAssetCollectionActionManager;
- (BOOL)_needsUpdate;
- (void)_updateActionsIfNeeded;
- (void)_updateIfNeeded;

@end
