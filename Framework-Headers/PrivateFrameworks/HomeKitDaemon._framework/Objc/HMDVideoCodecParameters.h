//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDTLVBase.h>

#import <HomeKitDaemon/HMDTLVCreateParse-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSArray;

@interface HMDVideoCodecParameters : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding>
{
    NSArray *_h264Profiles;
    NSArray *_levels;
    NSArray *_packetizationModes;
}

@property (readonly, copy, nonatomic) NSArray *h264Profiles; // @synthesize h264Profiles=_h264Profiles;
@property (readonly, copy, nonatomic) NSArray *levels; // @synthesize levels=_levels;
@property (readonly, copy, nonatomic) NSArray *packetizationModes; // @synthesize packetizationModes=_packetizationModes;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)_parseFromTLVData;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProfiles:(id)arg1 levels:(id)arg2 packetizationModes:(id)arg3;
- (id)tlvData;

@end

