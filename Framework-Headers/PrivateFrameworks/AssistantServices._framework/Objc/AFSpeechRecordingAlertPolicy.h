//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class AFSpeechRecordingAlertBehavior;

@interface AFSpeechRecordingAlertPolicy : NSObject <NSCopying, NSSecureCoding>
{
    AFSpeechRecordingAlertBehavior *_startingAlertBehavior;
    AFSpeechRecordingAlertBehavior *_stoppedAlertBehavior;
    AFSpeechRecordingAlertBehavior *_stoppedWithErrorAlertBehavior;
}

@property (readonly, copy, nonatomic) AFSpeechRecordingAlertBehavior *startingAlertBehavior; // @synthesize startingAlertBehavior=_startingAlertBehavior;
@property (readonly, copy, nonatomic) AFSpeechRecordingAlertBehavior *stoppedAlertBehavior; // @synthesize stoppedAlertBehavior=_stoppedAlertBehavior;
@property (readonly, copy, nonatomic) AFSpeechRecordingAlertBehavior *stoppedWithErrorAlertBehavior; // @synthesize stoppedWithErrorAlertBehavior=_stoppedWithErrorAlertBehavior;

+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartingAlertBehavior:(id)arg1 stoppedAlertBehavior:(id)arg2 stoppedWithErrorAlertBehavior:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end

