//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/NSObject-Protocol.h>

@protocol CSProximitySensorProviding;

@protocol CSProximitySensorProviderObserver <NSObject>

@optional
- (void)proximitySensorProvider:(id<CSProximitySensorProviding>)arg1 objectWithinProximityDidChange:(BOOL)arg2;
@end

