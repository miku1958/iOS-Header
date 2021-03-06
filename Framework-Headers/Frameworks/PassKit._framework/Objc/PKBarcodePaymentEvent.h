//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSString;

@interface PKBarcodePaymentEvent : NSObject <NSSecureCoding>
{
    BOOL _biometricsChanged;
    long long _version;
    NSDate *_timestamp;
    unsigned long long _eventType;
    NSString *_barcodeIdentifier;
    long long _authenticationType;
    NSString *_deviceAccountIdentifier;
    NSData *_eventMetadata;
}

@property (nonatomic) long long authenticationType; // @synthesize authenticationType=_authenticationType;
@property (copy, nonatomic) NSString *barcodeIdentifier; // @synthesize barcodeIdentifier=_barcodeIdentifier;
@property (nonatomic) BOOL biometricsChanged; // @synthesize biometricsChanged=_biometricsChanged;
@property (copy, nonatomic) NSString *deviceAccountIdentifier; // @synthesize deviceAccountIdentifier=_deviceAccountIdentifier;
@property (copy, nonatomic) NSData *eventMetadata; // @synthesize eventMetadata=_eventMetadata;
@property (nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
@property (copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property (readonly, nonatomic) long long version; // @synthesize version=_version;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToBarcodePaymentEvent:(id)arg1;

@end

