//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NEVPNManager, NSDate;

@interface NEVPNConnection : NSObject
{
    int _sessionType;
    long long _status;
    NSDate *_connectedDate;
    void *_session;
    NEVPNManager *_weakmanager;
}

@property (readonly) NSDate *connectedDate; // @synthesize connectedDate=_connectedDate;
@property (readonly) NEVPNManager *manager;
@property void *session; // @synthesize session=_session;
@property (readonly) int sessionType; // @synthesize sessionType=_sessionType;
@property (readonly) long long status; // @synthesize status=_status;
@property (weak) NEVPNManager *weakmanager; // @synthesize weakmanager=_weakmanager;

- (void).cxx_destruct;
- (void)dealloc;
- (void)destroySession;
- (id)initWithType:(int)arg1;
- (void)newSessionWithConfigID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)startVPNTunnelAndReturnError:(id *)arg1;
- (BOOL)startVPNTunnelWithOptions:(id)arg1 andReturnError:(id *)arg2;
- (void)stopVPNTunnel;
- (void)updateSessionInfoWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

