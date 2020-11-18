//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUAssetsDataSource.h>

@class PXAssetsDataSource;

__attribute__((visibility("hidden")))
@interface PUPXAssetsDataSource : PUAssetsDataSource
{
    PXAssetsDataSource *_underlyingDataSource;
}

@property (readonly, nonatomic) PXAssetsDataSource *underlyingDataSource; // @synthesize underlyingDataSource=_underlyingDataSource;

- (void).cxx_destruct;
- (id)assetReferenceAtIndexPath:(id)arg1;
- (id)badgeInfoPromiseForAssetAtIndexPath:(id)arg1;
- (id)convertIndexPath:(id)arg1 fromAssetsDataSource:(id)arg2;
- (id)indexPathForAssetReference:(id)arg1;
- (id)init;
- (id)initWithUnderlyingDataSource:(id)arg1;
- (long long)numberOfSubItemsAtIndexPath:(id)arg1;

@end

