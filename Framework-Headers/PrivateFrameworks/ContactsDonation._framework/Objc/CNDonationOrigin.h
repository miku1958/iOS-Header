//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsDonation/NSCopying-Protocol.h>
#import <ContactsDonation/NSMutableCopying-Protocol.h>
#import <ContactsDonation/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSString;

@interface CNDonationOrigin : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_bundleIdentifier;
    NSString *_donationIdentifier;
    NSString *_clusterIdentifier;
    NSDate *_donationDate;
    NSDate *_expirationDate;
}

@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *clusterIdentifier; // @synthesize clusterIdentifier=_clusterIdentifier;
@property (readonly, copy, nonatomic) NSDate *donationDate; // @synthesize donationDate=_donationDate;
@property (readonly, copy, nonatomic) NSString *donationIdentifier; // @synthesize donationIdentifier=_donationIdentifier;
@property (readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (readonly, copy, nonatomic) NSDictionary *propertyListRepresentation;

+ (id)originWithUpdatedDonationIdentifier:(id)arg1 fromOrigin:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1 donationIdentifier:(id)arg2 clusterIdentifier:(id)arg3 donationDate:(id)arg4 expirationDate:(id)arg5;
- (id)initWithBundleIdentifier:(id)arg1 donationIdentifier:(id)arg2 donationDate:(id)arg3 expirationDate:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithDonationOrigin:(id)arg1;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
