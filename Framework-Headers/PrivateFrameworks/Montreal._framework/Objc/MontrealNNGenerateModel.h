//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MontrealNNModelNetwork, NSMutableDictionary;

@interface MontrealNNGenerateModel : NSObject
{
    struct MontrealNeuralNetwork *_nnObject;
    unsigned long long _weightFormat;
    MontrealNNModelNetwork *_network;
    NSMutableDictionary *_inputs;
    NSMutableDictionary *_outputs;
}

@property (readonly) NSMutableDictionary *inputs; // @synthesize inputs=_inputs;
@property (readonly) MontrealNNModelNetwork *network; // @synthesize network=_network;
@property struct MontrealNeuralNetwork *nnObject; // @synthesize nnObject=_nnObject;
@property (readonly) NSMutableDictionary *outputs; // @synthesize outputs=_outputs;
@property (readonly) unsigned long long weightFormat; // @synthesize weightFormat=_weightFormat;

- (void).cxx_destruct;
- (void)addInputs:(id)arg1;
- (void)addOutputs:(id)arg1;
- (void)dealloc;
- (void *)generateModelContainer;
- (id)initWithWeightFormat:(unsigned long long)arg1;
- (void)merge:(id)arg1;
- (id)modelContainerPath;
- (id)networkInputs;
- (id)networkOutputs;
- (void)removeInput:(id)arg1;
- (void)removeOutput:(id)arg1;

@end
