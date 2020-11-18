//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AccountSettings/ASRuntimeFixProtocol-Protocol.h>

@class NSSet, NSString;

@interface ASRuntimeFixMailAccount : NSObject <ASRuntimeFixProtocol>
{
    BOOL _shouldNotifyMobileMail;
    NSSet *_supportedMailClasses;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (BOOL)_cleanupAccountClass:(id)arg1;
- (void)accountsHaveBeenSaved:(BOOL)arg1;
- (void)dealloc;
- (int)fixBasicAccountIfNeeded:(id)arg1 loggingMessage:(id)arg2;
- (id)init;
- (id)supportedAccountTypes;

@end
