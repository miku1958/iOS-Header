//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PDS/NSSecureCoding-Protocol.h>

@class NSString;

@interface PDSRegistration : NSObject <NSSecureCoding>
{
    BOOL _pushEnvironment;
    NSString *_topicString;
    NSString *_qualifierString;
}

@property (readonly, nonatomic) BOOL pushEnvironment; // @synthesize pushEnvironment=_pushEnvironment;
@property (readonly, nonatomic) NSString *qualifierString; // @synthesize qualifierString=_qualifierString;
@property (readonly, nonatomic) NSString *topicString; // @synthesize topicString=_topicString;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTopic:(id)arg1 qualifier:(id)arg2 pushEnvironment:(BOOL)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToRegistration:(id)arg1;

@end

