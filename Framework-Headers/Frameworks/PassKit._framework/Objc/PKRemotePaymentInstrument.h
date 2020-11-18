//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDate, NSString, PKPaymentApplication;

@interface PKRemotePaymentInstrument : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _supportsAutomaticSelection;
    NSString *_passIdentifier;
    NSData *_manifestHash;
    NSString *_displayName;
    NSString *_primaryAccountNumberSuffix;
    NSString *_primaryAccountIdentifier;
    NSArray *_paymentApplications;
    PKPaymentApplication *_primaryPaymentApplication;
    NSDate *_ingestedDate;
    NSArray *_associatedWebDomains;
}

@property (strong, nonatomic) NSArray *associatedWebDomains; // @synthesize associatedWebDomains=_associatedWebDomains;
@property (copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (strong, nonatomic) NSDate *ingestedDate; // @synthesize ingestedDate=_ingestedDate;
@property (copy, nonatomic) NSData *manifestHash; // @synthesize manifestHash=_manifestHash;
@property (copy, nonatomic) NSString *passIdentifier; // @synthesize passIdentifier=_passIdentifier;
@property (strong, nonatomic) NSArray *paymentApplications; // @synthesize paymentApplications=_paymentApplications;
@property (copy, nonatomic) NSString *primaryAccountIdentifier; // @synthesize primaryAccountIdentifier=_primaryAccountIdentifier;
@property (copy, nonatomic) NSString *primaryAccountNumberSuffix; // @synthesize primaryAccountNumberSuffix=_primaryAccountNumberSuffix;
@property (strong, nonatomic) PKPaymentApplication *primaryPaymentApplication; // @synthesize primaryPaymentApplication=_primaryPaymentApplication;
@property (nonatomic) BOOL supportsAutomaticSelection; // @synthesize supportsAutomaticSelection=_supportsAutomaticSelection;

+ (id)remotePaymentInstrumentWithProtobuf:(id)arg1;
+ (id)sortDescriptorForDefaultPaymentInstrument:(id)arg1 supportedNetworks:(id)arg2 merchantCapabilities:(unsigned long long)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentPass:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToRemotePaymentInstrument:(id)arg1;
- (id)protobuf;

@end

