//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXNewSearchResultsSection.h>

@class NSArray, PHFetchResult;

@interface PXNewSearchResultAssetsSection : PXNewSearchResultsSection
{
    PHFetchResult *_curatedAssetFetchResult;
    NSArray *_allAssetResultUUIDs;
    NSArray *_allAssetResults;
}

@property (copy, nonatomic) NSArray *allAssetResultUUIDs; // @synthesize allAssetResultUUIDs=_allAssetResultUUIDs;
@property (readonly, copy, nonatomic) NSArray *allAssetResults; // @synthesize allAssetResults=_allAssetResults;
@property (copy, nonatomic) PHFetchResult *curatedAssetFetchResult; // @synthesize curatedAssetFetchResult=_curatedAssetFetchResult;

- (void).cxx_destruct;
- (id)assetForSearchResultIdentifier:(id)arg1;
- (id)initWithCuratedAssetSearchResults:(id)arg1 curatedAssetSearchResultsFetchResult:(id)arg2 allAssetSearchResults:(id)arg3;
- (id)searchResultForAsset:(id)arg1;
- (id)title;

@end
