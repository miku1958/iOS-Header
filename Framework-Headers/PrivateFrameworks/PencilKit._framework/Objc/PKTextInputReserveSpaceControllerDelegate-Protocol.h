//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/NSObject-Protocol.h>

@class PKTextInputElement, PKTextInputReserveSpaceController;

@protocol PKTextInputReserveSpaceControllerDelegate <NSObject>
- (void)reserveSpaceController:(PKTextInputReserveSpaceController *)arg1 willFocusElement:(PKTextInputElement *)arg2;
- (void)reserveSpaceControllerIsActiveChanged:(PKTextInputReserveSpaceController *)arg1;
- (void)reserveSpaceControllerIsPlaceholderVisibleChanged:(PKTextInputReserveSpaceController *)arg1;
@end
