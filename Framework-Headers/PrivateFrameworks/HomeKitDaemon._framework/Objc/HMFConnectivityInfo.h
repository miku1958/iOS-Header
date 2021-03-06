//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMFWoBLEInfo, HMFWoWLANInfo, NSString;

@interface HMFConnectivityInfo : HMFObject <NSSecureCoding>
{
    NSString *_accessoryIdentifier;
    HMFWoBLEInfo *_woBLEInfo;
    HMFWoWLANInfo *_woWLANInfo;
}

@property (readonly, nonatomic) NSString *accessoryIdentifier; // @synthesize accessoryIdentifier=_accessoryIdentifier;
@property (strong, nonatomic) HMFWoBLEInfo *woBLEInfo; // @synthesize woBLEInfo=_woBLEInfo;
@property (strong, nonatomic) HMFWoWLANInfo *woWLANInfo; // @synthesize woWLANInfo=_woWLANInfo;

+ (id)shortDescription;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccessory:(id)arg1 woBLEInfo:(id)arg2;
- (id)initWithAccessory:(id)arg1 woWLANInfo:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)updateWithWoBLEInfo:(id)arg1;
- (void)updateWithWoWLANInfo:(id)arg1;

@end

