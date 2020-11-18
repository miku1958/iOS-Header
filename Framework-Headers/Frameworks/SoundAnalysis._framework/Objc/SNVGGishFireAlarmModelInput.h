//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/MLFeatureProvider-Protocol.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface SNVGGishFireAlarmModelInput : NSObject <MLFeatureProvider>
{
    MLMultiArray *_input1;
    MLMultiArray *_stateIn;
    MLMultiArray *_detectedHistoryIn;
}

@property (strong, nonatomic) MLMultiArray *detectedHistoryIn; // @synthesize detectedHistoryIn=_detectedHistoryIn;
@property (readonly, nonatomic) NSSet *featureNames;
@property (strong, nonatomic) MLMultiArray *input1; // @synthesize input1=_input1;
@property (strong, nonatomic) MLMultiArray *stateIn; // @synthesize stateIn=_stateIn;

- (void).cxx_destruct;
- (id)featureValueForName:(id)arg1;
- (id)initWithInput1:(id)arg1;
- (id)initWithInput1:(id)arg1 stateIn:(id)arg2 detectedHistoryIn:(id)arg3;

@end
