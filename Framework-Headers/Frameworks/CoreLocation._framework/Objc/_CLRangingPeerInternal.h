//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSCopying-Protocol.h>

@class NSData;

@interface _CLRangingPeerInternal : NSObject <NSCopying>
{
    unsigned long long _macAddress;
    NSData *_secureRangingKeyID;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithMacAddressAsUInt:(unsigned long long)arg1 secureRangingKeyID:(id)arg2;

@end

