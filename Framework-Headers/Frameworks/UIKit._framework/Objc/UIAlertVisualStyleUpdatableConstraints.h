//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UIAlertVisualStyleUpdatableConstraints : NSObject
{
    NSMutableDictionary *_constraintsByKey;
}

- (void).cxx_destruct;
- (void)addConstraint:(id)arg1 forKey:(id)arg2;
- (id)constraintForKey:(id)arg1;
- (BOOL)hasUpdatableConstraints;
- (id)init;

@end
