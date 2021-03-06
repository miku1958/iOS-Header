//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSCKContainer;
@protocol OS_dispatch_queue;

@interface IDSCloudKitKeyValueStore : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    IDSCKContainer *_container;
}

@property (strong, nonatomic) IDSCKContainer *container; // @synthesize container=_container;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

- (void).cxx_destruct;
- (void)fetchDataForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchObjectForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithContainer:(id)arg1 queue:(id)arg2;
- (void)setData:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

