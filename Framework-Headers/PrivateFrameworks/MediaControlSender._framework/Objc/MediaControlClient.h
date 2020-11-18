//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface MediaControlClient : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    struct MediaControlClientImp *_client;
    NSObject<OS_dispatch_queue> *_eventHandlerQueue;
    CDUnknownBlockType _eventHandlerBlock;
}

- (void)checkAuthentication;
- (void)dealloc;
- (void)ensureConnected;
- (void)ensureDisconnected;
- (void)getProperty:(id)arg1 qualifier:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)getSlideshowFeaturesWithOptions:(unsigned int)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)getSlideshowInfoWithOptions:(unsigned int)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)init;
- (struct MediaControlClientImp *)internalClient;
- (void)invalidate;
- (void)performRemoteAction:(id)arg1 withParams:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)sendPhotoData:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)sendPhotoData:(id)arg1 options:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)setEventHandlerQueue:(id)arg1 eventHandlerBlock:(CDUnknownBlockType)arg2;
- (void)setHost:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)setSlideshowInfo:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)startPresentation:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

