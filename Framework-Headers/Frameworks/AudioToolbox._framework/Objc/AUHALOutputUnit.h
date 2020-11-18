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
}

@property (nonatomic, getter=isInputEnabled) BOOL inputEnabled;
@property (nonatomic, getter=isOutputEnabled) BOOL outputEnabled;

- (CDUnknownBlockType)_inputHandler;
- (BOOL)canPerformInput;
- (BOOL)canPerformOutput;
- (void)dealloc;
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (CDUnknownBlockType)outputProvider;
- (void)setInputHandler:(CDUnknownBlockType)arg1;
- (void)setOutputProvider:(CDUnknownBlockType)arg1;
- (BOOL)startHardwareAndReturnError:(id *)arg1;
- (void)stopHardware;

@end
