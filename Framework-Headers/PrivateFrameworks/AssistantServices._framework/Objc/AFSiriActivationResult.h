//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSError;

@interface AFSiriActivationResult : NSObject <NSCopying, NSSecureCoding>
{
    long long _actionType;
    NSError *_error;
}

@property (readonly, nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property (readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;

+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithActionType:(long long)arg1 error:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end

