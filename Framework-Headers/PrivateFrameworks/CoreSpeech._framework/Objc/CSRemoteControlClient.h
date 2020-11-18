//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CSRemoteControlClientDelegate, OS_dispatch_queue;

@interface CSRemoteControlClient : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id<CSRemoteControlClientDelegate> _delegate;
}

@property (weak, nonatomic) id<CSRemoteControlClientDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (BOOL)isConnected;
- (BOOL)waitingForConnection:(double)arg1 error:(id *)arg2;

@end

