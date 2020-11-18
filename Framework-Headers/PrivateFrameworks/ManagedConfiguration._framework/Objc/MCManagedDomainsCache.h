//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface MCManagedDomainsCache : NSObject
{
    NSObject<OS_dispatch_queue> *_memberQueue;
    NSMutableArray *_memberQueueCache;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
@property (strong, nonatomic) NSMutableArray *memberQueueCache; // @synthesize memberQueueCache=_memberQueueCache;

+ (id)sharedCache;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isURLManaged:(id)arg1;
- (void)memberQueueRereadCache;
- (void)rereadCache;

@end
