//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableSet;

@interface PPNotificationHandlerGuardedData : NSObject
{
    BOOL _delayedFiringInProgress;
    double _lastFiringTimeSince1970;
    NSMapTable *_blockMap;
    NSMutableSet *_objects;
}

- (void).cxx_destruct;
- (id)init;

@end

