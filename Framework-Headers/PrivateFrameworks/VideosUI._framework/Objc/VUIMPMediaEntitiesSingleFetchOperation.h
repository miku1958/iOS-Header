//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUICore/VUIAsynchronousOperation.h>

@class MPMediaPredicate, NSArray, NSDictionary, NSError, NSMutableSet, VUIMPMediaLibrary, VUIMediaEntityFetchRequest, VUIMediaEntityFetchResponse, VUIMediaEntityKind, VUIMediaEntityType;

__attribute__((visibility("hidden")))
@interface VUIMPMediaEntitiesSingleFetchOperation : VUIAsynchronousOperation
{
    BOOL _processPredicateAfterFetch;
    BOOL _processRangeAfterFetch;
    VUIMediaEntityFetchRequest *_request;
    VUIMediaEntityFetchResponse *_response;
    NSError *_error;
    VUIMPMediaLibrary *_mediaLibrary;
    VUIMediaEntityKind *_mediaEntityKind;
    NSMutableSet *_prefetchProperties;
    MPMediaPredicate *_mediaQueryPredicate;
    NSArray *_mediaQuerySortOrderingProperties;
    NSDictionary *_mediaQuerySortOrderingDirectionMappings;
    NSArray *_postFetchSortDescriptors;
    VUIMediaEntityType *_currentFetchMediaEntityType;
}

@property (strong, nonatomic) VUIMediaEntityType *currentFetchMediaEntityType; // @synthesize currentFetchMediaEntityType=_currentFetchMediaEntityType;
@property (copy, nonatomic) NSError *error; // @synthesize error=_error;
@property (strong, nonatomic) VUIMediaEntityKind *mediaEntityKind; // @synthesize mediaEntityKind=_mediaEntityKind;
@property (strong, nonatomic) VUIMPMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property (strong, nonatomic) MPMediaPredicate *mediaQueryPredicate; // @synthesize mediaQueryPredicate=_mediaQueryPredicate;
@property (strong, nonatomic) NSDictionary *mediaQuerySortOrderingDirectionMappings; // @synthesize mediaQuerySortOrderingDirectionMappings=_mediaQuerySortOrderingDirectionMappings;
@property (strong, nonatomic) NSArray *mediaQuerySortOrderingProperties; // @synthesize mediaQuerySortOrderingProperties=_mediaQuerySortOrderingProperties;
@property (strong, nonatomic) NSArray *postFetchSortDescriptors; // @synthesize postFetchSortDescriptors=_postFetchSortDescriptors;
@property (strong, nonatomic) NSMutableSet *prefetchProperties; // @synthesize prefetchProperties=_prefetchProperties;
@property (nonatomic) BOOL processPredicateAfterFetch; // @synthesize processPredicateAfterFetch=_processPredicateAfterFetch;
@property (nonatomic) BOOL processRangeAfterFetch; // @synthesize processRangeAfterFetch=_processRangeAfterFetch;
@property (strong, nonatomic) VUIMediaEntityFetchRequest *request; // @synthesize request=_request;
@property (copy, nonatomic) VUIMediaEntityFetchResponse *response; // @synthesize response=_response;

+ (id)_sortIndexesWithMediaQuerySection:(id)arg1;
- (void).cxx_destruct;
- (void)_addEntityLimitToMediaQuery:(id)arg1;
- (void)_addPredicateToMediaQuery:(id)arg1;
- (void)_addPrefetchPropertiesToMediaQuery:(id)arg1;
- (void)_addSortingPropertiesToMediaQuery:(id)arg1;
- (id)_baseMediaQuery;
- (id)_bitTestMediaQueryPropertyPredicateWithKeyPathBitTestExpression:(id)arg1 operatorType:(unsigned long long)arg2 constantExpression:(id)arg3;
- (id)_coalesceResponses:(id)arg1;
- (id)_collectionsFetchResponseWithMediaQuery:(id)arg1;
- (id)_fetchResponseWithMediaEntities:(id)arg1 mediaQuerySections:(id)arg2;
- (BOOL)_isSortingBeingPerformedByMediaQuery;
- (id)_itemsFetchResponseWithMediaQuery:(id)arg1;
- (id)_keyPathMediaQueryPropertyPredicateWithKeyPathExpression:(id)arg1 operatorType:(unsigned long long)arg2 constantExpression:(id)arg3;
- (id)_mediaEntities:(id)arg1 subarrayWithRange:(struct _NSRange)arg2;
- (id)_mediaEntityKind;
- (id)_mediaEntityPropertyDescriptorForFilteringWithKeyPath:(id)arg1;
- (id)_mediaQuery;
- (id)_mediaQueryPredicateForCompoundPredicate:(id)arg1;
- (id)_mediaQueryPredicateForPredicate:(id)arg1;
- (id)_mediaQueryPropertyPredicateForComparisonPredicate:(id)arg1;
- (void)_populatePrefetchProperties;
- (id)_processFetchedMediaEntities:(id)arg1;
- (void)_processPredicate;
- (void)_processRange;
- (void)_processSortDescriptors;
- (BOOL)_shouldSortUsingMediaQuery;
- (void)executionDidBegin;
- (id)init;
- (id)initWithMediaLibrary:(id)arg1 request:(id)arg2;

@end
