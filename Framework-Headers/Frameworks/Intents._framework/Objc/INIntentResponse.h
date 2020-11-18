//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCacheableContainer-Protocol.h>
#import <Intents/INIntentResponseExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSString, NSUserActivity, _INPBIntentResponse;

@interface INIntentResponse : NSObject <INCacheableContainer, INIntentResponseExport, NSCopying, NSSecureCoding>
{
    NSUserActivity *_userActivity;
    _INPBIntentResponse *_backingStore;
    long long _code;
}

@property (readonly, copy, nonatomic) _INPBIntentResponse *backingStore; // @synthesize backingStore=_backingStore;
@property (readonly, nonatomic) long long code; // @synthesize code=_code;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL shouldOpenContainingApplication;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;

+ (BOOL)_appLaunchRequestedFromCode:(long long)arg1;
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3;
+ (int)_errorCodeFromCode:(long long)arg1;
+ (long long)_intentHandlingStatusFromCode:(long long)arg1;
+ (int)_typeFromCode:(long long)arg1;
+ (id)responseFailure;
+ (id)responseSuccess;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_impl;
- (long long)_intentHandlingStatus;
- (id)_payloadResponseMessageData;
- (void)_setPayloadResponseMessageData:(id)arg1;
- (id)cacheableObjects;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)protoData;

@end

