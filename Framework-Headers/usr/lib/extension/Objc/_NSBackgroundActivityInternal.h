//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface _NSBackgroundActivityInternal : NSObject
{
    NSString *_identifier;
    double _interval;
    double _tolerance;
    double _delay;
    CDUnknownBlockType _activity;
    CDUnknownBlockType _checkInHandler;
    BOOL _repeats;
    BOOL _preregistered;
    BOOL _appRefresh;
    NSObject<OS_xpc_object> *_additionalProperties;
    long long _qualityOfService;
    NSObject<OS_xpc_object> *_currentActivity;
}

@property (copy) CDUnknownBlockType activity; // @synthesize activity=_activity;
@property (getter=isAppRefresh) BOOL appRefresh; // @synthesize appRefresh=_appRefresh;
@property (copy) CDUnknownBlockType checkInHandler; // @synthesize checkInHandler=_checkInHandler;
@property double delay; // @synthesize delay=_delay;
@property (copy) NSString *identifier; // @synthesize identifier=_identifier;
@property double interval; // @synthesize interval=_interval;
@property BOOL preregistered; // @synthesize preregistered=_preregistered;
@property long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property BOOL repeats; // @synthesize repeats=_repeats;
@property double tolerance; // @synthesize tolerance=_tolerance;

- (id)additionalProperties;
- (id)currentActivity;
- (void)dealloc;
- (id)init;
- (void)setAdditionalProperties:(id)arg1;
- (void)setCurrentActivity:(id)arg1;

@end
