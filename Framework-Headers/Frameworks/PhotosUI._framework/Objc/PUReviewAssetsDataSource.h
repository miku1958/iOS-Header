//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUAssetsDataSource.h>

@class NSArray, NSDictionary;
@protocol PUDisplayAssetCollection;

@interface PUReviewAssetsDataSource : PUAssetsDataSource
{
    id<PUDisplayAssetCollection> __reviewAssetCollection;
    NSDictionary *__assetsByIdentifier;
    NSArray *__assetIdentifiers;
}

@property (readonly, nonatomic) NSArray *_assetIdentifiers; // @synthesize _assetIdentifiers=__assetIdentifiers;
@property (readonly, nonatomic) NSDictionary *_assetsByIdentifier; // @synthesize _assetsByIdentifier=__assetsByIdentifier;
@property (readonly, nonatomic) id<PUDisplayAssetCollection> _reviewAssetCollection; // @synthesize _reviewAssetCollection=__reviewAssetCollection;

- (void).cxx_destruct;
- (id)_identifierAtIndexPath:(id)arg1;
- (id)assetAtIndexPath:(id)arg1;
- (id)assetCollectionAtIndexPath:(id)arg1;
- (id)assetReferenceAtIndexPath:(id)arg1;
- (id)assetReferenceForAssetReference:(id)arg1;
- (id)badgeInfoForAssetAtIndexPath:(id)arg1;
- (id)convertIndexPath:(id)arg1 fromAssetsDataSource:(id)arg2;
- (id)indexPathForAssetCollection:(id)arg1;
- (id)indexPathForAssetReference:(id)arg1;
- (id)initWithAssetsByIdentifier:(id)arg1 usingOrdering:(id)arg2 inAssetCollection:(id)arg3;
- (BOOL)isEmpty;
- (long long)numberOfSubItemsAtIndexPath:(id)arg1;
- (id)startingAssetReference;

@end
