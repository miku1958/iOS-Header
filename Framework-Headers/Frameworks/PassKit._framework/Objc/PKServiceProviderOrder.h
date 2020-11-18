//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface PKServiceProviderOrder : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSString *_itemDescription;
    NSString *_serviceProviderIdentifier;
    NSDictionary *_serviceProviderData;
    unsigned long long _paymentInstrumentType;
    NSData *_appletValue;
    NSString *_transactionIdentifier;
}

@property (copy, nonatomic) NSData *appletValue; // @synthesize appletValue=_appletValue;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property (nonatomic) unsigned long long paymentInstrumentType; // @synthesize paymentInstrumentType=_paymentInstrumentType;
@property (copy, nonatomic) NSDictionary *serviceProviderData; // @synthesize serviceProviderData=_serviceProviderData;
@property (copy, nonatomic) NSString *serviceProviderIdentifier; // @synthesize serviceProviderIdentifier=_serviceProviderIdentifier;
@property (copy, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_itemDictionary;
- (id)_paymentInstrumentDictionary;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
