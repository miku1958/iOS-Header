//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@interface AFAccessibilityState : NSObject <NSCopying, NSSecureCoding>
{
    long long _isVoiceOverTouchEnabled;
    long long _isVibrationDisabled;
}

@property (readonly, nonatomic) long long isVibrationDisabled; // @synthesize isVibrationDisabled=_isVibrationDisabled;
@property (readonly, nonatomic) long long isVoiceOverTouchEnabled; // @synthesize isVoiceOverTouchEnabled=_isVoiceOverTouchEnabled;

+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
+ (BOOL)supportsSecureCoding;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIsVoiceOverTouchEnabled:(long long)arg1 isVibrationDisabled:(long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end

