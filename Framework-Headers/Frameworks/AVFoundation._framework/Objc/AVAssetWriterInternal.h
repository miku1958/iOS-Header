//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAssetWriterHelper, AVKeyPathDependencyManager, AVWeakReference;
@protocol OS_dispatch_queue;

@interface AVAssetWriterInternal : NSObject
{
    AVWeakReference *weakReference;
    AVAssetWriterHelper *helper;
    NSObject<OS_dispatch_queue> *helperReadWriteQueue;
    AVKeyPathDependencyManager *keyPathDependencyManager;
}

@end
