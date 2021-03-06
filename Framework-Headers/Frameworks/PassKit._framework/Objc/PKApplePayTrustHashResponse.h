//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceResponse.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface PKApplePayTrustHashResponse : PKAccountWebServiceResponse <NSSecureCoding>
{
    NSString *_referenceIdentifier;
    NSData *_nonce;
}

@property (readonly, copy, nonatomic) NSData *nonce; // @synthesize nonce=_nonce;
@property (readonly, copy, nonatomic) NSString *referenceIdentifier; // @synthesize referenceIdentifier=_referenceIdentifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;

@end

