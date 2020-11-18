//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDTLVBase.h>

#import <HomeKitDaemon/HMDTLVCreateParse-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@interface HMDStreamingStatus : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding>
{
    unsigned long long _streamingStatus;
}

@property (readonly, nonatomic) unsigned long long streamingStatus; // @synthesize streamingStatus=_streamingStatus;

+ (BOOL)supportsSecureCoding;
- (BOOL)_parseFromTLVData;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)tlvData;

@end
