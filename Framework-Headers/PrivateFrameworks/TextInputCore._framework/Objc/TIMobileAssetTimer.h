//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TIMobileAssetTimerImpl;

@interface TIMobileAssetTimer : NSObject
{
    TIMobileAssetTimerImpl *_impl;
}

+ (id)nextFireDateForDate:(id)arg1;
+ (id)scheduledTimerWithExpirationHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithExpirationHandler:(CDUnknownBlockType)arg1;

@end
