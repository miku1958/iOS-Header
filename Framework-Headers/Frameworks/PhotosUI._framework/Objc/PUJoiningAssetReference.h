//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUAssetReference.h>

__attribute__((visibility("hidden")))
@interface PUJoiningAssetReference : PUAssetReference
{
    long long _hintDataSourceIndex;
    PUAssetReference *_containedAssetReference;
}

@property (readonly, nonatomic) PUAssetReference *containedAssetReference; // @synthesize containedAssetReference=_containedAssetReference;
@property (readonly, nonatomic) long long hintDataSourceIndex; // @synthesize hintDataSourceIndex=_hintDataSourceIndex;

- (void).cxx_destruct;
- (id)description;
- (id)initWithAsset:(id)arg1 assetCollection:(id)arg2 indexPath:(id)arg3 dataSourceIdentifier:(id)arg4;
- (id)initWithContainedAssetReference:(id)arg1 hintDataSourceIndex:(long long)arg2 indexPath:(id)arg3 dataSourceIdentifier:(id)arg4;

@end

