//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface HKAnimatableObject : NSObject
{
    NSMutableDictionary *_animatableProperties;
}

- (void).cxx_destruct;
- (id)_animatablePropertyForType:(unsigned long long)arg1;
- (id)_newAnimatablePropertyForType:(unsigned long long)arg1;
- (void)addAnimation:(id)arg1 forPropertyType:(unsigned long long)arg2;
- (BOOL)areAnimationsInProgress;
- (id)endingValueForPropertyType:(unsigned long long)arg1;
- (void)removeAllAnimationsForPropertyType:(unsigned long long)arg1;
- (void)setValue:(id)arg1 forPropertyType:(unsigned long long)arg2;
- (void)update:(double)arg1;

@end

