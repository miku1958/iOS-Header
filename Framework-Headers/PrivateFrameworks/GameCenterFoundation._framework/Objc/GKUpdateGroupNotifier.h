//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKUpdateGroup, NSError, NSLock, NSMutableArray;

@interface GKUpdateGroupNotifier : NSObject
{
    GKUpdateGroup *_group;
    NSLock *_lock;
    NSMutableArray *_updateQueue;
    NSError *_error;
}

@property (strong) NSError *error; // @synthesize error=_error;
@property (weak, nonatomic) GKUpdateGroup *group; // @synthesize group=_group;
@property (strong) NSLock *lock; // @synthesize lock=_lock;
@property (strong, nonatomic) NSMutableArray *updateQueue; // @synthesize updateQueue=_updateQueue;

- (void).cxx_destruct;
- (void)addUpdate:(CDUnknownBlockType)arg1 error:(id)arg2;
- (void)addUpdatesFromGroup:(id)arg1;
- (void)dealloc;
- (id)init;
- (oneway void)release;
- (id)retain;
- (void)updateError:(id)arg1;

@end

