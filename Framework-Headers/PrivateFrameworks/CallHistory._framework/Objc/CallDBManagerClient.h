//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallHistory/CallDBManager.h>

@class NSXPCConnection;

@interface CallDBManagerClient : CallDBManager
{
    NSXPCConnection *_helperConnection;
    id _syncHelperReadyNotificationRef;
}

@property (strong) NSXPCConnection *helperConnection; // @synthesize helperConnection=_helperConnection;
@property (strong) id syncHelperReadyNotificationRef; // @synthesize syncHelperReadyNotificationRef=_syncHelperReadyNotificationRef;

- (void).cxx_destruct;
- (void)createHelperConnection;
- (void)createPermanent;
- (void)createTemporary;
- (void)handlePermanentCreated;
- (void)moveCallsFromTempDatabase;
- (id)permDBLocation:(unsigned char *)arg1;
- (void)pokeSyncHelperToInitDB;
- (id)tempDBLocation:(unsigned char *)arg1;
- (BOOL)validatePermDatabase;
- (BOOL)validateTempDatabase;
- (BOOL)willMoveCallsFromTempDatabase;

@end
