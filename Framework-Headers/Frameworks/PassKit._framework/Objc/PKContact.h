//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class CNPhoneNumber, CNPostalAddress, NSPersonNameComponents, NSString;

@interface PKContact : NSObject <NSSecureCoding>
{
    NSPersonNameComponents *_name;
    CNPostalAddress *_postalAddress;
    CNPhoneNumber *_phoneNumber;
    NSString *_emailAddress;
    NSString *_supplementarySubLocality;
}

@property (strong, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property (strong, nonatomic) NSPersonNameComponents *name; // @synthesize name=_name;
@property (strong, nonatomic) CNPhoneNumber *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property (strong, nonatomic) CNPostalAddress *postalAddress; // @synthesize postalAddress=_postalAddress;
@property (strong, nonatomic) NSString *supplementarySubLocality; // @synthesize supplementarySubLocality=_supplementarySubLocality;

+ (BOOL)supportsSecureCoding;
+ (long long)version;
- (void).cxx_destruct;
- (id)cnMutableContact;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCNContact:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToContact:(id)arg1;

@end

