//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDTLVBase.h>

#import <HomeKitDaemon/HMDTLVCreateParse-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDSRTPCryptoSuite, NSData;

@interface HMDSRTPParameters : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding>
{
    HMDSRTPCryptoSuite *_srtpCryptoSuite;
    NSData *_srtpMasterKey;
    NSData *_srtpMasterSalt;
}

@property (readonly, copy, nonatomic) HMDSRTPCryptoSuite *srtpCryptoSuite; // @synthesize srtpCryptoSuite=_srtpCryptoSuite;
@property (readonly, copy, nonatomic) NSData *srtpMasterKey; // @synthesize srtpMasterKey=_srtpMasterKey;
@property (readonly, copy, nonatomic) NSData *srtpMasterSalt; // @synthesize srtpMasterSalt=_srtpMasterSalt;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)_parseFromTLVData;
- (BOOL)compatibleWithRemoteEndPoint:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCryptoSuite:(id)arg1 masterKey:(id)arg2 masterSalt:(id)arg3;
- (id)tlvData;

@end

