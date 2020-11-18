//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHObject.h>

@class NSDate, NSString;

@interface PHCollection : PHObject
{
    BOOL _customSortAscending;
    int _customSortKey;
    unsigned long long _estimatedPhotosCount;
    unsigned long long _estimatedVideosCount;
    NSDate *_creationDate;
    NSString *_localizedSubtitle;
}

@property (readonly, nonatomic) BOOL canContainAssets;
@property (readonly, nonatomic) BOOL canContainCollections;
@property (readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property (readonly, nonatomic) BOOL customSortAscending; // @synthesize customSortAscending=_customSortAscending;
@property (readonly, nonatomic) int customSortKey; // @synthesize customSortKey=_customSortKey;
@property (readonly, nonatomic) unsigned long long estimatedPhotosCount; // @synthesize estimatedPhotosCount=_estimatedPhotosCount;
@property (readonly, nonatomic) unsigned long long estimatedVideosCount; // @synthesize estimatedVideosCount=_estimatedVideosCount;
@property (readonly, nonatomic) BOOL hasLocalizedTitle;
@property (readonly, nonatomic) BOOL hasLocationInfo;
@property (readonly, nonatomic) NSString *localizedSubtitle; // @synthesize localizedSubtitle=_localizedSubtitle;
@property (readonly, nonatomic) NSString *localizedTitle;

+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)fetchCollectionsInCollectionList:(id)arg1 options:(id)arg2;
+ (id)fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchTopLevelUserCollectionsWithOptions:(id)arg1;
+ (id)fetchType;
+ (id)managedEntityName;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
- (void).cxx_destruct;
- (BOOL)canPerformEditOperation:(long long)arg1;
- (unsigned long long)collectionFixedOrderPriority;
- (BOOL)collectionHasFixedOrder;
- (id)description;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;

@end

