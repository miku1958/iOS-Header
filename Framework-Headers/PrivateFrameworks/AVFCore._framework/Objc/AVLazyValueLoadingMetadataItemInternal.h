//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVMetadataItemValueRequest, NSError, NSMutableArray, NSString;
@protocol NSObject><NSCopying, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVLazyValueLoadingMetadataItemInternal : NSObject
{
    id<NSObject><NSCopying> value;
    NSString *dataType;
    AVMetadataItemValueRequest *valueRequest;
    CDUnknownBlockType valueLoadingHandler;
    long long valueStatus;
    NSError *valueLoadingError;
    NSMutableArray *loadingCompletionHandlers;
    NSObject<OS_dispatch_queue> *readWriteQueue;
}

@end

