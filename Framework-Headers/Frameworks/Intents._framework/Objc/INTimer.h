//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INSpeakableString, NSString;

@interface INTimer : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    INSpeakableString *_label;
    double _duration;
    double _remainingTime;
    NSString *_identifier;
    long long _state;
    long long _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) INSpeakableString *label; // @synthesize label=_label;
@property (readonly, nonatomic) double remainingTime; // @synthesize remainingTime=_remainingTime;
@property (readonly, nonatomic) long long state; // @synthesize state=_state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1 duration:(double)arg2 remainingTime:(double)arg3 identifier:(id)arg4 state:(long long)arg5;
- (id)initWithLabel:(id)arg1 duration:(double)arg2 remainingTime:(double)arg3 identifier:(id)arg4 state:(long long)arg5 type:(long long)arg6;
- (BOOL)isEqual:(id)arg1;

@end
