//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CompanionSync/NMSObfuscatableDescriptionProviding-Protocol.h>

@class NMSMessageCenter, NMSOutgoingResponse, NSData, NSString;

@interface NMSIncomingRequest : NSObject <NMSObfuscatableDescriptionProviding>
{
    BOOL _expectsResponse;
    unsigned short _messageID;
    NMSMessageCenter *_messageCenter;
    NSString *_idsIdentifier;
    NSData *_data;
    unsigned long long _priority;
    NMSOutgoingResponse *_response;
    id _pbRequest;
}

@property (strong, nonatomic) NSData *data; // @synthesize data=_data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL expectsResponse; // @synthesize expectsResponse=_expectsResponse;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property (weak, nonatomic) NMSMessageCenter *messageCenter; // @synthesize messageCenter=_messageCenter;
@property (nonatomic) unsigned short messageID; // @synthesize messageID=_messageID;
@property (strong, nonatomic) id pbRequest; // @synthesize pbRequest=_pbRequest;
@property (nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property (strong, nonatomic) NMSOutgoingResponse *response; // @synthesize response=_response;
@property (readonly) Class superclass;

+ (BOOL)allowsUnrepliedRequestsForUnitTesting;
+ (void)setAllowsUnrepliedRequestsForUnitTesting:(BOOL)arg1;
- (void).cxx_destruct;
- (id)CPObfuscatedDescriptionObject;
- (void)configureResponse;
- (void)dealloc;
- (id)init;

@end

