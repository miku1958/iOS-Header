//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface ADRemoteSigningService : NSObject
{
    BOOL _didLeaveGroup;
    NSObject<OS_dispatch_queue> *_signingQueue;
    NSObject<OS_dispatch_group> *_signingGroup;
}

@property (nonatomic) BOOL didLeaveGroup; // @synthesize didLeaveGroup=_didLeaveGroup;
@property (nonatomic) NSObject<OS_dispatch_group> *signingGroup; // @synthesize signingGroup=_signingGroup;
@property (nonatomic) NSObject<OS_dispatch_queue> *signingQueue; // @synthesize signingQueue=_signingQueue;

+ (id)sharedInstance;
- (id)init;
- (id)signedCredentialForRequest:(id)arg1 withPersistence:(unsigned long long)arg2;

@end

