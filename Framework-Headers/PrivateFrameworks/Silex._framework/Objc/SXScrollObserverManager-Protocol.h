//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@protocol SXScrollObserving;

@protocol SXScrollObserverManager <NSObject>
- (void)addScrollObserver:(id<SXScrollObserving>)arg1;
- (void)removeScrollObserver:(id<SXScrollObserving>)arg1;
@end

