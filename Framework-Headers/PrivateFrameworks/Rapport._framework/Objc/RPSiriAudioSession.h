//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Rapport/NSSecureCoding-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface RPSiriAudioSession : NSObject <NSSecureCoding>
{
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory *_ucat;
    NSXPCConnection *_xpcCnx;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    NSString *_sessionID;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1 reactivate:(BOOL)arg2;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidated;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (void)receivedSiriAudioEvent:(id)arg1;

@end

