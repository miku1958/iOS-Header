//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/NSCopying-Protocol.h>
#import <ContactsFoundation/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CNHandleStringClassification : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_emailAddresses;
    NSArray *_phoneNumbers;
    NSArray *_unknown;
}

@property (readonly, copy, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property (readonly, copy, nonatomic) NSArray *phoneNumbers; // @synthesize phoneNumbers=_phoneNumbers;
@property (readonly, copy, nonatomic) NSArray *unknown; // @synthesize unknown=_unknown;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBuilder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmailAddresses:(id)arg1 phoneNumbers:(id)arg2 unknown:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end

