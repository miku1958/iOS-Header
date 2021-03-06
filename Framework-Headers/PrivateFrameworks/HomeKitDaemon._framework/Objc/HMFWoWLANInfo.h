//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSArray, NSData;

@interface HMFWoWLANInfo : HMFObject <NSSecureCoding>
{
    NSData *_primaryMACAddress;
    NSArray *_additionalMACAddresses;
}

@property (readonly, nonatomic) NSArray *additionalMACAddresses; // @synthesize additionalMACAddresses=_additionalMACAddresses;
@property (readonly, nonatomic) NSData *primaryMACAddress; // @synthesize primaryMACAddress=_primaryMACAddress;

+ (id)shortDescription;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrimaryIdentifier:(id)arg1 wifiIdentifiers:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

