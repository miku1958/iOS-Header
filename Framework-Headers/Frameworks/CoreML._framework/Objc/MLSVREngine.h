//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/MLModelSpecificationLoader-Protocol.h>

@class NSString;

@interface MLSVREngine : NSObject <MLModelSpecificationLoader>
{
    BOOL _isInputSizeLowerBoundOnly;
    BOOL _freeModelOnDealloc;
    unsigned long long _inputSize;
    struct svm_model *_model;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL freeModelOnDealloc; // @synthesize freeModelOnDealloc=_freeModelOnDealloc;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long inputSize; // @synthesize inputSize=_inputSize;
@property (readonly) BOOL isInputSizeLowerBoundOnly; // @synthesize isInputSizeLowerBoundOnly=_isInputSizeLowerBoundOnly;
@property struct svm_model *model; // @synthesize model=_model;
@property (readonly) Class superclass;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
- (struct svm_node *)allocSVMNodeVector:(unsigned long long)arg1;
- (void)dealloc;
- (void)deallocSVMNodeVector:(struct svm_node *)arg1;
- (void)fillSVMNodeVector:(struct svm_node *)arg1 values:(double *)arg2 count:(unsigned long long)arg3;
- (id)initWithLibSVMFile:(id)arg1;
- (id)initWithSVMModel:(struct svm_model *)arg1 freeOnDealloc:(BOOL)arg2 isInputSizeLowerBoundOnly:(BOOL)arg3 inputSize:(unsigned long long)arg4;
- (id)predict:(id)arg1;

@end
