//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUAssetsDataSource.h>

@class NSArray, NSDictionary;

@interface PUJoiningAssetsDataSource : PUAssetsDataSource
{
    NSArray *__dataSources;
    long long __totalNumberOfSections;
    NSDictionary *__containedDataSourceInfoByIdentifier;
    NSArray *__containedDataSourceInfos;
}

@property (readonly, nonatomic) NSDictionary *_containedDataSourceInfoByIdentifier; // @synthesize _containedDataSourceInfoByIdentifier=__containedDataSourceInfoByIdentifier;
@property (readonly, nonatomic) NSArray *_containedDataSourceInfos; // @synthesize _containedDataSourceInfos=__containedDataSourceInfos;
@property (readonly, nonatomic) NSArray *_dataSources; // @synthesize _dataSources=__dataSources;
@property (readonly, nonatomic) long long _totalNumberOfSections; // @synthesize _totalNumberOfSections=__totalNumberOfSections;

- (void).cxx_destruct;
- (id)_assetsDataSourceForExternalIndexPath:(id)arg1 outDataSourceIndex:(out long long *)arg2 outLocalIndexPath:(out id *)arg3;
- (id)_externalIndexPathForLocalIndexPath:(id)arg1 inAssetsDataSource:(id)arg2;
- (id)assetAtIndexPath:(id)arg1;
- (id)assetCollectionAtIndexPath:(id)arg1;
- (id)assetReferenceAtIndexPath:(id)arg1;
- (id)badgeInfoPromiseForAssetAtIndexPath:(id)arg1;
- (id)containedAssetsDataSourceAtIndexPath:(id)arg1;
- (id)indexPathForAssetCollection:(id)arg1;
- (id)indexPathForAssetReference:(id)arg1;
- (id)initWithDataSources:(id)arg1;
- (long long)numberOfAssetsWithMaximum:(long long)arg1;
- (long long)numberOfSubItemsAtIndexPath:(id)arg1;
- (id)startingAssetReference;

@end

