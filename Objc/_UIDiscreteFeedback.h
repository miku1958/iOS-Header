//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIFeedback.h>

#import <UIKitCore/_UIFeedbackDiscretePlayable-Protocol.h>

@class NSString;

@interface _UIDiscreteFeedback : _UIFeedback <_UIFeedbackDiscretePlayable>
{
    BOOL _highPriority;
    long long _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isHighPriority) BOOL highPriority; // @synthesize highPriority=_highPriority;
@property (readonly) Class superclass;
@property (nonatomic) long long type; // @synthesize type=_type;

+ (id)discreteFeedbackForType:(long long)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)type;
- (id)_debugDictionary;
- (unsigned long long)_effectiveEventType;
- (unsigned int)_effectiveSystemSoundID;
- (id)_playableProtocol;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPlaying;

@end

