//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioToolbox/AUAudioUnitBus.h>

#import <AudioToolbox/NSSecureCoding-Protocol.h>

@class AUAudioUnit_XH, AVAudioFormat, NSArray;
@protocol AUAudioUnitXPCProtocol;

__attribute__((visibility("hidden")))
@interface AUAudioUnitBus_XPC : AUAudioUnitBus <NSSecureCoding>
{
    AUAudioUnit_XH *_audioUnit;
    id<AUAudioUnitXPCProtocol> _remoteAU;
    unsigned int _scope;
    unsigned int _element;
    AVAudioFormat *_format;
    NSArray *_supportedChannelLayoutTags;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)format;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEnabled;
- (void)propertyChanged:(id)arg1;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)setFormat:(id)arg1 error:(id *)arg2;

@end

