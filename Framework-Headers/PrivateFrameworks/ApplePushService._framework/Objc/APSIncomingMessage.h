//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ApplePushService/APSMessage.h>

@class APSIncomingMessageCheckpointTrace, NSData, NSDate;

@interface APSIncomingMessage : APSMessage
{
    APSIncomingMessageCheckpointTrace *_checkpointTrace;
}

@property (strong, nonatomic) APSIncomingMessageCheckpointTrace *checkpointTrace; // @synthesize checkpointTrace=_checkpointTrace;
@property (nonatomic, getter=wasFromStorage) BOOL fromStorage;
@property (nonatomic, getter=wasLastMessageFromStorage) BOOL lastMessageFromStorage;
@property (nonatomic) long long priority;
@property (nonatomic) unsigned int pushFlags;
@property (nonatomic) unsigned long long pushType;
@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSData *token;
@property (nonatomic, getter=isTracingEnabled) BOOL tracingEnabled;
@property (copy, nonatomic) NSData *tracingUUID;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

