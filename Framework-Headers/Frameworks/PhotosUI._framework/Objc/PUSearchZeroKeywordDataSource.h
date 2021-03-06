//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_dispatch_queue, PUSearchZeroKeywordChangeDelegate;

@interface PUSearchZeroKeywordDataSource : NSObject
{
    BOOL _fetchInProgress;
    id<PUSearchZeroKeywordChangeDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_fetchQueue;
    NSArray *_sections;
}

@property (weak, nonatomic) id<PUSearchZeroKeywordChangeDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL fetchInProgress; // @synthesize fetchInProgress=_fetchInProgress;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue; // @synthesize fetchQueue=_fetchQueue;
@property (copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;

+ (id)_dateViewModelForKeywordDictionary:(id)arg1;
+ (id)_fetchAssetCollectionsForIdentifiers:(id)arg1;
+ (void)_fetchAssetsForAssetViewModels:(id)arg1;
+ (id)_fetchAssetsWithLocalIdentifiers:(id)arg1;
+ (id)_fetchFinalMergeTargetPersonForPersonLocalIdentifier:(id)arg1;
+ (id)_fetchKeyAssetForSceneIdentifier:(int)arg1;
+ (id)_fetchKeyAssetOfAssetCollection:(id)arg1 withOptions:(id)arg2;
+ (void)_fetchKeyAssetsForAssetCollectionViewModels:(id)arg1;
+ (id)_fetchOptionsForPersonFetching;
+ (id)_holidayViewModelForKeywordDictionary:(id)arg1;
+ (id)_homeViewModelForKeywordDictionary:(id)arg1;
+ (id)_meaningViewModelForKeywordDictionary:(id)arg1;
+ (id)_personViewModelForKeywordDictionary:(id)arg1 person:(id)arg2;
+ (id)_personsByLocalIdentifiers:(id)arg1 allUniqueLocalIdentifiers:(id)arg2;
+ (id)_personsForLocalIdentifiers:(id)arg1;
+ (id)_placeViewModelForKeywordDictionary:(id)arg1;
+ (id)_sceneViewModelForKeywordDictionary:(id)arg1;
+ (id)_seasonViewModelForKeywordDictionary:(id)arg1;
+ (id)_sectionsForZeroKeywords:(id)arg1 personsByLocalIdentifier:(id)arg2;
+ (id)_socialGroupViewModelForKeywordDictionary:(id)arg1 peopleByKeyword:(id)arg2;
+ (id)_socialGroupsByKeywordwithPersonsByLocalIdentifier:(id)arg1 socialGroupZeroKeywords:(id)arg2;
+ (id)_uniquePersonLocalIdentifiersForZeroKeywords:(id)arg1;
+ (id)_zeroKeywordsFromDefaultKeywordStore;
+ (id)zeroKeywordLog;
- (void).cxx_destruct;
- (BOOL)_shouldFetchItems;
- (id)_zeroKeywordsFromDefaultKeywordStore;
- (id)debugDictionary;
- (id)description;
- (void)fetchItems;
- (BOOL)hasZeroKeywords;
- (long long)indexForPlaceKey:(id)arg1;
- (id)init;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (void)ppt_prepareZeroKeywordRequest:(CDUnknownBlockType)arg1;
- (long long)sectionForSectionType:(long long)arg1;
- (long long)sectionTypeForSection:(unsigned long long)arg1;
- (id)tapToRadarAttachments;
- (id)titleForSection:(unsigned long long)arg1;
- (id)viewModelForIndexPath:(id)arg1;

@end

