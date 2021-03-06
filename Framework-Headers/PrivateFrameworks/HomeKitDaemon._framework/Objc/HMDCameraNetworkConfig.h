//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSNumber, NSString;

@interface HMDCameraNetworkConfig : HMFObject <NSCopying>
{
    CDUnion_fab80606 _ipv4SockAddress;
    CDUnion_fab80606 _ipv6SockAddress;
    BOOL _ipv6;
    NSString *_ipAddress;
    NSNumber *_rtpPort;
}

@property (strong, nonatomic) NSString *ipAddress; // @synthesize ipAddress=_ipAddress;
@property (nonatomic) BOOL ipv6; // @synthesize ipv6=_ipv6;
@property (strong, nonatomic) NSNumber *rtpPort; // @synthesize rtpPort=_rtpPort;

+ (id)localIPAddress;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (id)initWithAddress:(id)arg1 ipv6:(BOOL)arg2 rtpPort:(id)arg3;

@end

