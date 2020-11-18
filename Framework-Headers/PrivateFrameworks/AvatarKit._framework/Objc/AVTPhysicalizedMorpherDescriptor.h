//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCNMorpher, SCNNode;

@interface AVTPhysicalizedMorpherDescriptor : NSObject
{
    BOOL _mirrored;
    float _simulationFactor;
    SCNNode *_referenceNode;
    SCNNode *_drivingNode;
    SCNMorpher *_writeMorpher;
    unsigned long long _forwardMorphTargetIndex;
    unsigned long long _backwardMorphTargetIndex;
    unsigned long long _leftwardMorphTargetIndex;
    unsigned long long _rightwardMorphTargetIndex;
    unsigned long long _upwardMorphTargetIndex;
    unsigned long long _downwardMorphTargetIndex;
    SCNNode *_extraSimulationFactorReadMorpherNode;
    unsigned long long _extraSimulationFactorTargetIndex;
}

@property (nonatomic) unsigned long long backwardMorphTargetIndex; // @synthesize backwardMorphTargetIndex=_backwardMorphTargetIndex;
@property (nonatomic) unsigned long long downwardMorphTargetIndex; // @synthesize downwardMorphTargetIndex=_downwardMorphTargetIndex;
@property (strong, nonatomic) SCNNode *drivingNode; // @synthesize drivingNode=_drivingNode;
@property (strong, nonatomic) SCNNode *extraSimulationFactorReadMorpherNode; // @synthesize extraSimulationFactorReadMorpherNode=_extraSimulationFactorReadMorpherNode;
@property (nonatomic) unsigned long long extraSimulationFactorTargetIndex; // @synthesize extraSimulationFactorTargetIndex=_extraSimulationFactorTargetIndex;
@property (nonatomic) unsigned long long forwardMorphTargetIndex; // @synthesize forwardMorphTargetIndex=_forwardMorphTargetIndex;
@property (nonatomic) unsigned long long leftwardMorphTargetIndex; // @synthesize leftwardMorphTargetIndex=_leftwardMorphTargetIndex;
@property (nonatomic) BOOL mirrored; // @synthesize mirrored=_mirrored;
@property (strong, nonatomic) SCNNode *referenceNode; // @synthesize referenceNode=_referenceNode;
@property (nonatomic) unsigned long long rightwardMorphTargetIndex; // @synthesize rightwardMorphTargetIndex=_rightwardMorphTargetIndex;
@property (nonatomic) float simulationFactor; // @synthesize simulationFactor=_simulationFactor;
@property (nonatomic) unsigned long long upwardMorphTargetIndex; // @synthesize upwardMorphTargetIndex=_upwardMorphTargetIndex;
@property (strong, nonatomic) SCNMorpher *writeMorpher; // @synthesize writeMorpher=_writeMorpher;

- (void).cxx_destruct;

@end

