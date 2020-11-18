//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PDFTimer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PDFTilePoolPrivate : NSObject
{
    NSObject<OS_dispatch_queue> *workQueue;
    struct os_unfair_lock_s surfacesLock;
    NSMutableDictionary *usedSurfaces;
    NSMutableDictionary *freeSurfaces;
    PDFTimer *recycleTimer;
    int tileRenderType;
    BOOL debugColorTileEdge;
}

- (void).cxx_destruct;

@end

