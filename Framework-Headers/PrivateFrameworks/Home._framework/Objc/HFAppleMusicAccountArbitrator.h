//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NAFuture, NSSet;

@interface HFAppleMusicAccountArbitrator : NSObject
{
    BOOL _forceLogout;
    ACAccount *_account;
    NSSet *_accessories;
    CDUnknownBlockType _contextGenerator;
    long long _loginType;
    NAFuture *_activeArbitrationFuture;
}

@property (readonly, copy, nonatomic) NSSet *accessories; // @synthesize accessories=_accessories;
@property (readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
@property (strong, nonatomic) NAFuture *activeArbitrationFuture; // @synthesize activeArbitrationFuture=_activeArbitrationFuture;
@property (readonly, copy, nonatomic) CDUnknownBlockType contextGenerator; // @synthesize contextGenerator=_contextGenerator;
@property (nonatomic) BOOL forceLogout; // @synthesize forceLogout=_forceLogout;
@property (nonatomic) long long loginType; // @synthesize loginType=_loginType;

- (void).cxx_destruct;
- (long long)_resolvedLoginType:(id *)arg1;
- (id)init;
- (id)initWithAccessories:(id)arg1 account:(id)arg2 contextGenerator:(CDUnknownBlockType)arg3;
- (id)pendingArbitrationExecutionFuture;

@end

