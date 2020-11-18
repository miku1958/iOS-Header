//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXVideoSkipThresholdObserving-Protocol.h>

@class NSString;
@protocol SXVideoLoadingStateObserving, SXVideoSkipThreshold;

@interface SXVideoSkipThresholdObserver : NSObject <SXVideoSkipThresholdObserving>
{
    BOOL _loading;
    CDUnknownBlockType block;
    id<SXVideoSkipThreshold> _thresholdProvider;
    id<SXVideoLoadingStateObserving> _loadingStateObserver;
}

@property (copy, nonatomic, setter=onChange:) CDUnknownBlockType block; // @synthesize block;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL loading; // @synthesize loading=_loading;
@property (readonly, nonatomic) id<SXVideoLoadingStateObserving> loadingStateObserver; // @synthesize loadingStateObserver=_loadingStateObserver;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<SXVideoSkipThreshold> thresholdProvider; // @synthesize thresholdProvider=_thresholdProvider;

- (void).cxx_destruct;
- (id)initWithLoadingStateObserver:(id)arg1 thresholdProvider:(id)arg2;
- (void)loadingCompletedWithThreshold:(double)arg1;

@end

