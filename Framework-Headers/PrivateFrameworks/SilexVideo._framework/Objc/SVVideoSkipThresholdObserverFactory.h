//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoSkipThresholdObserverFactory-Protocol.h>

@class NSString;
@protocol SVVideoLoadingStateObserverFactory, SVVideoSkipThresholdProviding;

@interface SVVideoSkipThresholdObserverFactory : NSObject <SVVideoSkipThresholdObserverFactory>
{
    id<SVVideoSkipThresholdProviding> _skipThresholdProvider;
    id<SVVideoLoadingStateObserverFactory> _loadingStateObserverFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SVVideoLoadingStateObserverFactory> loadingStateObserverFactory; // @synthesize loadingStateObserverFactory=_loadingStateObserverFactory;
@property (readonly, nonatomic) id<SVVideoSkipThresholdProviding> skipThresholdProvider; // @synthesize skipThresholdProvider=_skipThresholdProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createThresholdObserverForVideo:(id)arg1;
- (id)initWithSkipThresholdProvider:(id)arg1 loadingStateObserverFactory:(id)arg2;

@end
