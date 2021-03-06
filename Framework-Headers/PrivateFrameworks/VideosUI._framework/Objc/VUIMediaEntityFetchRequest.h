//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSPredicate, NSSet, NSString;

@interface VUIMediaEntityFetchRequest : NSObject <NSCopying>
{
    NSSet *_mediaEntityTypes;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    NSSet *_properties;
    NSString *_groupingKeyPath;
    CDUnknownBlockType _groupingSortComparator;
    NSDictionary *_options;
    NSString *_identifier;
    struct _NSRange _range;
}

@property (readonly, nonatomic) BOOL _isCollectionsFetch;
@property (readonly, nonatomic) BOOL _isItemsFetch;
@property (readonly, nonatomic) BOOL _isSeasonsFetch;
@property (readonly, nonatomic) BOOL _isShowsFetch;
@property (copy, nonatomic) NSString *groupingKeyPath; // @synthesize groupingKeyPath=_groupingKeyPath;
@property (copy, nonatomic) CDUnknownBlockType groupingSortComparator; // @synthesize groupingSortComparator=_groupingSortComparator;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSSet *mediaEntityTypes; // @synthesize mediaEntityTypes=_mediaEntityTypes;
@property (copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property (copy, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property (copy, nonatomic) NSSet *properties; // @synthesize properties=_properties;
@property (nonatomic) struct _NSRange range; // @synthesize range=_range;
@property (copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;

+ (id)_HLSResolutionPredicateWithResolution:(id)arg1;
+ (id)_addedDateSortDescriptor;
+ (id)_addedToDateSortDescriptor;
+ (id)_any4KResolutionPredicate;
+ (id)_anyHDRColorCapabilityPredicate;
+ (id)_episodeNumberSortDescriptor;
+ (id)_episodesFetchRequestWithSeasonIdentifier:(id)arg1 showIdentifier:(id)arg2;
+ (id)_finalizedSortDescriptorFromSortDescriptor:(id)arg1 mediaEntityKind:(id)arg2;
+ (id)_finalizedSortDescriptorsFromSortDescriptors:(id)arg1 mediaEntityKind:(id)arg2;
+ (id)_identifierPredicateWithIdentifier:(id)arg1;
+ (id)_includeSortIndexesOptions;
+ (id)_isEqualPredicateWithAdamId:(id)arg1;
+ (id)_isInPredicateWithAdamId:(id)arg1;
+ (id)_isLocalPredicate;
+ (id)_minimalMovieRentalsPropertiesFetchRequest;
+ (id)_minimalMoviesPropertiesFetchRequest;
+ (id)_minimalPropertiesFetchRequestWithType:(id)arg1;
+ (id)_minimalShowsPropertiesFetchRequest;
+ (id)_predicateWithSubpredicates:(id)arg1 compoundPredicateType:(unsigned long long)arg2;
+ (id)_releaseDateSortDescriptor;
+ (id)_releaseYearSortDescriptor;
+ (id)_resolutionPredicateWithResolution:(id)arg1;
+ (id)_seasonIdentifierPredicateWithIdentifier:(id)arg1;
+ (id)_seasonNumberSortDescriptor;
+ (id)_seasonsFetchRequestWithSeasonIdentifier:(id)arg1;
+ (id)_seasonsFetchRequestWithShowIdentifier:(id)arg1;
+ (id)_showIdentifierPredicateWithIdentifier:(id)arg1;
+ (id)_showTitleSortDescriptor;
+ (id)_titleSortDescriptor;
+ (id)episodesFetchRequest;
+ (id)episodesFetchRequestWithSeasonIdentifier:(id)arg1;
+ (id)episodesGroupedBySeasonIdentifierFetchRequestWithShowIdentifier:(id)arg1;
+ (id)homeVideosFetchRequest;
+ (id)mediaEntityFetchRequestWithIdentifier:(id)arg1;
+ (id)movieRentalsFetchRequest;
+ (id)moviesFetchRequest;
+ (id)seasonsFetchRequest;
+ (id)seasonsFetchRequestWithSeasonIdentifier:(id)arg1;
+ (id)seasonsFetchRequestWithShowIdentifier:(id)arg1;
+ (id)showsFetchRequest;
- (void).cxx_destruct;
- (void)_addPredicate:(id)arg1;
- (void)_didUpdateRequestProperties;
- (id)_manualSortDescriptorsWithMediaEntityKind:(id)arg1 propertiesRequiredForSort:(id *)arg2;
- (BOOL)_shouldGenerateGroupingSortIndexes;
- (BOOL)_shouldGenerateSortIndexes;
- (id)_sortIndexPropertyKeyWithMediaEntityKind:(id)arg1;
- (void)add4KResolutionPredicate;
- (void)addAdamIdPredicate:(id)arg1;
- (void)addAdamIdsPredicate:(id)arg1;
- (void)addDownloadStatePredicateForStates:(unsigned long long)arg1;
- (void)addGroupingSortIndexesOption;
- (void)addHDRColorCapabilityOr4KResolutionPredicate;
- (void)addHDRColorCapabilityPredicate;
- (void)addIsLocalOrHasExpiredDownloadPredicate;
- (void)addIsLocalPredicate;
- (void)addRecentlyAddedSortDescriptorWithLimit:(unsigned long long)arg1;
- (void)addSortIndexesOption;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithMediaEntityType:(id)arg1;
- (id)initWithMediaEntityTypes:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

