//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCRelativePath;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCAsyncDirectoryEnumerator : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_targetQueue;
    long long _batchSize;
    BOOL _isRecursive;
    int _error;
    BRCRelativePath *_rootPath;
}

@property (readonly, nonatomic) BRCRelativePath *rootPath; // @synthesize rootPath=_rootPath;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initForEnumeratingBelow:(id)arg1 recursive:(BOOL)arg2 batchSize:(long long)arg3 targetQueue:(id)arg4;
- (void)scheduleWithProcessBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;

@end

