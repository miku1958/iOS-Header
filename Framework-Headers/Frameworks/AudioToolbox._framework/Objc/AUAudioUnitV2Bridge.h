//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioToolbox/AUAudioUnit.h>

@class AUParameterTree, AUV2BridgeBusArray, NSObject;
@protocol OS_dispatch_queue;

@interface AUAudioUnitV2Bridge : AUAudioUnit
{
    NSObject<OS_dispatch_queue> *_eventListenerQueue;
    struct AUListenerBase *_eventListener;
    struct AUListenerBase *_parameterListener;
    BOOL _removingObserverWithContext;
    struct OpaqueAudioComponentInstance *_audioUnit;
    BOOL _audioUnitIsOwned;
    AUV2BridgeBusArray *_inputBusses;
    AUV2BridgeBusArray *_outputBusses;
    AUParameterTree *_cachedParameterTree;
    struct unique_ptr<AUAudioUnitV2Bridge_Renderer, std::__1::default_delete<AUAudioUnitV2Bridge_Renderer>> _renderer;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addOrRemoveParameterListeners:(BOOL)arg1;
- (void)_createEventListenerQueue;
- (unsigned int)_elementCount:(unsigned int)arg1;
- (BOOL)_elementCountWritable:(unsigned int)arg1;
- (void)_invalidateParameterTree;
- (void)_rebuildBusses:(unsigned int)arg1;
- (BOOL)_setElementCount:(unsigned int)arg1 count:(unsigned int)arg2 error:(id *)arg3;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (BOOL)allocateRenderResourcesAndReturnError:(id *)arg1;
- (id)channelCapabilities;
- (void)dealloc;
- (void)deallocateRenderResources;
- (int)enableBus:(unsigned int)arg1 scope:(unsigned int)arg2 enable:(BOOL)arg3;
- (void)init2;
- (id)initWithAudioUnit:(struct OpaqueAudioComponentInstance *)arg1 description:(struct AudioComponentDescription)arg2;
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (id)inputBusses;
- (CDUnknownBlockType)internalRenderBlock;
- (id)outputBusses;
- (id)parameterTree;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (void)reset;

@end

