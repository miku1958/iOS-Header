//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXPhotoKitAssetCollectionActionPerformer.h>

#import <PhotosUICore/PXPhotoKitAssetCollectionActionPerformerInput-Protocol.h>

@class NSString, PHFetchResult, PXAssetReference, PXAssetsDataSource;
@protocol UIDragSession, UIDropSession;

@interface PXPhotoKitAssetCollectionAddPersonToHomeActionPerformer : PXPhotoKitAssetCollectionActionPerformer <PXPhotoKitAssetCollectionActionPerformerInput>
{
}

@property (readonly, nonatomic) PXAssetsDataSource *assetsDataSource;
@property (readonly, nonatomic) PHFetchResult *assetsFetchResult;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<UIDragSession> dragSession;
@property (readonly, nonatomic) id<UIDropSession> dropSession;
@property (readonly, nonatomic) PXAssetReference *dropTargetAssetReference;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PHFetchResult *people;
@property (readonly) Class superclass;

+ (BOOL)canPerformOnAssetCollectionReference:(id)arg1 withInputs:(id)arg2;
+ (id)createActivityWithTitle:(id)arg1 actionType:(id)arg2 actionSystemImageName:(id)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollectionReference:(id)arg2 withInputs:(id)arg3;
+ (id)systemImageNameForAssetCollectionReference:(id)arg1 withInputs:(id)arg2;
- (void)performUserInteractionTask;

@end

