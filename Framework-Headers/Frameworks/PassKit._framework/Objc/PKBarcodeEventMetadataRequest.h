//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKBarcodeEventMetadataRequest : NSObject <NSSecureCoding>
{
    NSString *_deviceAccountIdentifier;
    NSString *_lastUsedBarcodeIdentifier;
}

@property (copy, nonatomic) NSString *deviceAccountIdentifier; // @synthesize deviceAccountIdentifier=_deviceAccountIdentifier;
@property (copy, nonatomic) NSString *lastUsedBarcodeIdentifier; // @synthesize lastUsedBarcodeIdentifier=_lastUsedBarcodeIdentifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBarcodeIdentifier:(id)arg1 deviceAccountIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end
