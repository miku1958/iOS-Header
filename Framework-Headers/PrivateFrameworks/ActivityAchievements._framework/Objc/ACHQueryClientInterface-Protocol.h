//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActivityAchievements/HKQueryClientInterface-Protocol.h>

@class NSSet;

@protocol ACHQueryClientInterface <HKQueryClientInterface>
- (void)client_achievementsDidFinishInitialFetch:(NSSet *)arg1;
- (void)client_deliverNewAchievements:(NSSet *)arg1;
- (void)client_deliverRemovedAchievements:(NSSet *)arg1;
- (void)client_deliverUpdatedAchievements:(NSSet *)arg1;
@end

