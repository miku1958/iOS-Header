//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@class NSDate, NSDictionary, NSString;

@interface NSError (HDIDSError)

@property (readonly, nonatomic, getter=hd_isFromRequest) BOOL hd_fromRequest;
@property (readonly, nonatomic) unsigned short hd_messageID;
@property (readonly, nonatomic) NSString *hd_messageIDSIdentifier;
@property (readonly, nonatomic) NSDate *hd_messageSent;
@property (readonly, nonatomic) NSDictionary *hd_persistentUserInfo;

- (BOOL)hd_isResponseTimeout;
@end
