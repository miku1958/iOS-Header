//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HAPRelayRequestMessage, NSData;

@interface HAPRelayResponseMessage : NSObject
{
    HAPRelayRequestMessage *_request;
    unsigned long long _type;
    NSData *_body;
}

@property (strong, nonatomic) NSData *body; // @synthesize body=_body;
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
@property (readonly, nonatomic) HAPRelayRequestMessage *request; // @synthesize request=_request;
@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;

- (void).cxx_destruct;
- (BOOL)_deserializeResponseMessage:(id)arg1;
- (id)initWithRequest:(id)arg1 serializedMessage:(id)arg2;

@end

