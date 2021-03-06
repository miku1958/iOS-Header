//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphOptimizedNode.h>

#import <PhotosGraph/PGGraphLocalizable-Protocol.h>
#import <PhotosGraph/PGGraphSynonymSupport-Protocol.h>

@class NSArray, NSString, PVSceneTaxonomyNode;

@interface PGGraphSceneNode : PGGraphOptimizedNode <PGGraphLocalizable, PGGraphSynonymSupport>
{
    unsigned int level:8;
    NSString *_label;
    unsigned long long _level;
    PVSceneTaxonomyNode *_sceneTaxonomyNode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isIndexed;
@property (readonly, nonatomic) BOOL isSuitableForSuggestions;
@property (readonly, nonatomic) unsigned long long level; // @synthesize level=_level;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSArray *localizedSynonyms;
@property (readonly, nonatomic) unsigned long long numberOfAssets;
@property (readonly, nonatomic) unsigned long long numberOfHighConfidenceAssets;
@property (readonly, nonatomic) unsigned int sceneIdentifier;
@property (readonly, nonatomic) PVSceneTaxonomyNode *sceneTaxonomyNode; // @synthesize sceneTaxonomyNode=_sceneTaxonomyNode;
@property (readonly) Class superclass;

+ (id)filter;
+ (BOOL)isSceneSuitableForSuggestionsWithIdentifier:(unsigned int)arg1 confidence:(double)arg2;
+ (BOOL)isSceneSuitableForSuggestionsWithLabel:(id)arg1;
+ (id)suggestionWhitelistedScenes;
- (void).cxx_destruct;
- (unsigned short)domain;
- (void)enumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)hasProperties:(id)arg1;
- (id)initWithLabel:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3;
- (id)label;
- (id)momentNodes;
- (id)propertyDictionary;
- (void)setLocalProperties:(id)arg1;

@end

