//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (AXQueue)
- (id)ax_dequeueObject;
- (void)ax_enqueueObject:(id)arg1;
- (id)ax_lastEnqueuedObject;
- (id)ax_nextDequeuedObject;
- (void)ax_removeObjectsFromArrayUsingBlock:(CDUnknownBlockType)arg1;
@end

