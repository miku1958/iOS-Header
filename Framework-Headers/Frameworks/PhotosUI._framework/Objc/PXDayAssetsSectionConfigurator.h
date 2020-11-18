//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXAssetsSectionConfigurator.h>

@class PXAssetsSectionBodyAllPhotosGridLayoutSpec, PXDayAssetsSectionBodyLayoutSpec, PXDayAssetsSectionHeaderLayoutSpec;

@interface PXDayAssetsSectionConfigurator : PXAssetsSectionConfigurator
{
    PXDayAssetsSectionHeaderLayoutSpec *_floatingHeaderSpec;
    PXAssetsSectionBodyAllPhotosGridLayoutSpec *_allPhotosGridBodySpec;
    PXDayAssetsSectionBodyLayoutSpec *_daysBodySpec;
}

- (void).cxx_destruct;
- (id)_bodySpecForBodyStyle:(long long)arg1 zoomLevel:(long long)arg2;
- (void)_configureSelectAllButtonOfSectionLayout:(id)arg1;
- (void)_getHeaderAndBodyStylesForAssetCollection:(id)arg1 isCurated:(BOOL)arg2 zoomLevel:(long long)arg3 headerStyle:(long long *)arg4 bodyStyle:(long long *)arg5;
- (void)configureAssetSectionLayout:(id)arg1;
- (struct CGSize)estimatedSizeOfSectionForAssetCollection:(id)arg1 isCurated:(BOOL)arg2 numberOfAssets:(long long)arg3 referenceSize:(struct CGSize)arg4;
- (id)headerSpecForHeaderStyle:(long long)arg1 assetSectionLayout:(id)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 assetsSectionLayoutSpec:(id)arg2;

@end
