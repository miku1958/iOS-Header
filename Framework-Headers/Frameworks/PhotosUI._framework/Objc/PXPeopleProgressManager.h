//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol PXPeopleProgressDatasource;

@interface PXPeopleProgressManager : NSObject
{
    BOOL _monitoringProgress;
    id<PXPeopleProgressDatasource> _datasource;
    double _updateInterval;
    double _progress;
    unsigned long long _processingStatus;
    NSTimer *_statusTimer;
}

@property (strong, nonatomic) id<PXPeopleProgressDatasource> datasource; // @synthesize datasource=_datasource;
@property (nonatomic, getter=isMonitoringProgress) BOOL monitoringProgress; // @synthesize monitoringProgress=_monitoringProgress;
@property (readonly) BOOL processingComplete;
@property unsigned long long processingStatus; // @synthesize processingStatus=_processingStatus;
@property double progress; // @synthesize progress=_progress;
@property (strong, nonatomic) NSTimer *statusTimer; // @synthesize statusTimer=_statusTimer;
@property (nonatomic) double updateInterval; // @synthesize updateInterval=_updateInterval;

- (void).cxx_destruct;
- (void)_handleMonitorUpdateWithProgress:(double)arg1;
- (unsigned long long)_homeAndPlusCount:(unsigned long long)arg1;
- (BOOL)_homeMeetsThresholdForProgress:(double)arg1;
- (BOOL)_progressComplete:(double)arg1;
- (void)_updateProgress;
- (void)_updateStatusForProgress:(double)arg1 processCount:(unsigned long long)arg2;
- (void)_updateWithStatus:(unsigned long long)arg1 progress:(double)arg2;
- (BOOL)featureUnlocked;
- (BOOL)hasSubstantialProcessingTodo;
- (id)init;
- (id)initWithDatasource:(id)arg1;

@end

