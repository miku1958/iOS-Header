//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSHashTable, NSOperationQueue, WAForecastModel;

@interface WATodayModel : NSObject
{
    NSHashTable *_observers;
    NSOperationQueue *_modelOperationQueue;
    WAForecastModel *_forecastModel;
    NSDate *_lastUpdateDate;
}

@property (strong, nonatomic) WAForecastModel *forecastModel; // @synthesize forecastModel=_forecastModel;
@property (readonly, nonatomic) NSDate *lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;

+ (id)autoupdatingLocationModelWithPreferences:(id)arg1 effectiveBundleIdentifier:(id)arg2;
+ (id)modelWithLocation:(id)arg1;
- (void).cxx_destruct;
- (void)_executeForecastRetrievalForLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_executeLocationUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fireTodayModelForecastWasUpdated:(id)arg1;
- (void)_fireTodayModelWantsUpdate;
- (void)_forecastUpdateCompleted:(id)arg1 forecastModel:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_locationUpdateCompleted:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_persistStateWithModel:(id)arg1;
- (void)_willDeliverForecastModel:(id)arg1;
- (void)addObserver:(id)arg1;
- (BOOL)executeModelUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithLocation:(id)arg1;
- (id)location;
- (void)removeObserver:(id)arg1;

@end

