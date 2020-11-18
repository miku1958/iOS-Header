//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, SFPeerDevice;

@interface SFActivityAdvertisement : NSObject <NSSecureCoding>
{
    long long _advertisementVersion;
    NSData *_advertisementPayload;
    NSDictionary *_options;
    SFPeerDevice *_device;
}

@property (readonly, copy) NSData *advertisementPayload; // @synthesize advertisementPayload=_advertisementPayload;
@property (readonly) long long advertisementVersion; // @synthesize advertisementVersion=_advertisementVersion;
@property (readonly, strong) SFPeerDevice *device; // @synthesize device=_device;
@property (readonly, copy) NSDictionary *options; // @synthesize options=_options;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAdvertisementVersion:(unsigned long long)arg1 advertisementPayload:(id)arg2 options:(id)arg3 device:(id)arg4;
- (id)initWithCoder:(id)arg1;

@end

