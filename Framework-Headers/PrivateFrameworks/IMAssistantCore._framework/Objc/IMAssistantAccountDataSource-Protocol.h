//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAssistantCore/NSObject-Protocol.h>

@class IMHandle, NSString;

@protocol IMAssistantAccountDataSource <NSObject>
- (NSString *)countryCode;
- (BOOL)hasMessagingAccount;
- (IMHandle *)imHandleWithID:(NSString *)arg1;
@end

