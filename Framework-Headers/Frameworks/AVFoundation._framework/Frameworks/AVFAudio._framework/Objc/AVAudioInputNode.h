//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFAudio/AVAudioIONode.h>

#import <AVFAudio/AVAudioMixing-Protocol.h>

@class NSString;

@interface AVAudioInputNode : AVAudioIONode <AVAudioMixing>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) float volume;

- (id)initWithIOUnit:(struct AVAudioIOUnit *)arg1;
- (float)rate;
- (void)setRate:(float)arg1;

@end
