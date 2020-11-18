//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardUI/SBRemoteAlertDelegate-Protocol.h>

@class NSMutableArray, NSString, SBSRemoteAlertDefinition;
@protocol OS_dispatch_queue, SBRemoteAlert, SBRemoteAlertControllerDelegate;

@interface SBRemoteAlertController : NSObject <SBRemoteAlertDelegate>
{
    SBSRemoteAlertDefinition *_definition;
    unsigned int _tokenPort;
    NSObject<OS_dispatch_queue> *_queue;
    id<SBRemoteAlertControllerDelegate> _delegate;
    id<SBRemoteAlert> _alert;
    NSMutableArray *_pendedActivations;
    BOOL _active;
}

@property (readonly, nonatomic) id<SBRemoteAlert> alert;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)isDefinition:(id)arg1 allowedForAuditToken:(id)arg2;
+ (BOOL)isDefinition:(id)arg1 equalToDefinition:(id)arg2;
+ (Class)remoteAlertClass;
- (void).cxx_destruct;
- (BOOL)_queue_isValid;
- (void)_queue_setActive:(BOOL)arg1;
- (void)activateWithContext:(id)arg1;
- (void)dealloc;
- (void)didInvalidate;
- (id)init;
- (id)initWithDefinition:(id)arg1 tokenPort:(unsigned int)arg2 context:(id)arg3 queue:(id)arg4 delegate:(id)arg5;
- (void)queue_activateWithContext:(id)arg1;
- (void)queue_invalidate;
- (BOOL)queue_isActive;
- (BOOL)queue_matchesDefinition:(id)arg1;
- (unsigned int)queue_tokenPort;
- (void)remoteAlert:(id)arg1 didTerminateWithError:(id)arg2;
- (void)remoteAlertDidActivate:(id)arg1;
- (void)remoteAlertDidDeactivate:(id)arg1;
- (void)remoteAlertDidRequestDismissal:(id)arg1;
- (void)remoteAlertDidRequestInvalidation:(id)arg1;

@end
