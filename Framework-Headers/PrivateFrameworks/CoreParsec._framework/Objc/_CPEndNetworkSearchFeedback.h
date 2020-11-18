//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPEndNetworkSearchFeedback-Protocol.h>
#import <CoreParsec/_CPFeedbackUUID-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>

@class NSData, NSDictionary, NSString, _CPNetworkTimingData;

@interface _CPEndNetworkSearchFeedback : PBCodable <_CPProcessableFeedback, _CPFeedbackUUID, _CPEndNetworkSearchFeedback, NSSecureCoding>
{
    int _statusCode;
    unsigned long long _timestamp;
    long long _responseSize;
    NSString *_uuid;
    NSString *_parsecStatus;
    NSString *_fbq;
    double _duration;
    NSString *_partialClientIp;
    _CPNetworkTimingData *_timingData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (copy, nonatomic) NSString *fbq; // @synthesize fbq=_fbq;
@property (readonly, nonatomic) id feedbackJSON;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *parsecStatus; // @synthesize parsecStatus=_parsecStatus;
@property (copy, nonatomic) NSString *partialClientIp; // @synthesize partialClientIp=_partialClientIp;
@property (readonly, nonatomic) BOOL requiresQueryId;
@property (nonatomic) long long responseSize; // @synthesize responseSize=_responseSize;
@property (nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long timestamp;
@property (strong, nonatomic) _CPNetworkTimingData *timingData; // @synthesize timingData=_timingData;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;

- (void).cxx_destruct;
- (id)_formatNetworkTimingData;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithStartSearch:(id)arg1 responseSize:(long long)arg2 statusCode:(long long)arg3 parsecStatus:(id)arg4 parsecDuration:(double)arg5 fbq:(id)arg6 partialClientIp:(id)arg7 networkTimingData:(id)arg8;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

