//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, PHImportDeviceSource;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ICCameraDeviceRemovedItemsCoalescer : NSObject
{
    NSObject<OS_dispatch_source> *_timer;
    NSDate *_lastNotify;
    NSMutableArray *_items;
    PHImportDeviceSource *_source;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _block;
}

@property (copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property (strong, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property (strong, nonatomic) NSDate *lastNotify; // @synthesize lastNotify=_lastNotify;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (weak, nonatomic) PHImportDeviceSource *source; // @synthesize source=_source;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;

- (void).cxx_destruct;
- (void)coalesceItems:(id)arg1;
- (id)initWithDevice:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
