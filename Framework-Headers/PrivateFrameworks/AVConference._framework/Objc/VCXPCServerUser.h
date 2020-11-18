//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCXPCServerUser : NSObject
{
    NSObject<OS_dispatch_queue> *queue;
    CDUnknownBlockType block;
    int _eventLogLevel;
}

@property (copy, nonatomic) CDUnknownBlockType block; // @synthesize block;
@property (nonatomic) int eventLogLevel; // @synthesize eventLogLevel=_eventLogLevel;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue;

- (void)dealloc;
- (id)init;

@end

