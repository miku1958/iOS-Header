//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFAssertion.h>

@class HMFWiFiManager;

__attribute__((visibility("hidden")))
@interface __HMFWiFiAssertion : HMFAssertion
{
    HMFWiFiManager *_manager;
    unsigned long long _options;
}

@property (readonly) HMFWiFiManager *manager; // @synthesize manager=_manager;
@property (readonly) unsigned long long options; // @synthesize options=_options;

- (void).cxx_destruct;
- (BOOL)acquire:(id *)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithOptions:(unsigned long long)arg1 manager:(id)arg2 reason:(id)arg3;
- (void)invalidate;

@end
