//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSMessage.h>

@class NSArray, NSData, NSString;

@interface IDSMMCSAccessRequestMessage : IDSMessage
{
    NSArray *_downloadAuths;
    NSData *_downloadingDeviceToken;
    NSData *_sessionToken;
    NSString *_downloadingDeviceID;
    NSString *_senderID;
}

@property (strong, nonatomic) NSArray *downloadAuths; // @synthesize downloadAuths=_downloadAuths;
@property (strong, nonatomic) NSString *downloadingDeviceID; // @synthesize downloadingDeviceID=_downloadingDeviceID;
@property (strong, nonatomic) NSData *downloadingDeviceToken; // @synthesize downloadingDeviceToken=_downloadingDeviceToken;
@property (strong, nonatomic) NSString *senderID; // @synthesize senderID=_senderID;
@property (strong, nonatomic) NSData *sessionToken; // @synthesize sessionToken=_sessionToken;

- (void).cxx_destruct;
- (long long)command;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)messageBody;
- (id)requiredKeys;
- (long long)responseCommand;

@end
