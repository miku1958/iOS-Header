//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsDonation/CNDonationAnalyticsLogger-Protocol.h>

@class NSString;
@protocol OS_os_log;

@interface _CNDonationAnalyticsLogger : NSObject <CNDonationAnalyticsLogger>
{
    NSObject<OS_os_log> *_log_t;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject<OS_os_log> *log_t; // @synthesize log_t=_log_t;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didReportAnalytics;
- (id)init;
- (void)noDonatedMeCard;
- (void)noMeCard;
- (void)willReportAnalytics;
- (void)withinReportingInterval:(id)arg1;

@end

