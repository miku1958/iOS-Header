//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebNetworkStateObserver : NSObject
{
    const struct NetworkStateNotifier *_notifier;
}

@property (nonatomic) const struct NetworkStateNotifier *notifier; // @synthesize notifier=_notifier;

- (void)dealloc;
- (id)initWithNotifier:(const struct NetworkStateNotifier *)arg1;
- (void)networkStateChanged:(id)arg1;

@end
