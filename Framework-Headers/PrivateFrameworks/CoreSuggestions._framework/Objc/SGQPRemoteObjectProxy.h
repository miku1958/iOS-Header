//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/SGQPSearchToShareServerProtocol-Protocol.h>

@class SGDaemonConnection;

@interface SGQPRemoteObjectProxy : NSObject <SGQPSearchToShareServerProtocol>
{
    SGDaemonConnection *_connection;
}

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)initWithConnection:(id)arg1;

@end
