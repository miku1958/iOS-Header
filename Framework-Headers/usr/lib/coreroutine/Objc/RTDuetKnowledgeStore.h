//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, _DKKnowledgeQuerying;

@interface RTDuetKnowledgeStore : NSObject
{
    id<_DKKnowledgeQuerying> _knowledgeStore;
    NSObject<OS_dispatch_queue> *_requestQueue;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (strong, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // @synthesize requestQueue=_requestQueue;

- (void).cxx_destruct;
- (void)executeQuery:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)reset;
- (void)resume;

@end
