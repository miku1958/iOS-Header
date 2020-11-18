//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/NSCopying-Protocol.h>
#import <DoNotDisturb/NSSecureCoding-Protocol.h>

@class DNDModeAssertion;

@interface DNDModeAssertionInvalidation : NSObject <NSCopying, NSSecureCoding>
{
    DNDModeAssertion *_assertion;
    unsigned long long _reason;
}

@property (readonly, copy, nonatomic) DNDModeAssertion *assertion; // @synthesize assertion=_assertion;
@property (readonly, nonatomic) unsigned long long reason; // @synthesize reason=_reason;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAssertion:(id)arg1 reason:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

