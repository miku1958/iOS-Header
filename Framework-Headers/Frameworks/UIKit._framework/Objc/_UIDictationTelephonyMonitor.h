//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CTCallCenter, IMAVCallManager;
@protocol NSObject, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIDictationTelephonyMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    CTCallCenter *_callCentre;
    IMAVCallManager *_facetimeCallManager;
    id<NSObject> _notificationToken;
    BOOL _telephonyActivity;
    CDUnknownBlockType _activityChanged;
}

@property (copy) CDUnknownBlockType activityChanged; // @synthesize activityChanged=_activityChanged;
@property (readonly, nonatomic) BOOL telephonyActivity; // @synthesize telephonyActivity=_telephonyActivity;

- (void)_backgroundInit;
- (void)_backgroundReset;
- (void)dealloc;
- (id)init;
- (void)start;

@end

