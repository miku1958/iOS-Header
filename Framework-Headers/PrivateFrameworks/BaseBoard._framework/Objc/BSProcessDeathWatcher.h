//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BSDispatchSource;

@interface BSProcessDeathWatcher : NSObject
{
    BSDispatchSource *_source;
    CDUnknownBlockType _deathHandler;
}

- (void)dealloc;
- (id)initWithPID:(int)arg1 queue:(id)arg2 deathHandler:(CDUnknownBlockType)arg3;
- (void)invalidate;

@end
