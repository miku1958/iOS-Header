//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVConferenceXPCClient;
@protocol AVCVirtualTTYDeviceDelegate;

@interface AVCVirtualTTYDevice : NSObject
{
    AVConferenceXPCClient *_connection;
    id<AVCVirtualTTYDeviceDelegate> _delegate;
    BOOL _isStarted;
}

@property (nonatomic) id<AVCVirtualTTYDeviceDelegate> delegate; // @synthesize delegate=_delegate;

- (void)dealloc;
- (void)deregisterBlocksForDelegateNotifications;
- (id)initWithMode:(long long)arg1 error:(id *)arg2;
- (void)registerBlocksForDelegateNotifications;
- (id)sendCharacter:(unsigned short)arg1;
- (void)start;
- (void)stop;
- (void)terminateSession;

@end

