//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameplayKit/NSSecureCoding-Protocol.h>

@class GKDecisionNode, GKRandomSource, MLGKDecisionTree;

@interface GKDecisionTree : NSObject <NSSecureCoding>
{
    struct GKCDecisionTree *_decisionTree;
    BOOL _isInduced;
    MLGKDecisionTree *mlkitDecisionTree;
    GKDecisionNode *_rootNode;
    GKRandomSource *_randomSource;
}

@property (copy, nonatomic) GKRandomSource *randomSource; // @synthesize randomSource=_randomSource;
@property (strong, nonatomic) GKDecisionNode *rootNode; // @synthesize rootNode=_rootNode;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)exportToURL:(id)arg1 error:(id)arg2;
- (id)findAccuracyWithExamples:(id)arg1 actions:(id)arg2 attributes:(id)arg3;
- (id)findActionForAnswers:(id)arg1;
- (id)getFlattenedTree;
- (id)init;
- (id)initWithAttribute:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExamples:(id)arg1 actions:(id)arg2 attributes:(id)arg3;
- (id)initWithExamples:(id)arg1 actions:(id)arg2 attributes:(id)arg3 maxDepth:(unsigned long long)arg4 minSamplesSplit:(unsigned long long)arg5;
- (id)initWithURL:(id)arg1 error:(id)arg2;

@end

