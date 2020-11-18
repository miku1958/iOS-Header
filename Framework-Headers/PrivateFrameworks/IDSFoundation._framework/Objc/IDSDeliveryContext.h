//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class APSOutgoingMessageCheckpointTrace, NSArray, NSData, NSDictionary, NSError, NSNumber, NSString;

@interface IDSDeliveryContext : NSObject
{
    NSNumber *_responseCommand;
    NSNumber *_responseTimeStamp;
    long long _responseCode;
    NSError *_responseError;
    NSData *_responseToken;
    NSArray *_displayIDs;
    NSError *_deliveryError;
    long long _idsResponseCode;
    BOOL _lastCall;
    BOOL _lastCourierAck;
    APSOutgoingMessageCheckpointTrace *_apsCheckpointTrace;
    NSString *_deviceID;
    NSNumber *_currentAverageRTT;
    NSNumber *_isDeviceBlackedOut;
    NSNumber *_localMessageState;
    NSString *_wpConnectionErrorDomain;
    NSNumber *_wpConnectionErrorCode;
    NSDictionary *_wpConnectionErrorUserInfo;
    APSOutgoingMessageCheckpointTrace *_apsdCheckpointTrace;
}

@property (copy, nonatomic) APSOutgoingMessageCheckpointTrace *apsdCheckpointTrace; // @synthesize apsdCheckpointTrace=_apsdCheckpointTrace;
@property (copy, nonatomic) NSNumber *currentAverageRTT; // @synthesize currentAverageRTT=_currentAverageRTT;
@property (copy, nonatomic) NSError *deliveryError; // @synthesize deliveryError=_deliveryError;
@property (copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property (copy, nonatomic) NSArray *displayIDs; // @synthesize displayIDs=_displayIDs;
@property (nonatomic) long long idsResponseCode; // @synthesize idsResponseCode=_idsResponseCode;
@property (copy, nonatomic) NSNumber *isDeviceBlackedOut; // @synthesize isDeviceBlackedOut=_isDeviceBlackedOut;
@property (nonatomic) BOOL lastCall; // @synthesize lastCall=_lastCall;
@property (nonatomic) BOOL lastCourierAck; // @synthesize lastCourierAck=_lastCourierAck;
@property (copy, nonatomic) NSNumber *localMessageState; // @synthesize localMessageState=_localMessageState;
@property (nonatomic) long long responseCode; // @synthesize responseCode=_responseCode;
@property (copy, nonatomic) NSNumber *responseCommand; // @synthesize responseCommand=_responseCommand;
@property (copy, nonatomic) NSError *responseError; // @synthesize responseError=_responseError;
@property (copy, nonatomic) NSNumber *responseTimeStamp; // @synthesize responseTimeStamp=_responseTimeStamp;
@property (copy, nonatomic) NSData *responseToken; // @synthesize responseToken=_responseToken;
@property (copy, nonatomic) NSNumber *wpConnectionErrorCode; // @synthesize wpConnectionErrorCode=_wpConnectionErrorCode;
@property (copy, nonatomic) NSString *wpConnectionErrorDomain; // @synthesize wpConnectionErrorDomain=_wpConnectionErrorDomain;
@property (copy, nonatomic) NSDictionary *wpConnectionErrorUserInfo; // @synthesize wpConnectionErrorUserInfo=_wpConnectionErrorUserInfo;

- (void).cxx_destruct;
- (id)initWithError:(id)arg1;
- (id)initWithResponseCode:(long long)arg1 deviceID:(id)arg2;
- (id)initWithResponseCode:(long long)arg1 deviceID:(id)arg2 currentAverageRTT:(id)arg3 isDeviceBlackedOut:(id)arg4 localMessageState:(id)arg5;
- (id)initWithResponseCode:(long long)arg1 error:(id)arg2 lastCall:(BOOL)arg3;
- (id)initWithServerResponseDictionary:(id)arg1;

@end

