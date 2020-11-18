//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFMessagePolicy.h>

#import <HomeKitDaemon/NSMutableCopying-Protocol.h>

@class HMDHome, NSUUID;

@interface HMDUserMessagePolicy : HMFMessagePolicy <NSMutableCopying>
{
    NSUUID *_homeUUID;
    unsigned long long _userPrivilege;
    BOOL _requiresRemoteAccess;
    BOOL _requiresCameraStreamingAccess;
    HMDHome *_home;
}

@property (readonly, weak) HMDHome *home; // @synthesize home=_home;
@property (readonly) BOOL requiresCameraStreamingAccess; // @synthesize requiresCameraStreamingAccess=_requiresCameraStreamingAccess;
@property (readonly) BOOL requiresRemoteAccess; // @synthesize requiresRemoteAccess=_requiresRemoteAccess;
@property (readonly) unsigned long long userPrivilege; // @synthesize userPrivilege=_userPrivilege;

+ (id)userMessagePolicyWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(BOOL)arg3;
+ (id)userMessagePolicyWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(BOOL)arg3 requiresCameraStreamingAccess:(BOOL)arg4;
- (void).cxx_destruct;
- (id)__initWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(BOOL)arg3 requiresCameraStreamingAccess:(BOOL)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
