//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioToolbox/AUAudioUnitV2Bridge.h>

__attribute__((visibility("hidden")))
@interface AUHALOutputUnit : AUAudioUnitV2Bridge
{
    CDUnknownBlockType _outputProvider;
    CDUnknownBlockType _inputHandler;
    BOOL _inputWasEnabled;
    BOOL _outputWasEnabled;
    BOOL _inputBusEnabled;
    int _renderObserverToken;
    struct unordered_map<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long), std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<const long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>>> _renderObservers;
}

@property (nonatomic, getter=isInputEnabled) BOOL inputEnabled;
@property (nonatomic, getter=isOutputEnabled) BOOL outputEnabled;

- (id).cxx_construct;
- (void).cxx_destruct;
- (CDUnknownBlockType)_inputHandler;
- (void)addRenderObserver:(CDUnknownFunctionPointerType)arg1 userData:(void *)arg2;
- (BOOL)canPerformInput;
- (BOOL)canPerformOutput;
- (void)dealloc;
- (int)enableBus:(unsigned int)arg1 scope:(unsigned int)arg2 enable:(BOOL)arg3;
- (void)initAUHALOutputUnit;
- (id)initWithAudioUnit:(struct OpaqueAudioComponentInstance *)arg1 description:(struct AudioComponentDescription)arg2;
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)isRunning;
- (CDUnknownBlockType)outputProvider;
- (void)removeRenderObserver:(long long)arg1;
- (void)removeRenderObserver:(CDUnknownFunctionPointerType)arg1 userData:(void *)arg2;
- (void)setInputHandler:(CDUnknownBlockType)arg1;
- (void)setOutputProvider:(CDUnknownBlockType)arg1;
- (BOOL)startHardwareAndReturnError:(id *)arg1;
- (void)stopHardware;
- (long long)tokenByAddingRenderObserver:(CDUnknownBlockType)arg1;

@end

