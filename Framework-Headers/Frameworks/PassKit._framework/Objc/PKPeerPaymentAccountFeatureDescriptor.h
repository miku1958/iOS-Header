//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSDecimalNumber, NSString;

@interface PKPeerPaymentAccountFeatureDescriptor : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSDecimalNumber *_minimumAmount;
    NSDecimalNumber *_maximumAmount;
    NSString *_merchantIdentifier;
    NSArray *_supportedNetworks;
    unsigned long long _merchantCapabilities;
}

@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSDecimalNumber *maximumAmount; // @synthesize maximumAmount=_maximumAmount;
@property (nonatomic) unsigned long long merchantCapabilities; // @synthesize merchantCapabilities=_merchantCapabilities;
@property (copy, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
@property (copy, nonatomic) NSDecimalNumber *minimumAmount; // @synthesize minimumAmount=_minimumAmount;
@property (copy, nonatomic) NSArray *supportedNetworks; // @synthesize supportedNetworks=_supportedNetworks;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

