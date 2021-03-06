//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXCuratedLibraryActionPerformer.h>

@class PXAssetCollectionReference;

@interface PXCuratedLibraryAssetCollectionActionPerformer : PXCuratedLibraryActionPerformer
{
    PXAssetCollectionReference *_assetCollectionReference;
}

@property (readonly, nonatomic) PXAssetCollectionReference *assetCollectionReference; // @synthesize assetCollectionReference=_assetCollectionReference;

- (void).cxx_destruct;
- (id)initWithActionType:(id)arg1 viewModel:(id)arg2;
- (id)initWithActionType:(id)arg1 viewModel:(id)arg2 assetCollectionReference:(id)arg3;
- (id)localizedTitleForUseCase:(unsigned long long)arg1;
- (void)performActionWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

