//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SFService, SFSession;
@protocol OS_dispatch_queue;

@interface SFDeviceSetupWHAService : NSObject
{
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    SFService *_sfService;
    SFSession *_sfSession;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _progressHandler;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_handleInfoExchange:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleRequest:(id)arg1 flags:(unsigned int)arg2 session:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)_handleSessionEnded:(id)arg1;
- (void)_handleSessionStarted:(id)arg1;
- (void)_sfServiceStart;
- (void)activate;
- (void)dealloc;
- (id)init;
- (void)invalidate;

@end
