//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/MTObject.h>

@class NSDictionary;
@protocol MTConfigDelegate;

@interface MTConfig : MTObject
{
    id<MTConfigDelegate> _delegate;
    long long _eventDataTimeout;
    NSDictionary *_debugSource;
}

@property (strong, nonatomic) NSDictionary *debugSource; // @synthesize debugSource=_debugSource;
@property (weak, nonatomic) id<MTConfigDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) long long eventDataTimeout; // @synthesize eventDataTimeout=_eventDataTimeout;

- (void).cxx_destruct;
- (BOOL)_isEventDataTimeoutUnset;
- (void)applyDeRes:(id)arg1 sources:(id)arg2;
- (id)blacklistedEventsForSources:(id)arg1;
- (id)blacklistedFieldsForSources:(id)arg1;
- (id)computeWithConfigSources:(CDUnknownBlockType)arg1;
- (id)configValueForKeyPath:(id)arg1 default:(id)arg2;
- (id)configValueForKeyPath:(id)arg1 sources:(id)arg2;
- (id)deResFieldsForSources:(id)arg1;
- (BOOL)disabledForSources:(id)arg1;
- (id)injectedSource;
- (BOOL)metricsDisabledOrBlacklistedEvent:(id)arg1 sources:(id)arg2;
- (void)removeBlacklistedFields:(id)arg1 sources:(id)arg2;
- (id)sources;

@end

