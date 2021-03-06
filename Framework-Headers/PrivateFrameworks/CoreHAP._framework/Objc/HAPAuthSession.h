//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <CoreHAP/HMFLogging-Protocol.h>

@class NSData, NSNumber, NSObject, NSString, NSUUID;
@protocol HAPAuthSessionDelegate, OS_dispatch_queue;

@interface HAPAuthSession : HMFObject <HMFLogging>
{
    unsigned char _currentTID;
    id<HAPAuthSessionDelegate> _delegate;
    long long _role;
    NSObject<OS_dispatch_queue> *_workQueue;
    unsigned long long _currentState;
    NSNumber *_instanceId;
    NSData *_token1;
    NSData *_token2;
    NSUUID *_provisionUUID;
}

@property (nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
@property (nonatomic) unsigned char currentTID; // @synthesize currentTID=_currentTID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) id<HAPAuthSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSNumber *instanceId; // @synthesize instanceId=_instanceId;
@property (strong, nonatomic) NSUUID *provisionUUID; // @synthesize provisionUUID=_provisionUUID;
@property (readonly, nonatomic) long long role; // @synthesize role=_role;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSData *token1; // @synthesize token1=_token1;
@property (strong, nonatomic) NSData *token2; // @synthesize token2=_token2;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)_handleAuthExchangeData:(id)arg1 withHeader:(BOOL)arg2;
- (void)_handleTokenResponse:(id)arg1 withHeader:(BOOL)arg2;
- (void)_handleTokenUpdateResponse:(id)arg1 withHeader:(BOOL)arg2;
- (void)_reportAuthFailure;
- (void)_resetSession;
- (void)_sendTokenRequest;
- (void)_sendTokenUpdateRequest:(id)arg1;
- (void)continueAuthAfterValidation:(BOOL)arg1;
- (BOOL)getToken:(id *)arg1 uuid:(id *)arg2;
- (void)handleAuthExchangeData:(id)arg1 withHeader:(BOOL)arg2;
- (id)initWithRole:(long long)arg1 instanceId:(id)arg2 delegate:(id)arg3;
- (void)resetSession;
- (void)sendTokenUpdateRequest:(id)arg1;

@end

