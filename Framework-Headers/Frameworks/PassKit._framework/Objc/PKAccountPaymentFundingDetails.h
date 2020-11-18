//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData;

@interface PKAccountPaymentFundingDetails : NSObject <NSSecureCoding>
{
    NSData *_encryptedData;
    NSData *_publicKeyHash;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_encryptedDataWithCertificatesResponse:(id)arg1 publicKeyHash:(id *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)fundingDetailsUnencryptedDictionary;
- (id)hashComponentWithCertificatesResponse:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonDictionaryRepresentation;
- (id)jsonDictionaryRepresentationWithCertificatesResponse:(id)arg1;
- (id)jsonString;

@end
