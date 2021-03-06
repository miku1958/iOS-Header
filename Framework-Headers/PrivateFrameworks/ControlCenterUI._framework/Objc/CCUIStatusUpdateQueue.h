//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface CCUIStatusUpdateQueue : NSObject
{
    NSMutableArray *_queuedIdentifiers;
    NSMutableDictionary *_latestUpdateByIdentifier;
}

- (void).cxx_destruct;
- (id)dequeueNextStatusUpdate;
- (void)enqueueStatusUpdate:(id)arg1 forIdentifier:(id)arg2;
- (id)init;
- (void)removeAllStatusUpdates;

@end

