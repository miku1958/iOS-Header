//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@protocol SXVideo, SXVideoLoadingStateObserving;

@protocol SXVideoLoadingStateObserverFactory <NSObject>
- (id<SXVideoLoadingStateObserving>)createLoadingStateObserverForVideo:(id<SXVideo>)arg1;
@end

