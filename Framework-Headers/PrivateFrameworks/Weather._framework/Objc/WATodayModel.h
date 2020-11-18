//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSError, WAForecastModel, WFLocation;

@interface WATodayModel : NSObject
{
    WFLocation *_location;
    WAForecastModel *_forecastModel;
    NSDate *_lastUpdateDate;
    NSError *_lastError;
}

@property (strong, nonatomic) WAForecastModel *forecastModel; // @synthesize forecastModel=_forecastModel;
@property (strong, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
@property (strong, nonatomic) NSDate *lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;
@property (strong, nonatomic) WFLocation *location; // @synthesize location=_location;

+ (id)autoupdatingLocationModelWithPreferences:(id)arg1 effectiveBundleIdentifier:(id)arg2;
+ (id)modelOperationQueue;
+ (id)modelWithLocation:(id)arg1;
- (void).cxx_destruct;
- (void)_executeForecastRetrievalForLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_executeLocationUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fireEventNotification:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)_fireNotification:(id)arg1 event:(unsigned long long)arg2 userInfo:(id)arg3;
- (void)_fireWantsUpdateNotificationBecauseOfEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)_fireWasUpdatedNotificationForEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)_fireWillUpdateNotificationForEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)_persistState;
- (BOOL)executeModelUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithLocation:(id)arg1;

@end

