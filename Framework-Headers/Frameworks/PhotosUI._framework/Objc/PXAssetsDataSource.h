//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSource.h>

@interface PXAssetsDataSource : PXSectionedDataSource
{
}

- (id)assetAtItemIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)assetCollectionAtSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)assetReferenceAtItemIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)assetReferenceForAssetReference:(id)arg1;
- (struct PXSimpleIndexPath)indexPathForAssetReference:(id)arg1;
- (Class)objectReferenceClassForItem;
- (id)startingAssetReference;

@end

