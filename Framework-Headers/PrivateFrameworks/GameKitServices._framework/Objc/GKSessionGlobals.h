//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GKSessionGlobals : NSObject
{
    unsigned int *_activePIDList;
    unsigned long long _activePIDListSize;
    unsigned long long _activePIDListCount;
    struct _opaque_pthread_mutex_t _lock;
}

- (BOOL)hasActivePID:(unsigned int)arg1;
- (id)init;
- (void)lock;
- (void)registerPID:(unsigned int)arg1;
- (void)unlock;
- (void)unregisterPID:(unsigned int)arg1;

@end

