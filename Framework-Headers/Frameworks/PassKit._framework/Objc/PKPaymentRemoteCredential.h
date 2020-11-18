//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentCredential.h>

@class NSArray, NSString, NSURL, PKPaymentPass;

@interface PKPaymentRemoteCredential : PKPaymentCredential
{
    NSString *_identifier;
    long long _status;
    NSURL *_passURL;
    NSArray *_summaryMetadata;
    NSArray *_metadata;
    NSString *_summaryMetadataDescription;
    NSString *_statusDescription;
    PKPaymentPass *_paymentPass;
    unsigned long long _rank;
}

@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) NSArray *metadata; // @synthesize metadata=_metadata;
@property (copy, nonatomic) NSURL *passURL; // @synthesize passURL=_passURL;
@property (strong, nonatomic) PKPaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;
@property (nonatomic) unsigned long long rank; // @synthesize rank=_rank;
@property (nonatomic) long long status; // @synthesize status=_status;
@property (readonly, copy, nonatomic) NSString *statusDescription; // @synthesize statusDescription=_statusDescription;
@property (readonly, copy, nonatomic) NSArray *summaryMetadata; // @synthesize summaryMetadata=_summaryMetadata;
@property (readonly, copy, nonatomic) NSString *summaryMetadataDescription; // @synthesize summaryMetadataDescription=_summaryMetadataDescription;

- (void).cxx_destruct;
- (BOOL)_isEqualToCredential:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 status:(long long)arg2 credentialType:(long long)arg3 passURL:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (void)updateWithDictionary:(id)arg1;

@end

