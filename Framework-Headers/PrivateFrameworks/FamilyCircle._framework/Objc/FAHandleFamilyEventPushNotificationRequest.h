//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSDictionary;

@interface FAHandleFamilyEventPushNotificationRequest : FAFamilyCircleRequest
{
    NSDictionary *_payload;
}

@property (readonly) NSDictionary *payload; // @synthesize payload=_payload;

- (void).cxx_destruct;
- (id)initWithPayload:(id)arg1;
- (void)startRequestWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

