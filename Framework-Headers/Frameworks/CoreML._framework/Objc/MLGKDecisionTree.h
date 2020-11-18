//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MLTreeEnsembleClassifier, NSMutableArray, NSMutableOrderedSet;

@interface MLGKDecisionTree : NSObject
{
    struct TreeEnsembleClassifier *_trc;
    MLTreeEnsembleClassifier *_treeClassifier;
    NSMutableArray *__attributes;
    NSMutableOrderedSet *__objectStore;
}

@property (strong, nonatomic) NSMutableArray *_attributes; // @synthesize _attributes=__attributes;
@property (strong, nonatomic) NSMutableOrderedSet *_objectStore; // @synthesize _objectStore=__objectStore;

- (void).cxx_destruct;
- (id)_init;
- (id)_initWithFlattenedTree:(id)arg1;
- (void)_loadModelAssetWithModelAtPath:(id)arg1 withError:(id)arg2;
- (id)_makeInferenceFromAnswers:(id)arg1 withError:(id)arg2;
- (BOOL)_saveModelAssetWithModelToPath:(id)arg1 withError:(id)arg2;
- (void)dealloc;

@end

