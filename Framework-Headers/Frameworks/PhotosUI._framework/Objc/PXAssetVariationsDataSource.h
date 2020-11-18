//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSource.h>

@class NSArray, PHAsset;

@interface PXAssetVariationsDataSource : PXSectionedDataSource
{
    PHAsset *_asset;
    NSArray *_variations;
}

@property (readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property (readonly, copy, nonatomic) NSArray *variations; // @synthesize variations=_variations;

+ (id)emptyDataSource;
- (void).cxx_destruct;
- (id)init;
- (id)initWithVariations:(id)arg1 asset:(id)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;

@end
