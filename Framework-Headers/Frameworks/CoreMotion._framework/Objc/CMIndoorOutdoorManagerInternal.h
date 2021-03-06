//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CMIndoorOutdoorManager;
@protocol CMIndoorOutdoorDelegate, OS_dispatch_queue;

@interface CMIndoorOutdoorManagerInternal : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    id<CMIndoorOutdoorDelegate> _delegate;
    CMIndoorOutdoorManager *_sender;
    struct CLConnectionClient *_connection;
    BOOL _startedUpdates;
}

- (void)_lastKnownIndoorOutdoorStateWithHandler:(CDUnknownBlockType)arg1;
- (void)_startIndoorOutdoorUpdates;
- (void)_stopIndoorOutdoorUpdates;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end

