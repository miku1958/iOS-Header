//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/NSObject-Protocol.h>

@class NSObject, PKInlineColorPicker;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@protocol PKInlineColorPickerSerialViewControllerTransitionDelegate <NSObject>
- (NSObject<OS_dispatch_queue> *)_queueForSerialViewControllerTransitionFromColorPicker:(PKInlineColorPicker *)arg1;
- (NSObject<OS_dispatch_semaphore> *)_semaphoreForSerialViewControllerTransitionFromColorPicker:(PKInlineColorPicker *)arg1;
@end

