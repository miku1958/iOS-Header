//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSLock, NSMutableArray, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface GKJoinGroup : NSObject
{
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSMutableArray *_leftNotifiers;
    NSMutableArray *_rightNotifiers;
    NSMutableArray *_leftResults;
    NSMutableArray *_rightResults;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSLock *_lock;
    NSError *_error;
    NSString *_name;
}

@property (strong) NSError *error; // @synthesize error=_error;
@property (strong, nonatomic) NSMutableArray *leftNotifiers; // @synthesize leftNotifiers=_leftNotifiers;
@property (strong) NSMutableArray *leftResults; // @synthesize leftResults=_leftResults;
@property (strong) NSLock *lock; // @synthesize lock=_lock;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSMutableArray *rightNotifiers; // @synthesize rightNotifiers=_rightNotifiers;
@property (strong) NSMutableArray *rightResults; // @synthesize rightResults=_rightResults;

+ (id)joinGroup;
+ (id)joinGroupForTargetQueue:(id)arg1;
+ (id)joinGroupWithName:(id)arg1;
+ (id)joinGroupWithName:(id)arg1 taregetQueue:(id)arg2;
- (void)_join:(CDUnknownBlockType)arg1;
- (void)aggregateJoin:(CDUnknownBlockType)arg1;
- (void)aggregateJoinLeft:(CDUnknownBlockType)arg1;
- (void)aggregateJoinRight:(CDUnknownBlockType)arg1;
- (void)applyUpdates;
- (void)dealloc;
- (id)initWithName:(id)arg1 targetQueue:(id)arg2;
- (void)join:(CDUnknownBlockType)arg1;
- (void)joinLeft:(CDUnknownBlockType)arg1;
- (void)joinRight:(CDUnknownBlockType)arg1;
- (void)performLeft:(CDUnknownBlockType)arg1;
- (void)performLeftOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)performRight:(CDUnknownBlockType)arg1;
- (void)performRightOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)wait;

@end

