//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SensorKitUI/NSObject-Protocol.h>

@class NSSet, NSString;

@protocol SRAuthorizationPromptServiceInterface <NSObject>
- (void)requestAuthorizationForBundle:(NSString *)arg1 services:(NSSet *)arg2;
- (void)showAppsAndStudies;
- (void)showFirstRunOnboarding;
- (void)showResearchData;
- (void)showStudyAuthorizationForBundlePath:(NSString *)arg1;
@end

