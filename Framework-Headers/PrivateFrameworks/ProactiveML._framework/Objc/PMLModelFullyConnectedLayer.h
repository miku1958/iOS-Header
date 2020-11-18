//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLPlistAndChunksSerializableProtocol-Protocol.h>

@class NSData, NSString;

@interface PMLModelFullyConnectedLayer : NSObject <PMLPlistAndChunksSerializableProtocol>
{
    unsigned long long _inputLen;
    unsigned long long _outputLen;
    int _activationType;
    int _dataType;
    float _dataScale;
    NSData *_weights;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void *)_createActivationFilterWithLength:(unsigned long long)arg1 activationType:(int)arg2;
- (void).cxx_destruct;
- (void *)_createFullyConnectedLayerFilter;
- (void)_multiplySparseVector:(id)arg1 output:(float *)arg2;
- (id)batchPredictWithDenseMatrix:(id)arg1;
- (id)initWithInputLen:(unsigned long long)arg1 outputLen:(unsigned long long)arg2 activationType:(int)arg3 dataType:(int)arg4 dataScale:(float)arg5 weights:(id)arg6;
- (id)initWithInputLen:(unsigned long long)arg1 outputLen:(unsigned long long)arg2 dataType:(int)arg3 values:(const float *)arg4;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (unsigned long long)modelCount;
- (id)predict:(id)arg1;
- (id)predictWithDenseVector:(id)arg1;
- (id)toPlistWithChunks:(id)arg1;
- (id)weights;

@end
