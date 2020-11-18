//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPCModelStorePlaybackItemsRequest, MPMutableSectionedCollection, MPSectionedCollection, MPStoreModelGenericObjectBuilder, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface MPCModelStorePlaybackItemsRequestAccumulator : NSObject
{
    long long _currentBatchCount;
    long long _defaultLibraryPersonalizationStyle;
    NSMutableDictionary *_equivalencyMapping;
    BOOL _lastStoreIDBasedSectionWasPlaylist;
    NSArray *_orderedStoreIDs;
    NSMutableArray *_pendingOrderedStoreIDs;
    NSMutableArray *_pendingPrioritizedStoreIDs;
    NSMutableArray *_unprocessedItemIdentifiers;
    MPMutableSectionedCollection *_progressiveContentDescriptors;
    NSMutableDictionary *_receivedStoreIDs;
    MPStoreModelGenericObjectBuilder *_resultsGenericObjectBuilder;
    NSMutableDictionary *_sectionIndexToDeletedIndexSet;
    NSMutableDictionary *_storeIDToIndexPathReference;
    long long _unknownEndpointLibraryPersonalizationStyle;
    BOOL _allowsExplicitContent;
    BOOL _shouldLibraryPersonalize;
    long long _batchSize;
    NSDate *_earliestExpirationDate;
    long long _storePersonalizationStyle;
    MPCModelStorePlaybackItemsRequest *_request;
}

@property (readonly, nonatomic) BOOL allowsExplicitContent; // @synthesize allowsExplicitContent=_allowsExplicitContent;
@property (nonatomic) long long batchSize; // @synthesize batchSize=_batchSize;
@property (readonly, copy, nonatomic) NSDate *earliestExpirationDate; // @synthesize earliestExpirationDate=_earliestExpirationDate;
@property (readonly, copy, nonatomic) NSDictionary *equivalencyMapping;
@property (readonly, copy, nonatomic) MPCModelStorePlaybackItemsRequest *request; // @synthesize request=_request;
@property (readonly, nonatomic) BOOL shouldLibraryPersonalize; // @synthesize shouldLibraryPersonalize=_shouldLibraryPersonalize;
@property (readonly, nonatomic) long long storePersonalizationStyle; // @synthesize storePersonalizationStyle=_storePersonalizationStyle;
@property (readonly, nonatomic) MPSectionedCollection *unpersonalizedContentDescriptors;

- (void).cxx_destruct;
- (void)_addEquivalencyForMetadata:(id)arg1 requestStoreIdentifier:(id)arg2;
- (void)_addOriginalIndexPath:(id)arg1 forStoreID:(id)arg2;
- (long long)_appendProgressiveContentDescriptorsWithStoreItemMetadata:(id)arg1;
- (struct _MPCModelStorePlaybackItemEligibility)_eligibilityForItem:(id)arg1;
- (id)_indexPathAccountingForRemovalsWithOriginalIndexPath:(id)arg1;
- (id)_modelObjectWithStoreItemMetadata:(id)arg1 requestModelObject:(id)arg2 shouldUsePlaylistEntries:(BOOL)arg3;
- (id)_originalIndexPathsForStoreID:(id)arg1;
- (void)_prepareRequestInformation;
- (void)_removeItemAtOriginalIndexPath:(id)arg1;
- (BOOL)_shouldUsePlaylistEntriesForSectionAtIndex:(long long)arg1;
- (struct MPCModelStorePlaybackItemsRequestAccumulatorResult)handleResponse:(id)arg1;
- (id)initWithRequest:(id)arg1 shouldLibraryPersonalize:(BOOL)arg2;
- (id)newStoreItemMetadataRequest;

@end

