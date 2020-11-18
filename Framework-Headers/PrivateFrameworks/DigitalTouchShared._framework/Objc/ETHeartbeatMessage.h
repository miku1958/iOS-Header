//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DigitalTouchShared/ETMessage.h>

@class SKEmitterNode, SKNode, SKShader, SKSpriteNode, SKTexture, SKUniform;

@interface ETHeartbeatMessage : ETMessage
{
    SKNode *_heartNode;
    SKSpriteNode *_heartLines;
    SKSpriteNode *_heart;
    SKEmitterNode *_heartWisp;
    SKShader *_linesShader;
    SKShader *_heartShader;
    SKUniform *_speedUniform;
    SKUniform *_warpedTexAtlasUniform;
    SKUniform *_burTexUniform;
    SKUniform *_noiseTexUniform;
    SKUniform *_scaleUniform;
    SKUniform *_shaderTimeUniform;
    SKNode *_heartScale;
    float _hapticLoopPeriod;
    SKTexture *_heartbreakAtlas;
    BOOL _broken;
    float _beatsPerMinute;
    int _duration;
    float _scale;
    double _rotation;
    double _heartbreakTime;
    struct CGPoint _normalizedCenter;
}

@property (nonatomic) float beatsPerMinute; // @synthesize beatsPerMinute=_beatsPerMinute;
@property (readonly, nonatomic, getter=isBroken) BOOL broken; // @synthesize broken=_broken;
@property (nonatomic) int duration; // @synthesize duration=_duration;
@property (readonly, nonatomic) double heartbreakTime; // @synthesize heartbreakTime=_heartbreakTime;
@property (nonatomic) struct CGPoint normalizedCenter; // @synthesize normalizedCenter=_normalizedCenter;
@property (nonatomic) double rotation; // @synthesize rotation=_rotation;
@property (nonatomic) float scale; // @synthesize scale=_scale;

+ (unsigned short)messageType;
- (void).cxx_destruct;
- (void)_displayInScene:(id)arg1 useDuration:(BOOL)arg2;
- (void)_displayInScene:(id)arg1 useDuration:(BOOL)arg2 fastStart:(BOOL)arg3;
- (void)_startAudioPlayback;
- (void)_stopAudioPlayback;
- (id)archiveData;
- (void)breakHeart;
- (id)description;
- (void)displayInScene:(id)arg1;
- (id)initWithArchiveData:(id)arg1;
- (double)messageDuration;
- (id)messageTypeAsString;
- (void)moveHeartNodeByX:(double)arg1 y:(double)arg2 duration:(double)arg3;
- (void)playBeatWithDuration:(double)arg1;
- (void)setMute:(BOOL)arg1;
- (void)startHeartbeat:(id)arg1;
- (void)startHeartbeat:(id)arg1 fastStart:(BOOL)arg2;
- (void)stopPlaying;

@end
