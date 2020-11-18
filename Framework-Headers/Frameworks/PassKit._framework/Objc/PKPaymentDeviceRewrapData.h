//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKPaymentDeviceRewrapData : NSObject <NSSecureCoding>
{
    NSString *_deviceIdentifier;
    NSString *_CASDECCCertificate;
    NSString *_CASDRSACertificate;
}

@property (copy, nonatomic) NSString *CASDECCCertificate; // @synthesize CASDECCCertificate=_CASDECCCertificate;
@property (copy, nonatomic) NSString *CASDRSACertificate; // @synthesize CASDRSACertificate=_CASDRSACertificate;
@property (copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

