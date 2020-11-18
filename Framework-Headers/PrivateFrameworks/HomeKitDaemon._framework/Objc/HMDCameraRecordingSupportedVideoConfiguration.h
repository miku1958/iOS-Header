//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDTLVBase.h>

#import <HomeKitDaemon/HMDTLVCreateParse-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSArray;

@interface HMDCameraRecordingSupportedVideoConfiguration : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding>
{
    NSArray *_codecConfigurations;
}

@property (readonly, copy, nonatomic) NSArray *codecConfigurations; // @synthesize codecConfigurations=_codecConfigurations;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)_parseFromTLVData;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCodecConfigurations:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)tlvData;

@end
