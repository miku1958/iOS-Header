//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsDonation/CNDDonationPreferences-Protocol.h>

@class NSNotificationCenter, NSString;
@protocol CNDonationPreferencesLogger;

@interface CNDDonationPreferences : NSObject <CNDDonationPreferences>
{
    NSNotificationCenter *_notificationCenter;
    Class _storageClass;
    id<CNDonationPreferencesLogger> _logger;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDonationsEnabled) BOOL donationsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<CNDonationPreferencesLogger> logger; // @synthesize logger=_logger;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property (readonly, nonatomic) Class storageClass; // @synthesize storageClass=_storageClass;
@property (readonly) Class superclass;

+ (id)observableWithPreferences:(id)arg1 notificationCenter:(id)arg2 schedulerProvider:(id)arg3;
- (void).cxx_destruct;
- (id)init;
- (id)initWithNotificationCenter:(id)arg1 storageClass:(Class)arg2 logger:(id)arg3;

@end
