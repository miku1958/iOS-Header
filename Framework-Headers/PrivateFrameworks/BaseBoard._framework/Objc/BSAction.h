//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BaseBoard/BSDescriptionProviding-Protocol.h>
#import <BaseBoard/BSSettingDescriptionProvider-Protocol.h>
#import <BaseBoard/BSXPCCoding-Protocol.h>

@class BSActionResponse, BSAuditHistory, BSMachPortReceiveRight, BSMachPortTransferableSendRight, BSPortDeathWatcher, BSSettings, BSTimer, NSString;
@protocol OS_dispatch_queue;

@interface BSAction : NSObject <BSXPCCoding, BSSettingDescriptionProvider, BSDescriptionProviding>
{
    BSSettings *_info;
    BOOL _hasTimeout;
    BOOL _expectsResponse;
    BOOL _originatingAction;
    unsigned long long _timeout;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _queue_hasBeenNeutered;
    BOOL _queue_invalidated;
    CDUnknownBlockType _queue_handler;
    CDStruct_28fcad39 _queue_listenerTokens;
    BSTimer *_queue_timer;
    CDUnknownBlockType _queue_invalidationHandler;
    BSActionResponse *_queue_response;
    BSAuditHistory *_queue_auditHistory;
    BSMachPortReceiveRight *_queue_receiveRight;
    BSMachPortTransferableSendRight *_queue_sendRight;
    BSPortDeathWatcher *_queue_portDeathWatcher;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) BSSettings *info; // @synthesize info=_info;
@property (readonly) Class superclass;

- (id)_descriptionBuilderWithMultilinePrefix:(id)arg1 safely:(BOOL)arg2;
- (void)_queue_addAuditHistoryWithFormat:(id)arg1;
- (void)_queue_callHandlerWithResponse:(id)arg1;
- (id)_queue_handlerDescription;
- (void)_queue_setInvalidatedAndNotify:(BOOL)arg1 errorCode:(long long)arg2;
- (BOOL)canSendResponse;
- (void)dealloc;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (id)initWithXPCDictionary:(id)arg1;
- (void)invalidate;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (void)sendResponse:(id)arg1;
- (void)sendResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setInvalidationHandler:(CDUnknownBlockType)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end

