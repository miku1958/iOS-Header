//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/PDTimeNode.h>

@class NSMutableArray, NSString, PDAnimationTarget;

__attribute__((visibility("hidden")))
@interface PDSequentialTimeNode : PDTimeNode
{
    BOOL mConcurrent;
    int mPreviousAction;
    int mNextAction;
    NSMutableArray *mPreviousConditions;
    NSMutableArray *mNextConditions;
}

@property (nonatomic) BOOL concurrent; // @synthesize concurrent=mConcurrent;
@property (nonatomic) double delay;
@property (nonatomic) double direction;
@property (strong, nonatomic) NSString *groupId;
@property (nonatomic) int iterateType;
@property (nonatomic) int nextAction; // @synthesize nextAction=mNextAction;
@property (strong, nonatomic) NSMutableArray *nextConditions; // @synthesize nextConditions=mNextConditions;
@property (nonatomic) int presetClass;
@property (nonatomic) int presetId;
@property (nonatomic) int previousAction; // @synthesize previousAction=mPreviousAction;
@property (strong, nonatomic) NSMutableArray *previousConditions; // @synthesize previousConditions=mPreviousConditions;
@property (strong, nonatomic) PDAnimationTarget *target;
@property (nonatomic) int triggerType;

+ (unsigned long long)buildPartsFromTarget:(id)arg1;
+ (id)newSequentialTimeNodeGroupForAnimationInfo;
+ (id)newSequentialTimeNodeGroupForAnimationInfoWithClass:(Class)arg1;
+ (id)newSequentialTimeNodeGroupForAnimationInfoWithClass:(Class)arg1 target:(id)arg2;
+ (id)timeNodeUnion:(id)arg1 initWithClass:(Class)arg2;
- (void).cxx_destruct;
- (id)level1ParallelTimeNodeGroupAtNodeIndex:(unsigned long long)arg1;
- (id)level2ParallelTimeNodeGroupAtNodeIndex:(unsigned long long)arg1 level1NodeIndex:(unsigned long long)arg2;
- (id)level3BehaviorAtNodeIndex:(unsigned long long)arg1 level2NodeIndex:(unsigned long long)arg2 level1NodeIndex:(unsigned long long)arg3;
- (void)setLevel2ParallelAttribute:(CDUnknownBlockType)arg1;

@end
