//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXActionManager.h>

@class NSDictionary, PXCuratedLibraryViewModel;

@interface PXCuratedLibraryActionManager : PXActionManager
{
    PXCuratedLibraryViewModel *_viewModel;
    NSDictionary *_actionPerformersByType;
    NSDictionary *_assetCollectionActionPerformersByType;
    NSDictionary *_constructorSpecificActionPerformersByType;
}

@property (readonly, nonatomic) NSDictionary *actionPerformersByType; // @synthesize actionPerformersByType=_actionPerformersByType;
@property (readonly, nonatomic) NSDictionary *assetCollectionActionPerformersByType; // @synthesize assetCollectionActionPerformersByType=_assetCollectionActionPerformersByType;
@property (readonly, nonatomic) NSDictionary *constructorSpecificActionPerformersByType; // @synthesize constructorSpecificActionPerformersByType=_constructorSpecificActionPerformersByType;
@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel; // @synthesize viewModel=_viewModel;

+ (id)actionsWithActionPerformers;
- (void).cxx_destruct;
- (id)actionPerformerForActionType:(id)arg1;
- (id)actionPerformerForActionType:(id)arg1 withAssetCollectionReference:(id)arg2;
- (id)actionPerformerForHitTestResult:(id)arg1;
- (BOOL)canPerformActionType:(id)arg1;
- (id)curationDebugPerformerAssetCollectionReference:(id)arg1 diagnosticLayout:(id)arg2;
- (id)ellipsisButtonActionPerformerWithAssetCollectionReference:(id)arg1;
- (id)init;
- (id)initWithViewModel:(id)arg1;
- (id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2;
- (id)showAllActionPerformerWithAssetCollectionReference:(id)arg1;
- (id)tapToRadarPerformerAssetCollectionReference:(id)arg1 diagnosticLayout:(id)arg2;

@end
