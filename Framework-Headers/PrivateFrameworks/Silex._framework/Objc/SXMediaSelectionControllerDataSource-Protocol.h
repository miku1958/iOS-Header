//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class AVMediaSelectionGroup, AVMediaSelectionOption, NSString, SXMediaSelectionController;

@protocol SXMediaSelectionControllerDataSource <NSObject>
- (AVMediaSelectionGroup *)mediaSelectionController:(SXMediaSelectionController *)arg1 mediaSelectionGroupWithCharacteristic:(NSString *)arg2;
- (AVMediaSelectionOption *)mediaSelectionController:(SXMediaSelectionController *)arg1 preferredMediaSelectionOptionInMediaSelectionGroup:(AVMediaSelectionGroup *)arg2;
- (AVMediaSelectionOption *)mediaSelectionController:(SXMediaSelectionController *)arg1 selectedMediaSelectionOptionInMediaSelectionGroup:(AVMediaSelectionGroup *)arg2;
@end

