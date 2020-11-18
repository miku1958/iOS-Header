//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/PPFeedbackAccepting-Protocol.h>

@class PPConnectionsDonationStore, PPConnectionsPredictionStore, PPM2FeedbackPortraitRegistered, PPMFeedbackRegistered;

@interface PPLocalConnectionsStore : NSObject <PPFeedbackAccepting>
{
    PPMFeedbackRegistered *_feedbackTracker;
    PPM2FeedbackPortraitRegistered *_feedbackTracker2;
    PPConnectionsPredictionStore *_predictionStore;
    PPConnectionsDonationStore *_donationStore;
}

+ (id)defaultStore;
- (void).cxx_destruct;
- (id)init;
- (id)initWithPredictionStore:(id)arg1 donationStore:(id)arg2;
- (id)recentLocationDonationsSinceDate:(id)arg1 error:(id *)arg2;
- (id)recentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4 timeout:(unsigned long long)arg5 error:(id *)arg6;
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
