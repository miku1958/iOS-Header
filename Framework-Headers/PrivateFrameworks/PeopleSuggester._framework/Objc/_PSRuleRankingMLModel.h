//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MLModel, MLModelConfiguration, NSDictionary, NSString;

@interface _PSRuleRankingMLModel : NSObject
{
    BOOL _isAdaptedModel;
    BOOL _isAdaptedMLModelOK;
    double _scoreThreshold;
    MLModel *_mlModel;
    NSDictionary *_metadata;
    NSDictionary *_psConfigForAdaptableModel;
    MLModelConfiguration *_adaptableModelConfiguration;
    NSString *_adaptedModelRecipeVersion;
}

@property (strong, nonatomic) MLModelConfiguration *adaptableModelConfiguration; // @synthesize adaptableModelConfiguration=_adaptableModelConfiguration;
@property (strong) NSString *adaptedModelRecipeVersion; // @synthesize adaptedModelRecipeVersion=_adaptedModelRecipeVersion;
@property (nonatomic) BOOL isAdaptedMLModelOK; // @synthesize isAdaptedMLModelOK=_isAdaptedMLModelOK;
@property BOOL isAdaptedModel; // @synthesize isAdaptedModel=_isAdaptedModel;
@property (strong) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property (strong) MLModel *mlModel; // @synthesize mlModel=_mlModel;
@property (strong) NSDictionary *psConfigForAdaptableModel; // @synthesize psConfigForAdaptableModel=_psConfigForAdaptableModel;
@property double scoreThreshold; // @synthesize scoreThreshold=_scoreThreshold;

- (void).cxx_destruct;
- (id)extractAdaptedModelRecipeID;
- (id)getAdaptedModelVersion;
- (id)giveModelDescription;
- (id)initWithAdaptableModelConfig:(id)arg1 isAdaptedMLModelOK:(BOOL)arg2 scoreThreshold:(double)arg3;
- (id)initWithMLModel:(id)arg1 scoreThreshold:(double)arg2 isAdaptedModel:(BOOL)arg3 psConfigForAdaptableModel:(id)arg4 isAdaptedMLModelOK:(BOOL)arg5;
- (BOOL)isAdaptedModelCreated;
- (BOOL)isAdaptedModelUsed;
- (void)loadDefaultRuleMinerMLModel;
- (id)rankRules:(id)arg1 contextItems:(id)arg2;

@end
