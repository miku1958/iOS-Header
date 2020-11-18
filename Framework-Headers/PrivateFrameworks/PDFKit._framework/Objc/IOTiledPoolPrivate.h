//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface IOTiledPoolPrivate : NSObject
{
    NSObject<OS_dispatch_queue> *barrierQueue;
    NSObject<OS_dispatch_queue> *workQueue;
    NSObject<OS_dispatch_semaphore> *workSemaphore;
    NSObject<OS_dispatch_queue> *requestsBarrier;
    NSMutableDictionary *usedSurfaces;
    NSMutableDictionary *freeSurfaces;
    int tileRenderType;
    BOOL debugColorTileEdge;
    BOOL debugSaveBitmapFile;
}

- (void).cxx_destruct;

@end

