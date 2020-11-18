//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDVideoResolution, NSNumber;

@interface HMDCameraVideoTier : NSObject <NSSecureCoding>
{
    HMDVideoResolution *_videoResolution;
    NSNumber *_maxBitRate;
    NSNumber *_minBitRate;
    NSNumber *_rtcpInterval;
    NSNumber *_framerate;
}

@property (strong, nonatomic) NSNumber *framerate; // @synthesize framerate=_framerate;
@property (readonly, nonatomic) NSNumber *maxBitRate; // @synthesize maxBitRate=_maxBitRate;
@property (readonly, nonatomic) NSNumber *minBitRate; // @synthesize minBitRate=_minBitRate;
@property (readonly, nonatomic) NSNumber *rtcpInterval; // @synthesize rtcpInterval=_rtcpInterval;
@property (readonly, nonatomic) HMDVideoResolution *videoResolution; // @synthesize videoResolution=_videoResolution;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideoResolution:(id)arg1 framerate:(id)arg2 minBitRate:(id)arg3 maxBitRate:(id)arg4 rtcpInterval:(id)arg5;
- (BOOL)isEqual:(id)arg1;

@end

