//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRMessageCallback : NSObject
{
    CDUnknownBlockType _reply;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly, nonatomic) CDUnknownBlockType reply; // @synthesize reply=_reply;

- (void)dealloc;
- (id)initWithReply:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)invoke:(id)arg1;

@end
