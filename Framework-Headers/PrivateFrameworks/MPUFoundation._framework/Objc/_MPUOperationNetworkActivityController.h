//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _MPUOperationNetworkActivityControllerTimer;

@interface _MPUOperationNetworkActivityController : NSObject
{
    unsigned long long _activityCount;
    _MPUOperationNetworkActivityControllerTimer *_timer;
}

+ (id)sharedController;
- (void).cxx_destruct;
- (void)_setIndicatorVisibility:(BOOL)arg1;
- (void)_updateIndicator;
- (void)networkActivityDidEnd;
- (void)networkActivityDidStart;

@end

