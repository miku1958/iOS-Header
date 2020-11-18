//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsDonation/CNDonationExtensionLogger-Protocol.h>

@class NSString;
@protocol OS_os_log;

@interface _CNDonationExtensionLogger : NSObject <CNDonationExtensionLogger>
{
    NSObject<OS_os_log> *_log_t;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject<OS_os_log> *log_t; // @synthesize log_t=_log_t;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)couldNotLoadDonorExtensionForIdentifier:(id)arg1 error:(id)arg2;
- (void)couldNotRedonateValuesWithReason:(unsigned long long)arg1 error:(id)arg2;
- (void)couldNotRenewDonation:(id)arg1 error:(id)arg2;
- (void)didExpireDonation:(id)arg1 withError:(id)arg2;
- (void)didRedonateValuesWithReason:(unsigned long long)arg1;
- (void)didRenewDonation:(id)arg1 untilDate:(id)arg2;
- (id)init;
- (void)loadedDonorExtension:(id)arg1 forIdentifier:(id)arg2;
- (void)willRedonateValuesWithReason:(unsigned long long)arg1;
- (void)willRenewDonation:(id)arg1;

@end
