//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ACDQueueDictionary : NSObject
{
    NSMutableDictionary *_allQueuesByID;
}

- (void).cxx_destruct;
- (void)addObject:(id)arg1 toQueueForKey:(id)arg2;
- (id)dequeueAllObjectsInQueueForKey:(id)arg1;
- (id)dequeueFirstObjectInQueueForKey:(id)arg1;
- (id)description;
- (id)firstObjectInQueueForKey:(id)arg1;
- (id)init;
- (BOOL)isEmpty;
- (BOOL)isQueueEmptyForKey:(id)arg1;
- (id)keyForRandomQueue;

@end

