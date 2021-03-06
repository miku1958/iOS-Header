//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSDictionary, NSMapTable, NSMutableSet, NSSet;

@interface PGTextFeatureGenerator : NSObject
{
    NSSet *_momentNodes;
    NSMutableSet *_momentIdentifiers;
    unsigned long long _numberOfMoments;
    unsigned long long _numberOfAssets;
    NSMapTable *_numberOfAssetsBySceneNode;
    NSCountedSet *_sceneNodes;
    NSCountedSet *_personNodes;
    NSCountedSet *_roiNodes;
    NSCountedSet *_poiNodes;
    NSCountedSet *_meaningNodes;
    NSCountedSet *_districtNodes;
    NSCountedSet *_cityNodes;
    NSCountedSet *_stateNodes;
    NSCountedSet *_countryNodes;
    NSCountedSet *_areaNodes;
    NSCountedSet *_businessNodes;
    NSCountedSet *_businessCategoryNodes;
    NSCountedSet *_holidayNodes;
    NSCountedSet *_publicEventNodes;
    NSCountedSet *_publicEventPerformerNodes;
    NSCountedSet *_publicEventCategoryNodes;
    NSDictionary *_optionsByDomain;
}

@property (strong, nonatomic) NSCountedSet *areaNodes; // @synthesize areaNodes=_areaNodes;
@property (strong, nonatomic) NSCountedSet *businessCategoryNodes; // @synthesize businessCategoryNodes=_businessCategoryNodes;
@property (strong, nonatomic) NSCountedSet *businessNodes; // @synthesize businessNodes=_businessNodes;
@property (strong, nonatomic) NSCountedSet *cityNodes; // @synthesize cityNodes=_cityNodes;
@property (strong, nonatomic) NSCountedSet *countryNodes; // @synthesize countryNodes=_countryNodes;
@property (strong, nonatomic) NSCountedSet *districtNodes; // @synthesize districtNodes=_districtNodes;
@property (strong, nonatomic) NSCountedSet *holidayNodes; // @synthesize holidayNodes=_holidayNodes;
@property (strong, nonatomic) NSCountedSet *meaningNodes; // @synthesize meaningNodes=_meaningNodes;
@property (strong, nonatomic) NSMutableSet *momentIdentifiers; // @synthesize momentIdentifiers=_momentIdentifiers;
@property (strong, nonatomic) NSSet *momentNodes; // @synthesize momentNodes=_momentNodes;
@property (nonatomic) unsigned long long numberOfAssets; // @synthesize numberOfAssets=_numberOfAssets;
@property (strong, nonatomic) NSMapTable *numberOfAssetsBySceneNode; // @synthesize numberOfAssetsBySceneNode=_numberOfAssetsBySceneNode;
@property (nonatomic) unsigned long long numberOfMoments; // @synthesize numberOfMoments=_numberOfMoments;
@property (strong, nonatomic) NSDictionary *optionsByDomain; // @synthesize optionsByDomain=_optionsByDomain;
@property (strong, nonatomic) NSCountedSet *personNodes; // @synthesize personNodes=_personNodes;
@property (strong, nonatomic) NSCountedSet *poiNodes; // @synthesize poiNodes=_poiNodes;
@property (strong, nonatomic) NSCountedSet *publicEventCategoryNodes; // @synthesize publicEventCategoryNodes=_publicEventCategoryNodes;
@property (strong, nonatomic) NSCountedSet *publicEventNodes; // @synthesize publicEventNodes=_publicEventNodes;
@property (strong, nonatomic) NSCountedSet *publicEventPerformerNodes; // @synthesize publicEventPerformerNodes=_publicEventPerformerNodes;
@property (strong, nonatomic) NSCountedSet *roiNodes; // @synthesize roiNodes=_roiNodes;
@property (strong, nonatomic) NSCountedSet *sceneNodes; // @synthesize sceneNodes=_sceneNodes;
@property (strong, nonatomic) NSCountedSet *stateNodes; // @synthesize stateNodes=_stateNodes;

+ (id)_knowledgeOptionsByDomain;
+ (id)_naturalLanguageOptionsByDomain;
- (void).cxx_destruct;
- (void)_resetProperties;
- (id)_sortedTextFeaturesUsingWeightAndTypeFromTextFeatures:(id)arg1;
- (id)_textFeaturesForNode:(id)arg1 type:(unsigned long long)arg2 weight:(float)arg3;
- (id)_textFeaturesForNodes:(id)arg1 type:(unsigned long long)arg2;
- (id)_textFeaturesForPersonNodes:(id)arg1;
- (void)analyzeMomentNodes;
- (id)bestTextFeaturesFromTextFeatures:(id)arg1;
- (BOOL)boundTextFeaturesPerEvent;
- (id)generateTextFeatures;
- (id)initWithMomentNodes:(id)arg1;
- (id)knowledgeFeatures;
- (unsigned long long)maximumNumberOfTextFeaturesPerEvent;
- (id)naturalLanguageFeatures;

@end

