//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreTelephony/CTXPCServiceSubscriptionContext.h>

#import <VisualVoicemail/VMTelephonySubscription-Protocol.h>

@class NSNumber, NSString, NSUUID;

@interface CTXPCServiceSubscriptionContext (TelephonyVoicemail) <VMTelephonySubscription>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *labelID;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSNumber *userDataPreferred;
@property (readonly, nonatomic) NSNumber *userDefaultVoice;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSString *vm_isoCountryCode;
@property (readonly, nonatomic) NSUUID *vm_labelUUID;
@property (readonly, nonatomic) NSString *vm_telephoneNumber;

+ (id)telephonyClient;
@end

