//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDHomeManager, NSData, NSDictionary;

@interface HMDDeviceSetupSessionInternal : HMFObject
{
    unsigned long long _state;
    HMDHomeManager *_homeManager;
    NSData *_sessionData;
    NSDictionary *_userInfo;
}

@property (readonly, weak) HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property (strong, nonatomic) NSData *sessionData; // @synthesize sessionData=_sessionData;
@property (nonatomic) unsigned long long state; // @synthesize state=_state;
@property (strong, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;

+ (id)allowedClasses;
+ (BOOL)isSupported;
+ (long long)role;
- (void).cxx_destruct;
- (id)initWithHomeManager:(id)arg1;
- (BOOL)processSessionData:(id)arg1 error:(id *)arg2;

@end

