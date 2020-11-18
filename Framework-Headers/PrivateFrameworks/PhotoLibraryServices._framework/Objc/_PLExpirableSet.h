//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface _PLExpirableSet : NSObject
{
    NSMutableSet *_set;
    NSMutableDictionary *_recentTouches;
    double _secondsToExpire;
}

- (BOOL)_didExpireObject:(id)arg1;
- (void)_touch:(id)arg1;
- (void)addObject:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (void)dealloc;
- (id)initWithSecondsToExpire:(double)arg1;
- (void)removeObject:(id)arg1;

@end

