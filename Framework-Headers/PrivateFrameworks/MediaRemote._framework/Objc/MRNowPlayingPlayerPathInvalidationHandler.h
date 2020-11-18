//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRNowPlayingPlayerPathInvalidationHandler : NSObject
{
    void *_playerPath;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _callback;
}

@property (readonly, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property (readonly, nonatomic) void *playerPath; // @synthesize playerPath=_playerPath;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

- (void)dealloc;
- (id)initWithPlayerPath:(void *)arg1 queue:(id)arg2 invalidationCallback:(CDUnknownBlockType)arg3;

@end

