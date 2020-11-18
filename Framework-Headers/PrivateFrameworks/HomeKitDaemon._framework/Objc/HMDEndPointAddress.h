//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDTLVBase.h>

#import <HomeKitDaemon/HMDTLVCreateParse-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface HMDEndPointAddress : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding>
{
    BOOL _isIPv6Address;
    NSString *_ipAddress;
    NSNumber *_videoRTPPort;
    NSNumber *_audioRTPPort;
}

@property (readonly, copy, nonatomic) NSNumber *audioRTPPort; // @synthesize audioRTPPort=_audioRTPPort;
@property (readonly, copy, nonatomic) NSString *ipAddress; // @synthesize ipAddress=_ipAddress;
@property (readonly, nonatomic) BOOL isIPv6Address; // @synthesize isIPv6Address=_isIPv6Address;
@property (readonly, copy, nonatomic) NSNumber *videoRTPPort; // @synthesize videoRTPPort=_videoRTPPort;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)_parseFromTLVData;
- (BOOL)compatibleWithRemoteEndPoint:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIPAddress:(id)arg1 isIPv6Address:(BOOL)arg2 videoRTPPort:(id)arg3 audioRTPPort:(id)arg4;
- (id)tlvData;

@end

