//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface _PSFamilyMLModel : NSObject
{
    NSDictionary *_models;
}

@property (readonly, nonatomic) NSDictionary *models; // @synthesize models=_models;

- (void).cxx_destruct;
- (id)defaultModelForPrediction;
- (id)defaultPredictionForInputFeatures:(id)arg1;
- (id)ensemblePredictionForInputFeatures:(id)arg1;
- (id)familiesPredictionForContacts:(id)arg1 withMaxSuggestion:(long long)arg2;
- (id)familyProbability:(id)arg1;
- (id)familyRelationsOfContacts:(id)arg1 featureDicts:(id)arg2;
- (id)getFeatureDictForContact:(id)arg1;
- (id)getFeatureDictsForContacts:(id)arg1;
- (id)getModelWithModelName:(id)arg1;
- (id)getPredictionFromModel:(id)arg1 withInputFeatures:(id)arg2;
- (id)init;
- (id)initWithModels:(id)arg1;
- (BOOL)isFamilyContact:(id)arg1;
- (id)loadModelFromUrlResource:(id)arg1;
- (id)predictionForContact:(id)arg1;
- (id)predictionsForContacts:(id)arg1;
- (id)predictionsForContacts:(id)arg1 featureDicts:(id)arg2;

@end
