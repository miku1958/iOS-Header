//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TRResponseMessage.h>

@class NSData;

@interface HMDeviceSetupResponseMessage : TRResponseMessage
{
    NSData *_payload;
}

@property (readonly, copy, nonatomic) NSData *payload; // @synthesize payload=_payload;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1;

@end

