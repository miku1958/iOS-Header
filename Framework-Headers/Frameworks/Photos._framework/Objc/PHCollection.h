//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHObject.h>

@class NSString;

@interface PHCollection : PHObject
{
    BOOL _customSortAscending;
    int _customSortKey;
    unsigned long long _estimatedPhotosCount;
    unsigned long long _estimatedVideosCount;
}

@property (readonly, nonatomic) BOOL canContainAssets;
@property (readonly, nonatomic) BOOL canContainCollections;
@property (readonly, nonatomic) BOOL customSortAscending; // @synthesize customSortAscending=_customSortAscending;
@property (readonly, nonatomic) int customSortKey; // @synthesize customSortKey=_customSortKey;
@property (readonly, nonatomic) unsigned long long estimatedPhotosCount; // @synthesize estimatedPhotosCount=_estimatedPhotosCount;
@property (readonly, nonatomic) unsigned long long estimatedVideosCount; // @synthesize estimatedVideosCount=_estimatedVideosCount;
@property (readonly, nonatomic) NSString *localizedTitle;

+ (id)_transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)fetchCollectionsInCollectionList:(id)arg1 options:(id)arg2;
+ (id)fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1;
+ (id)fetchTopLevelUserCollectionsWithOptions:(id)arg1;
+ (id)managedEntityName;
+ (BOOL)managedObjectSupportsTrashedState;
- (BOOL)canPerformEditOperation:(long long)arg1;
- (BOOL)collectionCanBePinned;
- (BOOL)collectionHasFixedOrder;
- (id)description;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;

@end

