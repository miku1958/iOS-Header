//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPUFoundation/MPUDataSource.h>

@class MPMediaItemCollection, MPMediaQuery, MPMediaQuerySectionInfo, NSArray, NSMutableSet;

@interface MPUQueryDataSource : MPUDataSource
{
    NSArray *_entities;
    NSMutableSet *_additionalUniqueItemPropertiesToFetch;
    BOOL _hasValidRepresentativeCollection;
    BOOL _invalidateWhenEnteringForeground;
    MPMediaItemCollection *_representativeCollection;
    MPMediaQuerySectionInfo *_sectionInfo;
    BOOL _ignoringInvalidationDueToBackgroundApplicationState;
    MPMediaQuery *_query;
}

@property (nonatomic) BOOL ignoringInvalidationDueToBackgroundApplicationState; // @synthesize ignoringInvalidationDueToBackgroundApplicationState=_ignoringInvalidationDueToBackgroundApplicationState;
@property (readonly, nonatomic) MPMediaQuery *query; // @synthesize query=_query;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_defaultMediaLibraryDidChangeNotification:(id)arg1;
- (BOOL)_deleteHidesFromCloudForIndex:(unsigned long long)arg1 hidesAll:(out BOOL *)arg2;
- (void)_invalidateCalculatedEntities;
- (void)_invalidateForDisplayValuesChangeIfNeeded;
- (void)_invalidateIfNeeded;
- (void)_isCloudEnabledDidChangeNotification:(id)arg1;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1;
- (void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)arg1;
- (id)_representativeCollection;
- (id)_sectionInfo;
- (void)addAdditionalMediaEntityPropertiesToFetch:(id)arg1;
- (BOOL)canEditEntityAtIndex:(unsigned long long)arg1;
- (BOOL)canSelectEntityAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (void)deleteEntityAtIndex:(unsigned long long)arg1;
- (long long)editingTypeForEntityAtIndex:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)entities;
- (unsigned long long)hash;
- (unsigned long long)indexOfSectionForSectionTitleAtIndex:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityType:(long long)arg1;
- (id)initWithQuery:(id)arg1 entityType:(long long)arg2;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (id)localizedSectionIndexTitles;
- (id)localizedSectionTitleAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)queryForEntityAtIndex:(unsigned long long)arg1;
- (id)queryForEntityAtIndexPath:(id)arg1;
- (struct _NSRange)rangeOfSectionAtIndex:(unsigned long long)arg1;
- (void)removeAdditionalMediaEntityPropertiesToFetch:(id)arg1;
- (BOOL)showsEntityCountFooter;
- (BOOL)showsIndexBar;

@end

