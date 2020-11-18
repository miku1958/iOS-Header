//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>
#import <PhotosUICore/PXCMMSuggestion-Protocol.h>
#import <PhotosUICore/PXMediaTypeAggregating-Protocol.h>

@class NSString, PHAssetCollection, PHFetchResult, PXAssetCollectionActionManager;
@protocol PXDisplayAsset, PXPeopleFetchResult, PXUIImageProvider;

@interface PXCMMPhotoKitSuggestion : NSObject <PXMediaTypeAggregating, PXCMMSuggestion, NSCopying>
{
    NSString *_title;
    NSString *_subtitle;
    id<PXDisplayAsset> _posterAsset;
    id<PXUIImageProvider> _posterMediaProvider;
    PHAssetCollection *_assetCollection;
    PHFetchResult *_previewAssetsFetchResult;
    PHFetchResult *_peopleSuggestionsFetchResult;
}

@property (readonly, nonatomic) long long aggregateMediaType;
@property (readonly, nonatomic) long long aggregateMediaType; // @dynamic aggregateMediaType;
@property (readonly, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property (readonly, nonatomic) PXAssetCollectionActionManager *assetCollectionActionManager;
@property (readonly, nonatomic) BOOL containsUnverifiedPersons;
@property (readonly, nonatomic) long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) id<PXPeopleFetchResult> peopleFetchResult;
@property (readonly, nonatomic) PHFetchResult *peopleSuggestionsFetchResult; // @synthesize peopleSuggestionsFetchResult=_peopleSuggestionsFetchResult;
@property (readonly, nonatomic) id<PXDisplayAsset> posterAsset; // @synthesize posterAsset=_posterAsset;
@property (readonly, nonatomic) id<PXUIImageProvider> posterMediaProvider; // @synthesize posterMediaProvider=_posterMediaProvider;
@property (readonly, nonatomic) PHFetchResult *previewAssetsFetchResult; // @synthesize previewAssetsFetchResult=_previewAssetsFetchResult;
@property (readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // @synthesize title=_title;

+ (id)_fetchPeopleSuggestionsForAssetCollection:(id)arg1;
+ (id)_fetchPreviewAssetsForAssetCollection:(id)arg1;
+ (id)fastSuggestionWithAssetCollection:(id)arg1;
+ (id)sharedCachingImageManager;
+ (id)suggestionWithAssetCollection:(id)arg1;
- (void).cxx_destruct;
- (id)contextForActivityType:(unsigned long long)arg1 sourceType:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decline;
- (id)diagnosticsItem;
- (id)initWithAssetCollection:(id)arg1;
- (void)markAsActiveIfNeeded;
- (id)suggestionWithUpdatedPeopleSuggestionsFetchResult:(id)arg1;
- (id)suggestionWithUpdatedPreviewAssetsFetchResult:(id)arg1;

@end
