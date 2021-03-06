//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SharedWebCredentials/NSCopying-Protocol.h>
#import <SharedWebCredentials/NSSecureCoding-Protocol.h>
#import <SharedWebCredentials/SWCRedactedDescription-Protocol.h>

@class NSString;

@interface _SWCApplicationIdentifier : NSObject <SWCRedactedDescription, NSCopying, NSSecureCoding>
{
    unsigned long long _hash;
    NSString *_prefix;
    NSString *_bundleIdentifier;
}

@property (readonly) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly) NSString *prefix; // @synthesize prefix=_prefix;
@property (readonly) NSString *rawValue;
@property (readonly, getter=isValid) BOOL valid;

+ (BOOL)isCaseSensitive;
+ (id)new;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)UUIDRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initForBundleRecord:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToApplicationIdentifierIgnoringPrefix:(id)arg1;
- (id)redactedDescription;

@end

