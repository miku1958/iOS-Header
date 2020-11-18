//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDUserMessagePolicy.h>

@interface HMDMutableUserMessagePolicy : HMDUserMessagePolicy
{
}

@property BOOL requiresCameraStreamingAccess; // @dynamic requiresCameraStreamingAccess;
@property BOOL requiresRemoteAccess; // @dynamic requiresRemoteAccess;
@property unsigned long long userPrivilege; // @dynamic userPrivilege;

+ (id)userMessagePolicyWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(BOOL)arg3;
+ (id)userMessagePolicyWithHome:(id)arg1 userPrivilege:(unsigned long long)arg2 remoteAccessRequired:(BOOL)arg3 requiresCameraStreamingAccess:(BOOL)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
