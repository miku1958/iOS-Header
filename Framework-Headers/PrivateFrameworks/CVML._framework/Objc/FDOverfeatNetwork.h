//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface FDOverfeatNetwork : NSObject
{
    struct vector<std::__1::shared_ptr<Espresso::net>, std::__1::allocator<std::__1::shared_ptr<Espresso::net>>> gpu_nets;
    struct vector<std::__1::shared_ptr<Espresso::net>, std::__1::allocator<std::__1::shared_ptr<Espresso::net>>> ecpu_nets;
    struct vector<std::__1::pair<unsigned long long, unsigned long long>, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long>>> net_scales;
    struct vector<std::__1::pair<unsigned long long, unsigned long long>, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long>>> full_scales;
    struct vector<double, std::__1::allocator<double>> scalesc;
    struct vector<std::__1::shared_ptr<Espresso::fast_pyramid_resizer>, std::__1::allocator<std::__1::shared_ptr<Espresso::fast_pyramid_resizer>>> resizers_for_batching;
    int n_resizers_for_batching;
    struct vector<std::__1::shared_ptr<Espresso::blob<float, 3>>, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3>>>> probBlobs;
    struct vector<std::__1::shared_ptr<Espresso::blob<float, 3>>, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3>>>> boxBlobs;
    NSMutableDictionary *_errorForLayers;
    struct pair<unsigned long long, unsigned long long> cropDims;
    struct CGColorSpace *colorSpace;
    struct net_strides_configuration strideConf;
    int retile_stride;
    int retile_tile_sz;
    struct vector<int, std::__1::allocator<int>> retile_n_outputs_v;
    int tile_w_1;
    int tile_h_1;
    NSObject<OS_dispatch_queue> *cpu_queue_0;
    NSObject<OS_dispatch_semaphore> *cpu_semaphore;
    BOOL _useGPUScaler;
    int _scalingMode;
    float _maxScale;
    int _forceMaxNScales;
    int _scaleConfig;
    int _mode;
    int _cpin;
    NSString *_basename;
    NSString *_weights;
    shared_ptr_ae8b808b _context_metal;
    shared_ptr_ae8b808b _context_cpu;
}

@property (strong, nonatomic) NSString *basename; // @synthesize basename=_basename;
@property (nonatomic) shared_ptr_ae8b808b context_cpu; // @synthesize context_cpu=_context_cpu;
@property (nonatomic) shared_ptr_ae8b808b context_metal; // @synthesize context_metal=_context_metal;
@property (nonatomic) int cpin; // @synthesize cpin=_cpin;
@property (nonatomic) int forceMaxNScales; // @synthesize forceMaxNScales=_forceMaxNScales;
@property (nonatomic) float maxScale; // @synthesize maxScale=_maxScale;
@property (nonatomic) int mode; // @synthesize mode=_mode;
@property (nonatomic) int scaleConfig; // @synthesize scaleConfig=_scaleConfig;
@property (nonatomic) int scalingMode; // @synthesize scalingMode=_scalingMode;
@property (nonatomic) BOOL useGPUScaler; // @synthesize useGPUScaler=_useGPUScaler;
@property (strong, nonatomic) NSString *weights; // @synthesize weights=_weights;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)autoResizeForAspectRatio:(float)arg1 useLowPriorityMode:(BOOL)arg2 gpuPriority:(unsigned long long)arg3;
- (void)autoSetupNetBaseName:(id)arg1 weights:(id)arg2 scaleConfig:(int)arg3 setupMode:(int)arg4 computePath:(int)arg5 autoAspectRatio:(float)arg6 forceReset:(BOOL)arg7 useLowPriorityMode:(BOOL)arg8 gpuPriority:(unsigned long long)arg9;
- (shared_ptr_dc6ac1b7)boxBlobForScale:(int)arg1;
- (void)buildPyramid:(struct CGImage *)arg1 ci:(id)arg2 resizer:(shared_ptr_7fb9d9f9)arg3;
- (shared_ptr_d082c67d)cpu_net:(int)arg1;
- (void)dealloc;
- (int)default_retile_outputs;
- (id)errorForLayers;
- (void)forward_cpu_network_at_index:(int)arg1 pyr:(const shared_ptr_7fb9d9f9 *)arg2;
- (void)generatePyramid:(const shared_ptr_5e9c0076 *)arg1 tex:(id)arg2;
- (int)getNumScales;
- (double)getScale:(int)arg1;
- (shared_ptr_d082c67d)gpu_net:(int)arg1;
- (id)init;
- (BOOL)needRetiling:(int)arg1;
- (shared_ptr_dc6ac1b7)probBlobForScale:(int)arg1;
- (void)processBlob:(const shared_ptr_5e9c0076 *)arg1 tex:(id)arg2;
- (void)processBlobNoRotation:(const shared_ptr_5e9c0076 *)arg1 tex:(id)arg2 doBGRA2RGBA:(BOOL)arg3;
- (void)processCGImage:(struct CGImage *)arg1;
- (void)processCGImageBatch:(CDUnknownBlockType)arg1 block:(CDUnknownBlockType)arg2;
- (void)processCIImage:(id)arg1;
- (void)processPyramid:(shared_ptr_7fb9d9f9)arg1;
- (void)processPyramid:(shared_ptr_7fb9d9f9)arg1 gpu_resizer:(id)arg2;
- (void)reset;
- (shared_ptr_7fb9d9f9)resizerAtIndex:(int)arg1;
- (int)resizerCount;
- (void)retile_and_forward_espresso_gpu_network_at_index:(int)arg1 net:(const shared_ptr_d082c67d *)arg2 pyr:(const shared_ptr_7fb9d9f9 *)arg3;
- (void)retile_and_forward_espresso_network_at_index:(int)arg1 net:(const shared_ptr_d082c67d *)arg2 pyr:(const shared_ptr_7fb9d9f9 *)arg3;
- (void)retryLoadingCaffeNet:(shared_ptr_d082c67d *)arg1 name:(id)arg2 weights:(id)arg3 context:(shared_ptr_ae8b808b)arg4 cp:(int)arg5;
- (void)setup_retile;
- (void)storeDataForPruning:(shared_ptr_86ba3c2c)arg1 prob:(float)arg2;
- (struct net_strides_configuration)strideConfiguration;
- (void)wipeLayersMemory;

@end

