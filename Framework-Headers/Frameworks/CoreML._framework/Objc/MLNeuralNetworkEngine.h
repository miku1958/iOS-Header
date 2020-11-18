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

@class MLModelDescription, MLModelInterface, MLModelMetadata, MLProbabilityDictionary, NSArray, NSObject, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface MLNeuralNetworkEngine : MLModel <MLNeuralNetwork, MLModelSpecificationLoader, MLCompiledModelLoader, MLSpecificationCompiler, MLClassifier, MLRegressor>
{
    BOOL _usingCPU;
    BOOL _isEspresoBiasPreprocessingShared;
    BOOL _hasBidirectionalLayer;
    BOOL _has1DConvOptional;
    BOOL _isGPUPathForbidden;
    BOOL _isEnergyEfficientPathForbidden;
    int _precision;
    int _engine;
    int _qos;
    NSArray *_classLabels;
    NSString *_classScoreVectorName;
    NSArray *_inputLayers;
    NSArray *_outputLayers;
    unsigned long long _numInputs;
    unsigned long long _numOutputs;
    void *_plan;
    void *_context;
    MLProbabilityDictionary *_probDict;
    NSString *_modelFilePath;
    NSObject<OS_dispatch_semaphore> *_bufferSemaphore;
    NSObject<OS_dispatch_queue> *_espressoQueue;
    NSObject<OS_dispatch_queue> *_predictionsQueue;
    NSObject<OS_dispatch_semaphore> *_submitSemaphore;
    CDStruct_2bc666a5 _network;
    vector_d21bac94 _inputBuffers;
    vector_d21bac94 _outputBuffers;
    map_bc506073 _params;
    map_72eb5488 _widths;
    map_72eb5488 _heights;
    map_72eb5488 _ks;
    map_72eb5488 _batches;
    map_72eb5488 _sequences;
    map_7c549560 _optionalInputTypes;
    vector_553f084a _bufferAvailable;
    set_0cfa92bf _configurationNames;
    basic_string_23d93216 _currentConfigurationName;
}

@property (nonatomic) map_72eb5488 batches; // @synthesize batches=_batches;
@property vector_553f084a bufferAvailable; // @synthesize bufferAvailable=_bufferAvailable;
@property (strong) NSObject<OS_dispatch_semaphore> *bufferSemaphore; // @synthesize bufferSemaphore=_bufferSemaphore;
@property (strong, nonatomic) NSArray *classLabels; // @synthesize classLabels=_classLabels;
@property (strong, nonatomic) NSString *classScoreVectorName; // @synthesize classScoreVectorName=_classScoreVectorName;
@property set_0cfa92bf configurationNames; // @synthesize configurationNames=_configurationNames;
@property (nonatomic) void *context; // @synthesize context=_context;
@property basic_string_23d93216 currentConfigurationName; // @synthesize currentConfigurationName=_currentConfigurationName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int engine; // @synthesize engine=_engine;
@property (strong) NSObject<OS_dispatch_queue> *espressoQueue; // @synthesize espressoQueue=_espressoQueue;
@property (nonatomic) BOOL has1DConvOptional; // @synthesize has1DConvOptional=_has1DConvOptional;
@property (nonatomic) BOOL hasBidirectionalLayer; // @synthesize hasBidirectionalLayer=_hasBidirectionalLayer;
@property (readonly) unsigned long long hash;
@property (nonatomic) map_72eb5488 heights; // @synthesize heights=_heights;
@property (nonatomic) vector_d21bac94 inputBuffers; // @synthesize inputBuffers=_inputBuffers;
@property (readonly, nonatomic) NSArray *inputLayers; // @synthesize inputLayers=_inputLayers;
@property (readonly) MLModelInterface *interface;
@property BOOL isEnergyEfficientPathForbidden; // @synthesize isEnergyEfficientPathForbidden=_isEnergyEfficientPathForbidden;
@property (nonatomic) BOOL isEspresoBiasPreprocessingShared; // @synthesize isEspresoBiasPreprocessingShared=_isEspresoBiasPreprocessingShared;
@property BOOL isGPUPathForbidden; // @synthesize isGPUPathForbidden=_isGPUPathForbidden;
@property (nonatomic) map_72eb5488 ks; // @synthesize ks=_ks;
@property (readonly) MLModelMetadata *metadata;
@property (readonly, nonatomic) MLModelDescription *modelDescription;
@property (strong, nonatomic) NSString *modelFilePath; // @synthesize modelFilePath=_modelFilePath;
@property (nonatomic) CDStruct_2bc666a5 network; // @synthesize network=_network;
@property (readonly, nonatomic) unsigned long long numInputs; // @synthesize numInputs=_numInputs;
@property (readonly, nonatomic) unsigned long long numOutputs; // @synthesize numOutputs=_numOutputs;
@property (nonatomic) map_7c549560 optionalInputTypes; // @synthesize optionalInputTypes=_optionalInputTypes;
@property (nonatomic) vector_d21bac94 outputBuffers; // @synthesize outputBuffers=_outputBuffers;
@property (readonly, nonatomic) NSArray *outputLayers; // @synthesize outputLayers=_outputLayers;
@property (nonatomic) map_bc506073 params; // @synthesize params=_params;
@property (nonatomic) void *plan; // @synthesize plan=_plan;
@property (nonatomic) int precision; // @synthesize precision=_precision;
@property (strong) NSObject<OS_dispatch_queue> *predictionsQueue; // @synthesize predictionsQueue=_predictionsQueue;
@property (strong, nonatomic) MLProbabilityDictionary *probDict; // @synthesize probDict=_probDict;
@property (nonatomic) int qos; // @synthesize qos=_qos;
@property (nonatomic) map_72eb5488 sequences; // @synthesize sequences=_sequences;
@property (strong) NSObject<OS_dispatch_semaphore> *submitSemaphore; // @synthesize submitSemaphore=_submitSemaphore;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usingCPU; // @synthesize usingCPU=_usingCPU;
@property (nonatomic) map_72eb5488 widths; // @synthesize widths=_widths;

+ (id)compileSpecification:(struct _MLModelSpecification *)arg1 toArchive:(struct _MLModelOutputArchiver *)arg2 options:(id)arg3 error:(id *)arg4;
+ (id)compiledVersionForSpecification:(struct _MLModelSpecification *)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)loadModelFromCompiledArchive:(struct _MLModelInputArchiver *)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id *)arg5;
+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)neuralNetworkFromSpec:(id)arg1 classScoreVectorName:(id)arg2 classLabels:(id)arg3 error:(id *)arg4;
+ (id)neuralNetworkFromSpec:(id)arg1 error:(id *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_deallocContextAndPlan;
- (BOOL)_matchEngineToOptions:(id)arg1 error:(id *)arg2;
- (struct __CVBuffer *)_pixelBufferFromEbuf:(CDStruct_cf098810 *)arg1 description:(id)arg2 error:(id *)arg3;
- (BOOL)_setupContextAndPlanWithConfiguration:(id)arg1 error:(id *)arg2;
- (BOOL)_setupContextAndPlanWithConfiguration:(id)arg1 usingCPU:(BOOL)arg2 error:(id *)arg3;
- (BOOL)_setupContextAndPlanWithForceCPU:(BOOL)arg1 error:(id *)arg2;
- (id)addClassifierInformationToOutput:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (BOOL)bindInputsAndOutputs:(id)arg1 allocatedImageData:(vector_fd38efa8 *)arg2 bufferIndex:(unsigned long long)arg3 error:(id *)arg4;
- (id)classify:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)convertPredictionToClassifierResult:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)evaluate:(id)arg1 error:(id *)arg2;
- (id)evaluateBatch:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)evaluateNoAutoRelease:(id)arg1 error:(id *)arg2;
- (BOOL)fillInInitialShapeFromEspressoNet:(id *)arg1;
- (id)getAvailableOutputBlobList;
- (id)initWithSpec:(id)arg1 classScoreVectorName:(id)arg2 classLabels:(id)arg3 configuration:(id)arg4 error:(id *)arg5;
- (id)initWithSpec:(id)arg1 classScoreVectorName:(id)arg2 classLabels:(id)arg3 error:(id *)arg4;
- (unsigned long long)obtainBuffer;
- (id)populateOutputs:(unsigned long long)arg1 error:(id *)arg2;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (BOOL)rebuildPlan:(id *)arg1;
- (id)regress:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)releaseBuffer:(unsigned long long)arg1;
- (BOOL)resetSizes:(id)arg1 error:(id *)arg2;
- (BOOL)resetSizesNoAutoRelease:(id)arg1 error:(id *)arg2;
- (BOOL)resetSizesWithEspressoConfigurations:(id)arg1 error:(id *)arg2;
- (id)sortBatchByShape:(id)arg1 withMap:(id *)arg2 error:(id *)arg3;
- (BOOL)unlockCVPixelBuffers:(id)arg1 error:(id *)arg2;
- (BOOL)usingEspressoConfigurations;
- (id)verifyInputs:(id)arg1 error:(id *)arg2;

@end

