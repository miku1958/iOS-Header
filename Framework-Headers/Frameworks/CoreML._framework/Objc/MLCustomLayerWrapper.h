//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/EspressoBrick-Protocol.h>

@class NSString;
@protocol MLCustomLayer;

__attribute__((visibility("hidden")))
@interface MLCustomLayerWrapper : NSObject <EspressoBrick>
{
    NSString *_className;
    NSObject<MLCustomLayer> *_customImpl;
}

@property (readonly, nonatomic) NSString *className; // @synthesize className=_className;
@property (strong, nonatomic) NSObject<MLCustomLayer> *customImpl; // @synthesize customImpl=_customImpl;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)coremlShapeToEspressoShape:(id)arg1;
+ (id)coremlShapesToEspressoShapes:(id)arg1;
+ (id)espressoShapeToCoremlShape:(id)arg1;
+ (id)espressoShapesToCoremlShapes:(id)arg1;
+ (id)espressoTensorToCoremlTensor:(id)arg1;
+ (id)espressoTensorsToCoremlTensors:(id)arg1;
+ (id)espressoTensorsToCoremlTensorsGPU:(id)arg1;
+ (id)factory;
+ (id)getStrides:(id)arg1;
+ (int)intFromFourBytes:(char *)arg1;
- (void).cxx_destruct;
- (void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2;
- (void)encodeToMetalCommandBuffer:(id)arg1 inputTensors:(id)arg2 outputTensors:(id)arg3;
- (BOOL)hasGPUSupport;
- (id)initWithParameters:(id)arg1;
- (void)setMappedWeights:(void *)arg1 sizeInBytes:(unsigned long long)arg2;
- (id)setupForInputShapes:(id)arg1 withParameters:(id)arg2;

@end

