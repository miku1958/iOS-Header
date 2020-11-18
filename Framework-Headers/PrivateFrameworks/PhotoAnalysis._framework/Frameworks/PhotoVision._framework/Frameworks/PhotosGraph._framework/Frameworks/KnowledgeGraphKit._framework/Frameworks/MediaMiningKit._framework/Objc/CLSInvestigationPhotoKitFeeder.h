//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/CLSInvestigationFeeder.h>

#import <MediaMiningKit/CLSInvestigationInterviewDelegate-Protocol.h>

@class NSArray, NSDate, NSString, PHAssetCollection, PHFetchOptions, PHFetchResult;

@interface CLSInvestigationPhotoKitFeeder : CLSInvestigationFeeder <CLSInvestigationInterviewDelegate>
{
    PHFetchOptions *_fetchOptions;
    PHFetchResult *_fetchResult;
    NSArray *_allItems;
    unsigned long long _prefetchOptions;
    PHAssetCollection *_assetCollection;
}

@property (readonly, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasFavoritedAssets;
@property (readonly, nonatomic) BOOL hasPeople;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long numberOfAllPeople;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDate *universalEndDate;
@property (readonly, nonatomic) NSDate *universalStartDate;

+ (id)feederForAssetCollection:(id)arg1 options:(id)arg2 feederPrefetchOptions:(id)arg3;
- (void).cxx_destruct;
- (id)_allAvailableMetadataKeys;
- (BOOL)_shouldPrefetchCurationInformation;
- (id)allItems;
- (id)approximateLocation;
- (id)endDateComponents;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)imageFileNameFor:(id)arg1 baseName:(id)arg2;
- (id)initWithFeederForAssetCollection:(id)arg1 options:(id)arg2 feederPrefetchOptions:(id)arg3;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)itemMetadataAtIndex:(unsigned long long)arg1 withKeys:(id)arg2;
- (struct CGImage *)itemThumbnailAtIndex:(unsigned long long)arg1 withResolution:(unsigned long long)arg2;
- (unsigned long long)numberOfItems;
- (void)snapshotAllToURL:(id)arg1 scoreForInputCollection:(double)arg2 curatedCollection:(id)arg3 collectionScore:(double)arg4 curatedAsset:(id)arg5 assetScore:(double)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)startDateComponents;
- (id)writeImageToTemporaryURL:(struct CGImage *)arg1 imageFileName:(id)arg2;

@end

