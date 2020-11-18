//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class AFTriggerlessListeningOptions;

@interface AFRequestCompletionOptions : NSObject <NSSecureCoding, NSCopying>
{
    AFTriggerlessListeningOptions *_triggerlessListeningOptions;
}

@property (copy, nonatomic) AFTriggerlessListeningOptions *triggerlessListeningOptions; // @synthesize triggerlessListeningOptions=_triggerlessListeningOptions;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithShowUIDuringListening:(BOOL)arg1 playAlertBeforeListening:(BOOL)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
