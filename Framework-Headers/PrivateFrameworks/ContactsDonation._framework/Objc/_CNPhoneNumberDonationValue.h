//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsDonation/CNDonationValue.h>

@class CNPhoneNumber, NSString;

@interface _CNPhoneNumberDonationValue : CNDonationValue
{
    CNPhoneNumber *_phoneNumber;
    NSString *_label;
}

@property (readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (readonly, copy, nonatomic) CNPhoneNumber *phoneNumber; // @synthesize phoneNumber=_phoneNumber;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)acceptDonationValueVisitor:(id)arg1;
- (id)copyWithNewExpirationDate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhoneNumber:(id)arg1 label:(id)arg2 origin:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (void)updatePropertyListRepresentation:(id)arg1;

@end
