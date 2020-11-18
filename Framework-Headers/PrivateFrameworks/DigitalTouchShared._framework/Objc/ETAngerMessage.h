//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DigitalTouchShared/ETMessage.h>

@class NSMutableArray, SKSpriteNode;

@interface ETAngerMessage : ETMessage
{
    SKSpriteNode *_anger;
    NSMutableArray *_points;
    NSMutableArray *_delays;
    double _duration;
    struct CGPoint _normalizedCenter;
}

@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (nonatomic) struct CGPoint normalizedCenter; // @synthesize normalizedCenter=_normalizedCenter;

+ (unsigned short)messageType;
- (void).cxx_destruct;
- (void)_updateCenterFromNormalizedPoint:(struct CGPoint)arg1 inScene:(id)arg2;
- (id)archiveData;
- (void)displayInScene:(id)arg1;
- (id)init;
- (id)initWithArchiveData:(id)arg1;
- (double)messageDuration;
- (id)messageTypeAsString;
- (void)setNormalizedPoint:(struct CGPoint)arg1 atRelativeTime:(double)arg2 inScene:(id)arg3;
- (void)stopPlaying;

@end
