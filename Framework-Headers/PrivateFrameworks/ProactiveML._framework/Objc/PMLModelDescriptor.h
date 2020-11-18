//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLDictionarySerializableProtocol-Protocol.h>
#import <ProactiveML/PMLPlistAndChunksSerializableProtocol-Protocol.h>

@class NSNumber, NSString, PMLModelLearningRates, PMLModelWeights;

@interface PMLModelDescriptor : NSObject <PMLDictionarySerializableProtocol, PMLPlistAndChunksSerializableProtocol>
{
    NSString *_name;
    NSNumber *_version;
    PMLModelWeights *_weights;
    PMLModelLearningRates *_learningRates;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (strong) PMLModelLearningRates *learningRates; // @synthesize learningRates=_learningRates;
@property (strong) NSString *name; // @synthesize name=_name;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (strong) NSNumber *version; // @synthesize version=_version;
@property (strong) PMLModelWeights *weights; // @synthesize weights=_weights;

+ (BOOL)isValidModelDescriptorInPlistMetadata:(id)arg1 withErrorDescription:(id *)arg2;
- (void).cxx_destruct;
- (id)initFromDictionary:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toDictionary;
- (id)toPlistWithChunks:(id)arg1;

@end

