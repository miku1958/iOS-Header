//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CDPDaemonConnection;

@interface CDPFollowUpController : NSObject
{
    CDPDaemonConnection *_daemonConn;
}

- (void).cxx_destruct;
- (BOOL)clearFollowUpWithContext:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (BOOL)postFollowUpWithContext:(id)arg1 error:(id *)arg2;

@end

