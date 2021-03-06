//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FTServices/FTMessageQueueDelegate-Protocol.h>

@class FTMessageQueue, IDSBaseMessage, IMTimer, NSArray, NSNumber, NSString;

@interface FTMessageDelivery : NSObject <FTMessageQueueDelegate>
{
    unsigned int _retries;
    FTMessageQueue *_queue;
    NSString *_userAgent;
    unsigned long long _maxConcurrentMessages;
    BOOL _retryInAirplaneMode;
    BOOL _logToRegistration;
    IMTimer *_timer;
    BOOL _disallowRetry;
}

@property (readonly) NSArray *allMessages;
@property (readonly) BOOL busy;
@property (readonly) IDSBaseMessage *currentMessage;
@property (nonatomic) BOOL disallowRetry; // @synthesize disallowRetry=_disallowRetry;
@property (readonly) BOOL hasQueuedItems;
@property BOOL logToRegistration; // @synthesize logToRegistration=_logToRegistration;
@property unsigned long long maxConcurrentMessages; // @synthesize maxConcurrentMessages=_maxConcurrentMessages;
@property (readonly) long long maxLargeMessageSize;
@property (readonly) long long maxMessageSize;
@property (copy) NSNumber *protocolVersion;
@property (readonly) NSArray *queuedMessages;
@property BOOL retryInAirplaneMode; // @synthesize retryInAirplaneMode=_retryInAirplaneMode;
@property (copy) NSString *userAgent; // @synthesize userAgent=_userAgent;

+ (Class)APNSMessageDeliveryClass;
+ (Class)HTTPMessageDeliveryClass;
+ (id)_errorForTDMessageDeliveryStatus:(long long)arg1 userInfo:(id)arg2;
+ (id)alloc;
- (void).cxx_destruct;
- (void)_clearRetryTimer;
- (void)_informDelegateAboutMessage:(id)arg1 error:(id)arg2 result:(id)arg3 resultCode:(long long)arg4;
- (id)_queue;
- (void)_retryTimerHit:(id)arg1;
- (BOOL)_sendMessageAsynchronously:(id)arg1 error:(id *)arg2;
- (void)_setRetryTimer:(double)arg1;
- (void)_signMessage:(id)arg1 useDataSignatures:(BOOL)arg2 body:(id)arg3 queryString:(id)arg4 intoDictionary:(id)arg5;
- (void)cancelMessage:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)networkStateChanged;
- (void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2;
- (BOOL)sendMessage:(id)arg1;

@end

