//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ManagedNetworkSettings : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

@property (strong) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

+ (id)sharedMNS;
- (void).cxx_destruct;
- (void)handleEvent:(id)arg1;
- (id)init;
- (void)reloadMNS;
- (void)reloadNetworkdSettings;

@end

