//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSPredicate, NSSet, PHAsset, PHCollection, PHFetchResult, PHPhotoLibrary;

@interface PXPhotosDataSourceConfiguration : NSObject
{
    BOOL _hideHiddenAssets;
    PHFetchResult *_collectionListFetchResult;
    PHCollection *_containerCollection;
    unsigned long long _options;
    NSDictionary *_existingAssetCollectionFetchResults;
    NSDictionary *_existingKeyAssetsFetchResults;
    PHAsset *_referenceAsset;
    NSPredicate *_basePredicate;
    NSPredicate *_filterPredicate;
    NSSet *_allowedUUIDs;
    NSSet *_allowedOIDs;
    NSArray *_filterPersons;
    PHPhotoLibrary *_photoLibrary;
    NSArray *_fetchPropertySets;
    long long _curationType;
}

@property (strong, nonatomic) NSSet *allowedOIDs; // @synthesize allowedOIDs=_allowedOIDs;
@property (strong, nonatomic) NSSet *allowedUUIDs; // @synthesize allowedUUIDs=_allowedUUIDs;
@property (strong, nonatomic) NSPredicate *basePredicate; // @synthesize basePredicate=_basePredicate;
@property (readonly, nonatomic) PHFetchResult *collectionListFetchResult; // @synthesize collectionListFetchResult=_collectionListFetchResult;
@property (readonly, nonatomic) PHCollection *containerCollection; // @synthesize containerCollection=_containerCollection;
@property (nonatomic) long long curationType; // @synthesize curationType=_curationType;
@property (strong, nonatomic) NSDictionary *existingAssetCollectionFetchResults; // @synthesize existingAssetCollectionFetchResults=_existingAssetCollectionFetchResults;
@property (strong, nonatomic) NSDictionary *existingKeyAssetsFetchResults; // @synthesize existingKeyAssetsFetchResults=_existingKeyAssetsFetchResults;
@property (strong, nonatomic) NSArray *fetchPropertySets; // @synthesize fetchPropertySets=_fetchPropertySets;
@property (strong, nonatomic) NSArray *filterPersons; // @synthesize filterPersons=_filterPersons;
@property (strong, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property (nonatomic) BOOL hideHiddenAssets; // @synthesize hideHiddenAssets=_hideHiddenAssets;
@property (readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property (strong, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property (strong, nonatomic) PHAsset *referenceAsset; // @synthesize referenceAsset=_referenceAsset;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAssetFetchResult:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithCollectionListFetchResult:(id)arg1 containerCollection:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithCollectionListFetchResult:(id)arg1 options:(unsigned long long)arg2;

@end

