//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class KCAESGCMDuplexSession, KCSRPServerContext, NSData;
@protocol KCJoiningAcceptCircleDelegate, KCJoiningAcceptSecretDelegate;

@interface KCJoiningAcceptSession : NSObject
{
    int _state;
    unsigned long long _dsid;
    NSObject<KCJoiningAcceptSecretDelegate> *_secretDelegate;
    NSObject<KCJoiningAcceptCircleDelegate> *_circleDelegate;
    KCSRPServerContext *_context;
    KCAESGCMDuplexSession *_session;
    NSData *_startMessage;
}

@property (readonly) NSObject<KCJoiningAcceptCircleDelegate> *circleDelegate; // @synthesize circleDelegate=_circleDelegate;
@property (readonly) KCSRPServerContext *context; // @synthesize context=_context;
@property (readonly) unsigned long long dsid; // @synthesize dsid=_dsid;
@property (readonly) NSObject<KCJoiningAcceptSecretDelegate> *secretDelegate; // @synthesize secretDelegate=_secretDelegate;
@property (readonly) KCAESGCMDuplexSession *session; // @synthesize session=_session;
@property (strong) NSData *startMessage; // @synthesize startMessage=_startMessage;
@property (readonly) int state; // @synthesize state=_state;

+ (id)sessionWithInitialMessage:(id)arg1 secretDelegate:(id)arg2 circleDelegate:(id)arg3 dsid:(unsigned long long)arg4 error:(id *)arg5;
- (void).cxx_destruct;
- (id)copyChallengeMessage:(id *)arg1;
- (id)description;
- (id)initWithSecretDelegate:(id)arg1 circleDelegate:(id)arg2 dsid:(unsigned long long)arg3 rng:(struct ccrng_state *)arg4 error:(id *)arg5;
- (BOOL)isDone;
- (id)processApplication:(id)arg1 error:(id *)arg2;
- (id)processInitialMessage:(id)arg1 error:(id *)arg2;
- (id)processMessage:(id)arg1 error:(id *)arg2;
- (id)processResponse:(id)arg1 error:(id *)arg2;
- (BOOL)setupSession:(id *)arg1;
- (id)stateString;

@end

