//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSource.h>

@interface PXAssetsDataSource : PXSectionedDataSource
{
}

- (long long)aggregateMediaType;
- (id)assetAtItemIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)assetCollectionAtSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)assetReferenceAtItemIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)assetReferenceForAssetReference:(id)arg1;
- (id)assetsInSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)estimatedAssetsCountLocalizedString;
- (BOOL)hasCurationForAssetCollection:(id)arg1;
- (struct PXSimpleIndexPath)indexPathForAssetReference:(id)arg1;
- (BOOL)isAssetAtIndexPathPartOfCuratedSet:(struct PXSimpleIndexPath)arg1;
- (id)keyAssetsForAssetCollectionAtSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)metadataAssetAtItemIndexPath:(struct PXSimpleIndexPath)arg1;
- (Class)objectReferenceClassForItem;
- (id)objectReferenceNearestToObjectReference:(id)arg1;
- (id)photosGraphSuggestedContributions;
- (id)startingAssetReference;
- (long long)totalNumberOfItems;

@end

