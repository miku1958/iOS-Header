//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHAssetCollection.h>

@class NSData, NSDate, NSDictionary, NSSet, NSString;

@interface PHMemory : PHAssetCollection
{
    NSString *_localizedSubtitle;
    NSDate *_creationDate;
    long long _category;
    long long _subcategory;
    BOOL _rejected;
    BOOL _favorite;
    BOOL _pending;
    BOOL _userCreated;
    NSDictionary *_movieAssetState;
    NSData *_movieData;
    NSData *_photosGraphData;
    long long _photosGraphVersion;
    double _score;
    NSDate *_lastViewedDate;
    NSDate *_lastMoviePlayedDate;
    NSString *_titleFontName;
    NSData *_assetListPredicate;
    BOOL _didLoadTitleCategory;
    long long _titleCategory;
}

@property (readonly, nonatomic) NSData *assetListPredicate; // @synthesize assetListPredicate=_assetListPredicate;
@property (readonly, nonatomic) long long category; // @synthesize category=_category;
@property (readonly, nonatomic, getter=isFavorite) BOOL favorite; // @synthesize favorite=_favorite;
@property (readonly, nonatomic) NSSet *featuredPeopleIdentifiers;
@property (readonly, nonatomic) BOOL isContiguous;
@property (readonly, nonatomic) NSDate *lastMoviePlayedDate; // @synthesize lastMoviePlayedDate=_lastMoviePlayedDate;
@property (readonly, nonatomic) NSDate *lastViewedDate; // @synthesize lastViewedDate=_lastViewedDate;
@property (readonly, nonatomic) NSData *movieData; // @synthesize movieData=_movieData;
@property (readonly, nonatomic, getter=isPending) BOOL pending; // @synthesize pending=_pending;
@property (readonly, nonatomic) NSData *photosGraphData; // @synthesize photosGraphData=_photosGraphData;
@property (readonly, nonatomic) long long photosGraphVersion; // @synthesize photosGraphVersion=_photosGraphVersion;
@property (readonly, nonatomic, getter=isRejected) BOOL rejected; // @synthesize rejected=_rejected;
@property (readonly, nonatomic) double score; // @synthesize score=_score;
@property (readonly, nonatomic) long long subcategory; // @synthesize subcategory=_subcategory;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic, getter=isUserCreated) BOOL userCreated; // @synthesize userCreated=_userCreated;

+ (id)_transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)assetListPredicateFromQueryHintObjects:(id)arg1;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)fetchType;
+ (void)generateMemoriesWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (BOOL)managedObjectSupportsPendingState;
+ (BOOL)managedObjectSupportsRejectedState;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)movieDataWithTitleFontName:(id)arg1;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)stringForCategory:(long long)arg1;
+ (id)stringForSubcategory:(long long)arg1;
+ (id)titleFontNameFromMovieData:(id)arg1;
- (void).cxx_destruct;
- (id)_representativeAndCuratedAssetIDs;
- (BOOL)canContainAssets;
- (BOOL)canPerformEditOperation:(long long)arg1;
- (BOOL)canShowAvalancheStacks;
- (Class)changeRequestClass;
- (BOOL)collectionHasFixedOrder;
- (id)creationDate;
- (id)description;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (id)localizedSubtitle;
- (id)movieStateDataForAsset:(id)arg1;
- (id)predicateForAllAssets;
- (id)predicateForAllMomentsFromRepresentativeAssets;
- (long long)titleCategory;
- (id)titleFontName;
- (unsigned long long)titleFontNameHash;

@end

