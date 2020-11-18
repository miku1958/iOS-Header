//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMFNetAddressInternal, NSString;

@interface HMFNetAddress : HMFObject
{
    HMFNetAddressInternal *_internal;
}

@property (readonly, nonatomic) unsigned long long addressFamily;
@property (readonly, copy, nonatomic) NSString *addressString;
@property (readonly, nonatomic) HMFNetAddressInternal *internal; // @synthesize internal=_internal;

+ (id)localAddress;
+ (id)shortDescription;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(BOOL)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithHostname:(id)arg1;
- (id)initWithSocketAddress:(const struct sockaddr *)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)shortDescription;

@end
