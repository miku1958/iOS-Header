//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVOutputDeviceAuthorizedPeerInternal, NSData, NSString;

@interface AVOutputDeviceAuthorizedPeer : NSObject
{
    AVOutputDeviceAuthorizedPeerInternal *_ivars;
}

@property (readonly, nonatomic) BOOL hasAdministratorPrivileges;
@property (readonly, nonatomic) NSString *peerID;
@property (readonly, nonatomic) NSData *publicKey;

- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (id)initWithID:(id)arg1 publicKey:(id)arg2 hasAdministratorPrivileges:(BOOL)arg3;
- (BOOL)isEqual:(id)arg1;

@end

