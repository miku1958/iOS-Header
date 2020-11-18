//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentCredential.h>

@class NSString, NSURL;

@interface PKPaymentRemotePassCredential : PKPaymentCredential
{
    NSString *_serialNumber;
    NSString *_organizationName;
    NSString *_passDescription;
    NSURL *_passURL;
    NSString *_primaryAccountIdentifier;
}

@property (copy, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property (copy, nonatomic) NSString *passDescription; // @synthesize passDescription=_passDescription;
@property (copy, nonatomic) NSURL *passURL; // @synthesize passURL=_passURL;
@property (copy, nonatomic) NSString *primaryAccountIdentifier; // @synthesize primaryAccountIdentifier=_primaryAccountIdentifier;
@property (copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

