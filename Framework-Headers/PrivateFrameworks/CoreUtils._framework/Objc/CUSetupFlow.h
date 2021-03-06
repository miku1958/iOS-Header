//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/CUActivatable-Protocol.h>
#import <CoreUtils/CUEnvironmentable-Protocol.h>

@class CUEndpoint, CUEnvironment, NSMutableArray;
@protocol OS_dispatch_queue;

@interface CUSetupFlow : NSObject <CUActivatable, CUEnvironmentable>
{
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableArray *_stepArray;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    CUEnvironment *_environment;
    CDUnknownBlockType _errorHandler;
    CUEndpoint *_peerEndpoint;
    CDUnknownBlockType _runHandler;
    unsigned long long _setupFlags;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (strong, nonatomic) CUEnvironment *environment; // @synthesize environment=_environment;
@property (copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (strong, nonatomic) CUEndpoint *peerEndpoint; // @synthesize peerEndpoint=_peerEndpoint;
@property (copy, nonatomic) CDUnknownBlockType runHandler; // @synthesize runHandler=_runHandler;
@property (nonatomic) unsigned long long setupFlags; // @synthesize setupFlags=_setupFlags;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)addStep:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)reportError:(id)arg1;
- (BOOL)run;

@end

