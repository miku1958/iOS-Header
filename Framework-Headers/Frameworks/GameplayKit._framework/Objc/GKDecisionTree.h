//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameplayKit/NSSecureCoding-Protocol.h>

@class GKDecisionNode, GKRandomSource, NSArray;

@interface GKDecisionTree : NSObject <NSSecureCoding>
{
    struct GKCDecisionTree *_decisionTree;
    NSArray *forest;
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
- (id)findActionForAnswers:(id)arg1;
- (void)generateForestFromExamples:(id)arg1 andAttributes:(id)arg2;
- (id)init;
- (id)initWithAttribute:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExamples:(id)arg1 actions:(id)arg2 attributes:(id)arg3;

@end

