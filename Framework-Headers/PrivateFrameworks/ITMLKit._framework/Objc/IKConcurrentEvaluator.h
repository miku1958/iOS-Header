//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IKConcurrentEvaluator : NSObject
{
    NSMutableDictionary *_getters;
}

@property (strong, nonatomic) NSMutableDictionary *getters; // @synthesize getters=_getters;

- (void).cxx_destruct;
- (void)addEvaluationBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;

@end

