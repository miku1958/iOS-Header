//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface AFSpeechSynthesisRecord : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_utterance;
    unsigned long long _beginTimestamp;
    unsigned long long _endTimestamp;
}

@property (readonly, nonatomic) unsigned long long beginTimestamp; // @synthesize beginTimestamp=_beginTimestamp;
@property (readonly, nonatomic) unsigned long long endTimestamp; // @synthesize endTimestamp=_endTimestamp;
@property (readonly, copy, nonatomic) NSString *utterance; // @synthesize utterance=_utterance;

+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUtterance:(id)arg1 beginTimestamp:(unsigned long long)arg2 endTimestamp:(unsigned long long)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end

