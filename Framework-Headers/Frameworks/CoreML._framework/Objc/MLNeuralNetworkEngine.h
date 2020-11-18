//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreML/MLModel.h>

#import <CoreML/MLClassifier-Protocol.h>
#import <CoreML/MLCompiledModelLoader-Protocol.h>
#import <CoreML/MLModelSpecificationLoader-Protocol.h>
#import <CoreML/MLNeuralNetwork-Protocol.h>
#import <CoreML/MLRegressor-Protocol.h>
#import <CoreML/MLSpecificationCompiler-Protocol.h>

@class MLModelDescription, MLModelInterface, MLModelMetadata, NSArray, NSMutableDictionary, NSString;

@interface MLNeuralNetworkEngine : MLModel <MLNeuralNetwork, MLModelSpecificationLoader, MLCompiledModelLoader, MLSpecificationCompiler, MLClassifier, MLRegressor>
{
    BOOL _usingCPU;
    BOOL _isEspresoBiasPreprocessingShared;
    int _precision;
    int _engine;
    int _qos;
    unsigned int _batchSize;
    unsigned int _seqSize;
    NSArray *_classLabels;
    NSString *_classScoreVectorName;
    NSArray *_inputLayers;
    NSArray *_outputLayers;
    unsigned long long _numInputs;
    unsigned long long _numOutputs;
    void *_context;
    void *_plan;
    NSMutableDictionary *_probDict;
    NSString *_modelFilePath;
    CDStruct_2bc666a5 _network;
    map_a1143e5f _inputBuffers;
    map_a1143e5f _outputBuffers;
    map_bc506073 _params;
    vector_8087c75f _names;
    vector_12bd641b _widths;
    vector_12bd641b _heights;
    vector_12bd641b _ks;
    vector_12bd641b _batches;
    vector_12bd641b _sequences;
}

@property (nonatomic) unsigned int batchSize; // @synthesize batchSize=_batchSize;
@property (nonatomic) vector_12bd641b batches; // @synthesize batches=_batches;
@property (strong, nonatomic) NSArray *classLabels; // @synthesize classLabels=_classLabels;
@property (strong, nonatomic) NSString *classScoreVectorName; // @synthesize classScoreVectorName=_classScoreVectorName;
@property (nonatomic) void *context; // @synthesize context=_context;
@property (nonatomic) int engine; // @synthesize engine=_engine;
@property (nonatomic) vector_12bd641b heights; // @synthesize heights=_heights;
@property (nonatomic) map_a1143e5f inputBuffers; // @synthesize inputBuffers=_inputBuffers;
@property (readonly, nonatomic) NSArray *inputLayers; // @synthesize inputLayers=_inputLayers;
@property (readonly) MLModelInterface *interface;
@property (nonatomic) BOOL isEspresoBiasPreprocessingShared; // @synthesize isEspresoBiasPreprocessingShared=_isEspresoBiasPreprocessingShared;
@property (nonatomic) vector_12bd641b ks; // @synthesize ks=_ks;
@property (readonly) MLModelMetadata *metadata;
@property (readonly, nonatomic) MLModelDescription *modelDescription;
@property (strong, nonatomic) NSString *modelFilePath; // @synthesize modelFilePath=_modelFilePath;
@property (nonatomic) vector_8087c75f names; // @synthesize names=_names;
@property (nonatomic) CDStruct_2bc666a5 network; // @synthesize network=_network;
@property (readonly, nonatomic) unsigned long long numInputs; // @synthesize numInputs=_numInputs;
@property (readonly, nonatomic) unsigned long long numOutputs; // @synthesize numOutputs=_numOutputs;
@property (nonatomic) map_a1143e5f outputBuffers; // @synthesize outputBuffers=_outputBuffers;
@property (readonly, nonatomic) NSArray *outputLayers; // @synthesize outputLayers=_outputLayers;
@property (nonatomic) map_bc506073 params; // @synthesize params=_params;
@property (nonatomic) void *plan; // @synthesize plan=_plan;
@property (nonatomic) int precision; // @synthesize precision=_precision;
@property (strong, nonatomic) NSMutableDictionary *probDict; // @synthesize probDict=_probDict;
@property (nonatomic) int qos; // @synthesize qos=_qos;
@property (nonatomic) unsigned int seqSize; // @synthesize seqSize=_seqSize;
@property (nonatomic) vector_12bd641b sequences; // @synthesize sequences=_sequences;
@property (nonatomic) BOOL usingCPU; // @synthesize usingCPU=_usingCPU;
@property (nonatomic) vector_12bd641b widths; // @synthesize widths=_widths;

+ (id)compileSpecification:(struct _MLModelSpecification *)arg1 toArchive:(struct _MLModelOutputArchiver *)arg2 options:(id)arg3 error:(id *)arg4;
+ (id)compiledVersionForSpecification:(struct _MLModelSpecification *)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)loadModelFromCompiledArchive:(struct _MLModelInputArchiver *)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 error:(id *)arg4;
+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 error:(id *)arg2;
+ (id)neuralNetworkFromSpec:(id)arg1 classScoreVectorName:(id)arg2 classLabels:(id)arg3 error:(id *)arg4;
+ (id)neuralNetworkFromSpec:(id)arg1 error:(id *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_deallocContextAndPlan;
- (BOOL)_matchEngineToOptions:(id)arg1 error:(id *)arg2;
- (struct __CVBuffer *)_pixelBufferFromEbuf:(CDStruct_cf098810 *)arg1 description:(id)arg2 error:(id *)arg3;
- (BOOL)_setupContextAndPlanWithForceCPU:(BOOL)arg1 error:(id *)arg2;
- (BOOL)bindInputsAndOutputs:(id)arg1 allocatedImageData:(vector_fd38efa8 *)arg2 error:(id *)arg3;
- (id)classify:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)evaluate:(id)arg1 error:(id *)arg2;
- (id)evaluateNoAutoRelease:(id)arg1 error:(id *)arg2;
- (id)initWithSpec:(id)arg1 classScoreVectorName:(id)arg2 classLabels:(id)arg3 error:(id *)arg4;
- (id)initWithSpec:(id)arg1 classScoreVectorName:(id)arg2 classLabels:(id)arg3 forceCPU:(BOOL)arg4 error:(id *)arg5;
- (id)populateOutputs:(id *)arg1;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)regress:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (BOOL)resetSizes:(id)arg1 error:(id *)arg2;
- (BOOL)resetSizesNoAutoRelease:(id)arg1 error:(id *)arg2;
- (BOOL)unlockCVPixelBuffers:(id)arg1 error:(id *)arg2;
- (id)verifyInputs:(id)arg1 error:(id *)arg2;

@end
