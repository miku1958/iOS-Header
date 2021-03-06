//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailAddressing/NSSecureCoding-Protocol.h>

@class NSString;

@interface _EAEmailAddress : NSObject <NSSecureCoding>
{
    NSString *_emailAddress;
}

@property (readonly, copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property (readonly, copy, nonatomic) NSString *rawAddress;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmailAddress:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

