//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteConfiguration/RCSerializable-Protocol.h>

@class NSArray, NSString, NSURL, RCDebugOverrides, RCDeviceInfo;

@interface RCConfigurationSettings : NSObject <RCSerializable>
{
    BOOL _useBackgroundRefreshRate;
    NSArray *_requestInfos;
    NSString *_userID;
    NSString *_storefrontID;
    NSString *_bundleID;
    RCDeviceInfo *_deviceInfo;
    RCDebugOverrides *_debugOverrides;
}

@property (readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) RCDebugOverrides *debugOverrides; // @synthesize debugOverrides=_debugOverrides;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) RCDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property (readonly, nonatomic) NSURL *fallbackURL;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *loggingKey;
@property (readonly, nonatomic) NSArray *requestInfos; // @synthesize requestInfos=_requestInfos;
@property (readonly, copy, nonatomic) NSString *storefrontID; // @synthesize storefrontID=_storefrontID;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL useBackgroundRefreshRate; // @synthesize useBackgroundRefreshRate=_useBackgroundRefreshRate;
@property (readonly, copy, nonatomic) NSString *userID; // @synthesize userID=_userID;

- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)initWithRequestInfos:(id)arg1 userID:(id)arg2 storefrontID:(id)arg3 bundleID:(id)arg4 deviceInfo:(id)arg5 debugOverrides:(id)arg6;
- (id)initWithRequestInfos:(id)arg1 userID:(id)arg2 storefrontID:(id)arg3 bundleID:(id)arg4 deviceInfo:(id)arg5 debugOverrides:(id)arg6 useBackgroundRefreshRate:(BOOL)arg7;
- (id)initWithRequestKey:(id)arg1 responseKey:(id)arg2 fallbackURL:(id)arg3 userID:(id)arg4 storefrontID:(id)arg5 bundleID:(id)arg6 deviceInfo:(id)arg7 debugOverrides:(id)arg8;
- (id)initWithRequestKey:(id)arg1 responseKey:(id)arg2 fallbackURL:(id)arg3 userID:(id)arg4 storefrontID:(id)arg5 bundleID:(id)arg6 deviceInfo:(id)arg7 debugOverrides:(id)arg8 useBackgroundRefreshRate:(BOOL)arg9;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid;

@end
