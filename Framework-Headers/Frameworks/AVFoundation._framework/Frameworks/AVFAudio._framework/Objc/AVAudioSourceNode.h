//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFAudio/AVAudioNode.h>

#import <AVFAudio/AVAudioMixing-Protocol.h>

@class NSString;

@interface AVAudioSourceNode : AVAudioNode <AVAudioMixing>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) float volume; // @dynamic volume;

+ (CDUnknownBlockType)pullInputBlockFromRenderBlock:(CDUnknownBlockType)arg1;
- (id)initWithFormat:(id)arg1 renderBlock:(CDUnknownBlockType)arg2;
- (id)initWithRenderBlock:(CDUnknownBlockType)arg1;

@end
