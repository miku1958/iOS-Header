//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaServices/MSVMultiCallback.h>

@class NSLock;

@interface MSVThreadSafeMultiCallback : MSVMultiCallback
{
    NSLock *_readLock;
    NSLock *_writeLock;
    int readers;
}

- (void).cxx_destruct;
- (void)addCallback:(id)arg1;
- (id)init;
- (void)invoke:(id)arg1;
- (void)removeCallback:(id)arg1;

@end
