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

@class EspressoProfilingNetworkInfo, MLModelDescription, MLModelInterface, MLModelMetadata, MLNeuralNetworkContainer, MLProbabilityDictionary, MLVersionInfo, NSArray, NSDictionary, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface MLNeuralNetworkEngine : MLModel <MLNeuralNetwork, MLClassifier, MLRegressor, MLModelSpecificationLoader, MLCompiledModelLoader>
{
    struct vector<std::__1::map<std::__1::basic_string<char>, espresso_buffer_t *, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, espresso_buffer_t *>>>, std::__1::allocator<std::__1::map<std::__1::basic_string<char>, espresso_buffer_t *, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, espresso_buffer_t *>>>>> _inputBuffers;
    struct vector<std::__1::map<std::__1::basic_string<char>, espresso_buffer_t *, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, espresso_buffer_t *>>>, std::__1::allocator<std::__1::map<std::__1::basic_string<char>, espresso_buffer_t *, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, espresso_buffer_t *>>>>> _outputBuffers;
    struct map<std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t>>> _params;
    struct map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int>>> _widths;
    struct map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int>>> _heights;
    struct map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int>>> _ks;
    struct map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int>>> _batches;
    struct map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int>>> _sequences;
    struct map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int>>> _ranks;
    map_7c549560 _optionalInputTypes;
    struct vector<bool, std::__1::allocator<bool>> _bufferAvailable;
    struct set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::basic_string<char>>> _flexibleShapesConfigNamesInNet;
    basic_string_23d93216 _currentConfigurationName;
    struct map<std::__1::basic_string<char>, bool, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, bool>>> _OutputBlobIsDynamic;
    BOOL _hardwareFallbackDetected;
    BOOL _ndArrayInterpretation;
    BOOL _usingCPU;
    BOOL _isEspresoBiasPreprocessingShared;
    BOOL _hasBidirectionalLayer;
    BOOL _hasOptionalInputSequenceConcat;
    BOOL _isGPUPathForbidden;
    BOOL _isANEPathForbidden;
    int _precision;
    int _engine;
    int _qos;
    NSArray *_classLabels;
    NSString *_classScoreVectorName;
    NSArray *_inputLayers;
    NSArray *_outputLayers;
    NSDictionary *_imagePreprocessingParameters;
    NSDictionary *_espressoInputShapes;
    NSDictionary *_espressoInputStrides;
    MLVersionInfo *_modelVersionInfo;
    unsigned long long _numInputs;
    unsigned long long _numOutputs;
    void *_plan;
    void *_context;
    MLProbabilityDictionary *_probDict;
    NSString *_modelFilePath;
    NSDictionary *_defaultOptionalValues;
    NSObject<OS_dispatch_semaphore> *_bufferSemaphore;
    NSObject<OS_dispatch_queue> *_espressoQueue;
    NSObject<OS_dispatch_queue> *_predictionsQueue;
    NSObject<OS_dispatch_semaphore> *_submitSemaphore;
    NSMutableDictionary *_blobNameToLastPtrFlags;
    EspressoProfilingNetworkInfo *_espressoProfileInfo;
    MLNeuralNetworkContainer *_container;
    CDStruct_2bc666a5 _network;
}

@property (readonly, nonatomic) NSMutableDictionary *blobNameToLastPtrFlags; // @synthesize blobNameToLastPtrFlags=_blobNameToLastPtrFlags;
@property (strong) NSObject<OS_dispatch_semaphore> *bufferSemaphore; // @synthesize bufferSemaphore=_bufferSemaphore;
@property (strong, nonatomic) NSArray *classLabels; // @synthesize classLabels=_classLabels;
@property (strong, nonatomic) NSString *classScoreVectorName; // @synthesize classScoreVectorName=_classScoreVectorName;
@property (weak, nonatomic) MLNeuralNetworkContainer *container; // @synthesize container=_container;
@property (nonatomic) void *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) NSDictionary *defaultOptionalValues; // @synthesize defaultOptionalValues=_defaultOptionalValues;
@property (readonly, copy) NSString *description;
@property (nonatomic) int engine; // @synthesize engine=_engine;
@property (strong, nonatomic) NSDictionary *espressoInputShapes; // @synthesize espressoInputShapes=_espressoInputShapes;
@property (strong, nonatomic) NSDictionary *espressoInputStrides; // @synthesize espressoInputStrides=_espressoInputStrides;
@property (strong, nonatomic) EspressoProfilingNetworkInfo *espressoProfileInfo; // @synthesize espressoProfileInfo=_espressoProfileInfo;
@property (strong) NSObject<OS_dispatch_queue> *espressoQueue; // @synthesize espressoQueue=_espressoQueue;
@property (nonatomic) BOOL hardwareFallbackDetected; // @synthesize hardwareFallbackDetected=_hardwareFallbackDetected;
@property (nonatomic) BOOL hasBidirectionalLayer; // @synthesize hasBidirectionalLayer=_hasBidirectionalLayer;
@property (nonatomic) BOOL hasOptionalInputSequenceConcat; // @synthesize hasOptionalInputSequenceConcat=_hasOptionalInputSequenceConcat;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSDictionary *imagePreprocessingParameters; // @synthesize imagePreprocessingParameters=_imagePreprocessingParameters;
@property (readonly, strong, nonatomic) NSArray *inputLayers; // @synthesize inputLayers=_inputLayers;
@property (readonly) MLModelInterface *interface;
@property BOOL isANEPathForbidden; // @synthesize isANEPathForbidden=_isANEPathForbidden;
@property (nonatomic) BOOL isEspresoBiasPreprocessingShared; // @synthesize isEspresoBiasPreprocessingShared=_isEspresoBiasPreprocessingShared;
@property BOOL isGPUPathForbidden; // @synthesize isGPUPathForbidden=_isGPUPathForbidden;
@property (readonly) MLModelMetadata *metadata;
@property (strong, nonatomic) MLModelDescription *modelDescription;
@property (strong, nonatomic) NSString *modelFilePath; // @synthesize modelFilePath=_modelFilePath;
@property (readonly, nonatomic) MLVersionInfo *modelVersionInfo; // @synthesize modelVersionInfo=_modelVersionInfo;
@property (nonatomic) BOOL ndArrayInterpretation; // @synthesize ndArrayInterpretation=_ndArrayInterpretation;
@property (nonatomic) CDStruct_2bc666a5 network; // @synthesize network=_network;
@property (readonly, nonatomic) unsigned long long numInputs; // @synthesize numInputs=_numInputs;
@property (readonly, nonatomic) unsigned long long numOutputs; // @synthesize numOutputs=_numOutputs;
@property (readonly, strong, nonatomic) NSArray *outputLayers; // @synthesize outputLayers=_outputLayers;
@property (nonatomic) void *plan; // @synthesize plan=_plan;
@property (nonatomic) int precision; // @synthesize precision=_precision;
@property (strong) NSObject<OS_dispatch_queue> *predictionsQueue; // @synthesize predictionsQueue=_predictionsQueue;
@property (strong, nonatomic) MLProbabilityDictionary *probDict; // @synthesize probDict=_probDict;
@property (nonatomic) int qos; // @synthesize qos=_qos;
@property (strong) NSObject<OS_dispatch_semaphore> *submitSemaphore; // @synthesize submitSemaphore=_submitSemaphore;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usingCPU; // @synthesize usingCPU=_usingCPU;

+ (Class)containerClass;
+ (id)loadModelFromCompiledArchive:(struct _MLModelInputArchiver *)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id *)arg5;
+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)neuralNetworkFromContainer:(id)arg1 classScoreVectorName:(id)arg2 classLabels:(id)arg3 error:(id *)arg4;
+ (id)neuralNetworkFromContainer:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)neuralNetworkFromContainer:(id)arg1 error:(id *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_deallocContextAndPlan;
- (int)_espressoDeviceForConfiguration:(id)arg1 error:(id *)arg2;
- (BOOL)_espressoOutputShapeForFeatureName:(id)arg1 matchesShapeOfMLMultiArray:(id)arg2;
- (BOOL)_matchEngineToOptions:(id)arg1 error:(id *)arg2;
- (struct __CVBuffer *)_pixelBufferFromEbuf:(CDStruct_cf098810 *)arg1 description:(id)arg2 error:(id *)arg3;
- (BOOL)_setMultiArrayOutputBacking:(id)arg1 forOutputFeatureName:(id)arg2 toEbuf:(CDStruct_cf098810 *)arg3 error:(id *)arg4;
- (BOOL)_setupContextAndPlanWithConfiguration:(id)arg1 error:(id *)arg2;
- (BOOL)_setupContextAndPlanWithConfiguration:(id)arg1 usingCPU:(BOOL)arg2 error:(id *)arg3;
- (BOOL)_setupContextAndPlanWithForceCPU:(BOOL)arg1 error:(id *)arg2;
- (id)addClassifierInformationToOutput:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)availableOutputBlobList;
- (BOOL)bindDynamicOutputBuffers:(const map_2ca54a57 *)arg1 error:(id *)arg2;
- (BOOL)bindInputFeatures:(id)arg1 bufferIndex:(unsigned long long)arg2 allocatedImageData:(vector_fd38efa8 *)arg3 error:(id *)arg4;
- (BOOL)bindInputsAndOutputs:(id)arg1 allocatedImageData:(vector_fd38efa8 *)arg2 bufferIndex:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)bindOutputBuffers:(const map_2ca54a57 *)arg1 outputBackings:(id)arg2 automaticOutputBackingMode:(id)arg3 error:(id *)arg4;
- (id)classify:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)collectParametersFromContainer:(id)arg1 configuration:(id)arg2;
- (id)completeOutputBackings:(id)arg1 automaticOutputBackingMode:(id)arg2 error:(id *)arg3;
- (id)convertPredictionToClassifierResult:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;
- (BOOL)copyEbuf:(const CDStruct_cf098810 *)arg1 ofPixelType:(unsigned long long)arg2 toPixelBuffer:(struct __CVBuffer *)arg3 error:(id *)arg4;
- (void)dealloc;
- (void)dumpTestVectorsToPath:(id)arg1;
- (id)evaluate:(id)arg1 error:(id *)arg2;
- (id)evaluateBatch:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)evaluateInputs:(id)arg1 bufferIndex:(unsigned long long)arg2 options:(id)arg3 error:(id *)arg4;
- (id)evaluateInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (BOOL)executePlan:(void *)arg1 error:(id *)arg2;
- (id)executionSchedule;
- (BOOL)fillInInitialShapeFromEspressoNet:(id *)arg1;
- (id)imageFeatureValueFromEbuf:(CDStruct_cf098810 *)arg1 backingCVPixelBuffer:(struct __CVBuffer *)arg2 description:(id)arg3 error:(id *)arg4;
- (id)initWithContainer:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
- (id)initWithContainer:(id)arg1 error:(id *)arg2;
- (id)multiArrayFeatureValueFromEbuf:(CDStruct_cf098810 *)arg1 backingMultiArray:(id)arg2 description:(id)arg3 outputName:(id)arg4 error:(id *)arg5;
- (unsigned long long)obtainBuffer;
- (id)parameterValueForKey:(id)arg1 error:(id *)arg2;
- (void)populateMultiArrayShape:(id *)arg1 strides:(id *)arg2 forEbuf:(CDStruct_cf098810 *)arg3 featureDescription:(id)arg4 ndArrayInterpretation:(BOOL)arg5;
- (id)populateOutputs:(unsigned long long)arg1 outputBackings:(id)arg2 error:(id *)arg3;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (BOOL)rebuildPlan:(id *)arg1;
- (id)regress:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)releaseBuffer:(unsigned long long)arg1;
- (BOOL)resetSizes:(id)arg1 error:(id *)arg2;
- (BOOL)resetSizesNoAutoRelease:(id)arg1 error:(id *)arg2;
- (BOOL)resetSizesWithEspressoConfigurations:(id)arg1 error:(id *)arg2;
- (BOOL)sequenceConcatConsumesOptionalInputNamed:(id)arg1;
- (int)sequenceNamed:(id)arg1;
- (id)sortBatchByShape:(id)arg1 withMap:(id *)arg2 error:(id *)arg3;
- (BOOL)tryToSetOutputBacking:(id)arg1 forFeature:(id)arg2 toEbuf:(CDStruct_cf098810 *)arg3 reportPointerFlags:(int *)arg4 error:(id *)arg5;
- (BOOL)unlockCVPixelBuffers:(id)arg1 error:(id *)arg2;
- (BOOL)updateDynamicOutputBlobIndicatorCacheAndReturnError:(id *)arg1;
- (BOOL)usingEspressoConfigurations;
- (id)verifyInputs:(id)arg1 error:(id *)arg2;

@end
