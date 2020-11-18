//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/MPModelLazySectionedCollectionDataSource-Protocol.h>

@class MPMediaLibraryEntityTranslationContext, MPMediaLibraryView, MPModelRequest, MPSectionedCollection, NSMapTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MPStoreLibraryPersonalizationCollectionDataSource : NSObject <MPModelLazySectionedCollectionDataSource>
{
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    struct vector<std::__1::shared_ptr<mlcore::EntityCache>, std::__1::allocator<std::__1::shared_ptr<mlcore::EntityCache>>> _entityCaches;
    MPSectionedCollection *_unpersonalizedContentDescriptors;
    MPModelRequest *_unpersonalizedRequest;
    MPMediaLibraryView *_libraryView;
    MPMediaLibraryEntityTranslationContext *_translatingContext;
    NSMapTable *_relativeModelClassToMappingResponse;
    NSMutableDictionary *_sectionToLibraryAddedOverride;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) MPMediaLibraryView *libraryView; // @synthesize libraryView=_libraryView;
@property (copy, nonatomic) NSMapTable *relativeModelClassToMappingResponse; // @synthesize relativeModelClassToMappingResponse=_relativeModelClassToMappingResponse;
@property (copy, nonatomic) NSMutableDictionary *sectionToLibraryAddedOverride; // @synthesize sectionToLibraryAddedOverride=_sectionToLibraryAddedOverride;
@property (readonly) Class superclass;
@property (strong, nonatomic) MPMediaLibraryEntityTranslationContext *translatingContext; // @synthesize translatingContext=_translatingContext;
@property (strong, nonatomic) MPSectionedCollection *unpersonalizedContentDescriptors; // @synthesize unpersonalizedContentDescriptors=_unpersonalizedContentDescriptors;
@property (copy, nonatomic) MPModelRequest *unpersonalizedRequest; // @synthesize unpersonalizedRequest=_unpersonalizedRequest;

+ (id)_completePersonalizedObjectWithLibraryObject:(id)arg1 personalizationProperties:(id)arg2 overrideLibraryAddedStatus:(long long)arg3;
+ (id)_identifiersByCombiningPersonalizedIdentifiers:(id)arg1 unpersonalizedIdentifiers:(id)arg2;
+ (id)_intersectingLightweightPersonalizationPropertiesForModelClass:(Class)arg1;
+ (id)_intersectingPlaybackPositionLightweightPersonalizationProperties;
+ (id)_intersectingStoreAssetLightweightPersonalizationProperties;
+ (id)_lightweightPersonalizedObjectWithUnpersonalizedObject:(id)arg1 libraryObject:(id)arg2 personalizationProperties:(id)arg3 overrideLibraryAddedStatus:(long long)arg4;
+ (id)_lightweightPersonalizedPlaybackPositionWithUnpersonalizedPlaybackPosition:(id)arg1 identifiers:(id)arg2 personalizationProperties:(id)arg3;
+ (id)_lightweightPersonalizedPlaybackPositionWithUnpersonalizedPlaybackPosition:(id)arg1 libraryPlaybackPosition:(id)arg2 personalizationProperties:(id)arg3;
+ (id)_lightweightPersonalizedStoreAssetWithUnpersonalizedAsset:(id)arg1 libraryAsset:(id)arg2 personalizationProperties:(id)arg3;
+ (id)_requiredLightweightPersonalizationPropertiesForModelClass:(Class)arg1 requestedProperties:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (shared_ptr_1c86f238)_entityCacheForEntityClass:(struct EntityClass *)arg1 propertiesToFetch:(vector_90d4f7ff)arg2;
- (id)_libraryObjectWithRelativeModelClass:(Class)arg1 identifierSet:(id)arg2 propertySet:(id)arg3;
- (id)identifiersForItemAtIndexPath:(id)arg1;
- (id)identifiersForSectionAtIndex:(long long)arg1;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1;
- (id)init;
- (id)itemAtIndexPath:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)sectionAtIndex:(unsigned long long)arg1;

@end

