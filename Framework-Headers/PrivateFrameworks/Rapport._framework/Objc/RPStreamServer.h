//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, RPMessageable;

@interface RPStreamServer : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    id _selfRef;
    struct NSMutableDictionary *_streamSessions;
    unsigned int _streamFlags;
    CDUnknownBlockType _invalidationHandler;
    id<RPMessageable> _messenger;
    CDUnknownBlockType _streamAcceptHandler;
    CDUnknownBlockType _streamPrepareHandlerEx;
    CDUnknownBlockType _streamPrepareHandler;
}

@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (strong, nonatomic) id<RPMessageable> messenger; // @synthesize messenger=_messenger;
@property (copy, nonatomic) CDUnknownBlockType streamAcceptHandler; // @synthesize streamAcceptHandler=_streamAcceptHandler;
@property (nonatomic) unsigned int streamFlags; // @synthesize streamFlags=_streamFlags;
@property (copy, nonatomic) CDUnknownBlockType streamPrepareHandler; // @synthesize streamPrepareHandler=_streamPrepareHandler;
@property (copy, nonatomic) CDUnknownBlockType streamPrepareHandlerEx; // @synthesize streamPrepareHandlerEx=_streamPrepareHandlerEx;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleStartRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_handleStopRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (void)invalidate;

@end

