//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioToolboxCore/AUAudioUnitBus.h>

@class AUAudioUnitV2Bridge;

__attribute__((visibility("hidden")))
@interface AUV2BridgeBus : AUAudioUnitBus
{
    AUAudioUnitV2Bridge *_owner;
    struct OpaqueAudioComponentInstance *_audioUnit;
    unsigned int _scope;
    unsigned int _element;
}

- (void).cxx_destruct;
- (id)format;
- (id)initWithOwner:(id)arg1 au:(struct OpaqueAudioComponentInstance *)arg2 scope:(unsigned int)arg3 element:(unsigned int)arg4;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)setFormat:(id)arg1 error:(id *)arg2;

@end

