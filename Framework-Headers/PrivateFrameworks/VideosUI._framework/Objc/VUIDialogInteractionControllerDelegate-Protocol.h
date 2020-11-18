//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSIndexPath, VUIDialogInteractionController;

@protocol VUIDialogInteractionControllerDelegate <NSObject>
- (void)dialogInteractionController:(VUIDialogInteractionController *)arg1 interactionDidBeginForIndexPath:(NSIndexPath *)arg2;
- (void)dialogInteractionController:(VUIDialogInteractionController *)arg1 interactionDidEndForIndexPath:(NSIndexPath *)arg2;
- (BOOL)dialogInteractionController:(VUIDialogInteractionController *)arg1 shouldBeginInteractionForIndexPath:(NSIndexPath *)arg2;
@end
