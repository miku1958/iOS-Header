//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioNode, AVAudioPlayerNode, SCNAudioSource;

@interface SCNAudioPlayer : NSObject
{
    AVAudioNode *_audioNode;
    AVAudioPlayerNode *_audioPlayer;
    SCNAudioSource *_audioSource;
    struct __C3DNode *_nodeRef;
    struct __C3DScene *_scene;
    BOOL _customAudioNode;
    BOOL _completed;
    CDUnknownBlockType willStartPlayback;
    CDUnknownBlockType didFinishPlayback;
}

@property (readonly, nonatomic) AVAudioNode *audioNode; // @synthesize audioNode=_audioNode;
@property (readonly) AVAudioPlayerNode *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property (readonly, nonatomic) SCNAudioSource *audioSource; // @synthesize audioSource=_audioSource;
@property BOOL completed; // @synthesize completed=_completed;
@property (readonly) BOOL customAudioNode; // @synthesize customAudioNode=_customAudioNode;
@property (copy, nonatomic) CDUnknownBlockType didFinishPlayback; // @synthesize didFinishPlayback;
@property (readonly) struct __C3DScene *scene; // @synthesize scene=_scene;
@property (copy, nonatomic) CDUnknownBlockType willStartPlayback; // @synthesize willStartPlayback;

+ (id)audioPlayerWithAVAudioNode:(id)arg1;
+ (id)audioPlayerWithSource:(id)arg1;
- (void *)__CFObject;
- (id)audioBufferFormat;
- (void)dealloc;
- (id)initWithAVAudioNode:(id)arg1;
- (id)initWithSource:(id)arg1;
- (struct __C3DNode *)nodeRef;
- (void)play;
- (void)recycle;
- (void)reset;
- (void)setNodeRef:(struct __C3DNode *)arg1;

@end

