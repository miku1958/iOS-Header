//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SKUIApplicationController;

__attribute__((visibility("hidden")))
@interface _SKUIApplicationShutdownHelper : NSObject
{
    SKUIApplicationController *_applicationController;
    unsigned long long _taskID;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithApplicationController:(id)arg1;
- (void)start;
- (void)stop;

@end

