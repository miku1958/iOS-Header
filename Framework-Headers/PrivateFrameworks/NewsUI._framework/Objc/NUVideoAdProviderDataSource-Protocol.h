//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI/NSObject-Protocol.h>

@class NUVideoAdProvider, UIViewController;

@protocol NUVideoAdProviderDataSource <NSObject>
- (double)aspectRatioOfPlayerForVideoAdProvider:(NUVideoAdProvider *)arg1;
- (unsigned long long)numberOfVideosPlayedInSessionForVideoAdProvider:(NUVideoAdProvider *)arg1;
- (unsigned long long)numberOfVideosPlayedSinceLastAdForVideoAdProvider:(NUVideoAdProvider *)arg1;
- (long long)onboardingVersionForVideoAdProvider:(NUVideoAdProvider *)arg1;
- (UIViewController *)viewControllerForVideoAdProvider:(NUVideoAdProvider *)arg1;
@end

