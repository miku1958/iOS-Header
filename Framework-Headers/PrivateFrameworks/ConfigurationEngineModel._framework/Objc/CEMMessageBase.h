//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMAnyPayload, NSDate, NSString;

@interface CEMMessageBase : CEMPayloadBase
{
    NSString *_messageType;
    NSString *_messageIdentifier;
    NSString *_messageInReplyTo;
    NSDate *_messageTimestamp;
    CEMAnyPayload *_messagePayload;
}

@property (copy, nonatomic) NSString *messageIdentifier; // @synthesize messageIdentifier=_messageIdentifier;
@property (copy, nonatomic) NSString *messageInReplyTo; // @synthesize messageInReplyTo=_messageInReplyTo;
@property (copy, nonatomic) CEMAnyPayload *messagePayload; // @synthesize messagePayload=_messagePayload;
@property (copy, nonatomic) NSDate *messageTimestamp; // @synthesize messageTimestamp=_messageTimestamp;
@property (copy, nonatomic) NSString *messageType; // @synthesize messageType=_messageType;

+ (id)messageForData:(id)arg1 error:(id *)arg2;
+ (id)messageForPayload:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadMessageFromDictionary:(id)arg1 error:(id *)arg2;
- (id)serialize;
- (id)serializeAsDataWithError:(id *)arg1;

@end
