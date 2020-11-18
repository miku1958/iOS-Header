//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVConferenceXPCClient;
@protocol AVCCaptionsClientDelegate;

@interface AVCCaptionsClient : NSObject
{
    long long _streamToken;
    id<AVCCaptionsClientDelegate> _delegate;
    AVConferenceXPCClient *_connection;
}

@property (readonly) BOOL captionsEnabled;
@property (readonly) BOOL captionsSupported;
@property (readonly) id<AVCCaptionsClientDelegate> delegate;
@property (readonly) long long streamToken; // @synthesize streamToken=_streamToken;

- (void)configureCaptions:(id)arg1;
- (BOOL)connect;
- (void)dealloc;
- (void)deregisterBlocksForNotifications;
- (void)disconnect;
- (void)enableCaptions:(BOOL)arg1;
- (id)initWithDelegate:(id)arg1 streamToken:(long long)arg2;
- (void)registerBlocksForNotifications;

@end

