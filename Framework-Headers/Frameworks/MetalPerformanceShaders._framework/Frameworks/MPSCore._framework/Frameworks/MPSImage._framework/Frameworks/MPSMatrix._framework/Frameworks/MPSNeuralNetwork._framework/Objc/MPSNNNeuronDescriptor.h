//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MPSNeuralNetwork/NSCopying-Protocol.h>

@class NSData;

@interface MPSNNNeuronDescriptor : NSObject <NSCopying>
{
    int _neuronType;
    float _a;
    float _b;
    float _c;
    NSData *_data;
    BOOL _noCopy;
    unsigned long long _count;
}

@property (nonatomic) float a; // @synthesize a=_a;
@property (nonatomic) float b; // @synthesize b=_b;
@property (nonatomic) float c; // @synthesize c=_c;
@property (strong, nonatomic) NSData *data; // @synthesize data=_data;
@property (nonatomic) int neuronType; // @synthesize neuronType=_neuronType;

+ (id)cnnNeuronDescriptorWithType:(int)arg1;
+ (id)cnnNeuronDescriptorWithType:(int)arg1 a:(float)arg2;
+ (id)cnnNeuronDescriptorWithType:(int)arg1 a:(float)arg2 b:(float)arg3;
+ (id)cnnNeuronDescriptorWithType:(int)arg1 a:(float)arg2 b:(float)arg3 c:(float)arg4;
+ (id)cnnNeuronPReLUDescriptorWithData:(id)arg1 noCopy:(BOOL)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)debugDescription;

@end

