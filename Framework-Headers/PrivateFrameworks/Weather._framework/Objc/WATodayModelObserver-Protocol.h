//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Weather/NSObject-Protocol.h>

@class WAForecastModel, WATodayModel;

@protocol WATodayModelObserver <NSObject>
- (void)todayModel:(WATodayModel *)arg1 forecastWasUpdated:(WAForecastModel *)arg2;
- (void)todayModelWantsUpdate:(WATodayModel *)arg1;
@end

