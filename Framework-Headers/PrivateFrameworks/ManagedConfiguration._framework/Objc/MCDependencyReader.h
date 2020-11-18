//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MCDependencyReader : NSObject
{
    NSObject<OS_dispatch_queue> *_memberQueue;
    NSMutableDictionary *_memberQueueDomainsDict;
}

@property (readonly, nonatomic) NSDictionary *domainsDict;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
@property (strong, nonatomic) NSMutableDictionary *memberQueueDomainsDict; // @synthesize memberQueueDomainsDict=_memberQueueDomainsDict;

+ (void)setStoragePath:(id)arg1;
+ (id)sharedReader;
+ (id)storagePath;
- (void).cxx_destruct;
- (id)_init;
- (id)dependentsOfParent:(id)arg1 inDomain:(id)arg2;
- (id)init;
- (void)invalidateCache;
- (id)memberQueueDependentsOfParent:(id)arg1 inDomain:(id)arg2;
- (id)memberQueueParentsInDomain:(id)arg1;
- (void)memberQueueRereadDomainsDict;
- (id)parentsInDomain:(id)arg1;

@end
