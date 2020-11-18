//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIFeedback.h>

#import <UIKit/_UIFeedbackContinuousPlayable-Protocol.h>

@class NSString;

@interface _UIContinuousFeedback : _UIFeedback <_UIFeedbackContinuousPlayable>
{
    double _duration;
    long long _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (readonly) Class superclass;
@property (nonatomic) long long type; // @synthesize type=_type;

+ (id)continuousFeedbackForType:(long long)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)type;
- (id)_debugDictionary;
- (unsigned long long)_effectiveEventType;
- (void)_playAtTime:(double)arg1;
- (id)_playableProtocol;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

