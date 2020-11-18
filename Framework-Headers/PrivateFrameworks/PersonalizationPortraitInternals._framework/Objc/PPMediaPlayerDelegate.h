//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, PPMediaPlayerResponse, PPNamedEntityStore;
@protocol OS_dispatch_queue;

@interface PPMediaPlayerDelegate : NSObject
{
    PPNamedEntityStore *_namedEntityStore;
    double _donationDelaySeconds;
    BOOL _useSGNamedEntityDissector;
    PPMediaPlayerResponse *_pendingDonation;
    NSDate *_pendingDonationTimestamp;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)bundleIdOfCurrentForegroundApp;
- (void).cxx_destruct;
- (void)_donateDelayedResponse:(id)arg1 timePlayed:(double)arg2 bundleId:(id)arg3;
- (void)_registerForNowPlayingNotifications;
- (id)getResponse;
- (id)init;
- (id)initWithNamedEntityStore:(id)arg1 donationDelaySeconds:(double)arg2 registersResponseLoading:(BOOL)arg3 useSGNamedEntityDissector:(BOOL)arg4;
- (void)processResponse:(id)arg1;
- (void)waitForQueueEmpty;

@end
