//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/NSObject-Protocol.h>

@class EKEventStore, EKShareePickerViewController;

@protocol EKShareePickerViewControllerDelegate <NSObject>
- (EKEventStore *)eventStoreForShareePickerViewController:(EKShareePickerViewController *)arg1;
- (void)shareePickerViewController:(EKShareePickerViewController *)arg1 didCompleteWithAction:(int)arg2;
@end

