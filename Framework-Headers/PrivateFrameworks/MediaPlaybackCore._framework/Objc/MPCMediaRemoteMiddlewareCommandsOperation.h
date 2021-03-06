//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

#import <MediaPlaybackCore/MPMiddlewareOperation-Protocol.h>

@class MPCFuture, MPCMediaRemoteMiddleware, NSArray, NSError, NSString;

@interface MPCMediaRemoteMiddlewareCommandsOperation : MPAsyncOperation <MPMiddlewareOperation>
{
    CDUnknownBlockType _invalidationHandler;
    NSArray *_invalidationObservers;
    MPCMediaRemoteMiddleware *_middleware;
    MPCFuture *_supportedCommandsFuture;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (readonly, nonatomic) NSArray *invalidationObservers; // @synthesize invalidationObservers=_invalidationObservers;
@property (strong, nonatomic) MPCMediaRemoteMiddleware *middleware; // @synthesize middleware=_middleware;
@property (readonly) Class superclass;
@property (strong, nonatomic) MPCFuture *supportedCommandsFuture; // @synthesize supportedCommandsFuture=_supportedCommandsFuture;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithMiddleware:(id)arg1;
- (id)timeoutDescription;

@end

