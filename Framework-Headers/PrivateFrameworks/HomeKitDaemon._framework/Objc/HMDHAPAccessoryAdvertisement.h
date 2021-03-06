//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDAccessoryAdvertisement.h>

@class NSData;

@interface HMDHAPAccessoryAdvertisement : HMDAccessoryAdvertisement
{
    BOOL _pairingPresent;
    NSData *_setupHash;
}

@property (readonly, nonatomic) BOOL pairingPresent; // @synthesize pairingPresent=_pairingPresent;
@property (strong, nonatomic) NSData *setupHash; // @synthesize setupHash=_setupHash;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 categoryIdentifier:(id)arg3 pairingPresent:(BOOL)arg4 setupHash:(id)arg5;
- (BOOL)isEqual:(id)arg1;

@end

