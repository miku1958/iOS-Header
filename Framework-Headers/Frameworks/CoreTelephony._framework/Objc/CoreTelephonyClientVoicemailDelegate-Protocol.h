//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreTelephony/NSObject-Protocol.h>

@class CTVoicemailInfoType, CTXPCServiceSubscriptionContext;

@protocol CoreTelephonyClientVoicemailDelegate <NSObject>

@optional
- (void)voicemailDatabaseReset:(CTXPCServiceSubscriptionContext *)arg1;
- (void)voicemailInfoAvailableNotification:(CTXPCServiceSubscriptionContext *)arg1 voicemailInfo:(CTVoicemailInfoType *)arg2;
@end

