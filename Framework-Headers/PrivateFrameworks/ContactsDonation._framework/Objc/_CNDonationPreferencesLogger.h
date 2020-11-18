//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsDonation/CNDonationPreferencesLogger-Protocol.h>

@class NSString;
@protocol OS_os_log;

@interface _CNDonationPreferencesLogger : NSObject <CNDonationPreferencesLogger>
{
    NSObject<OS_os_log> *_log_t;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject<OS_os_log> *log_t; // @synthesize log_t=_log_t;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)isDonationsEnabled:(BOOL)arg1;
- (void)setDonationsEnabled:(BOOL)arg1;

@end

