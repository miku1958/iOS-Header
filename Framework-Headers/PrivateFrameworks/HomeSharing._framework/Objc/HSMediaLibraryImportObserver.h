//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol HSMediaLibraryImportObserverDelegate;

@interface HSMediaLibraryImportObserver : NSObject
{
    NSTimer *_updateTimer;
    unsigned long long _consecutiveUpdateFailures;
    BOOL _stopped;
    BOOL _updating;
    id<HSMediaLibraryImportObserverDelegate> _delegate;
    double _updateInterval;
}

@property (nonatomic) id<HSMediaLibraryImportObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) double updateInterval; // @synthesize updateInterval=_updateInterval;
@property (readonly, nonatomic, getter=isUpdating) BOOL updating; // @synthesize updating=_updating;

- (void).cxx_destruct;
- (void)_updateImportStatus:(id)arg1;
- (void)beginUpdating;
- (void)dealloc;
- (id)init;
- (void)stopUpdating;

@end

