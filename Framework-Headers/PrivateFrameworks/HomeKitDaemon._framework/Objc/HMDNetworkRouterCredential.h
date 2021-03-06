//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSData, NSString;

@interface HMDNetworkRouterCredential : NSObject <NSCopying, HAPTLVProtocol>
{
    NSData *_macAddress;
    NSData *_psk;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSData *macAddress; // @synthesize macAddress=_macAddress;
@property (strong, nonatomic) NSData *psk; // @synthesize psk=_psk;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithMacAddress:(id)arg1 psk:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)parseFromData:(id)arg1 error:(id *)arg2;
- (id)serializeWithError:(id *)arg1;

@end

