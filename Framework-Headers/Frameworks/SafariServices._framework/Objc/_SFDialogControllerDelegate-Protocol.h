//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class _SFDialog, _SFDialogController;

@protocol _SFDialogControllerDelegate <NSObject>

@optional
- (BOOL)dialogController:(_SFDialogController *)arg1 shouldSuppressDialog:(_SFDialog *)arg2;
- (void)dialogController:(_SFDialogController *)arg1 willPresentDialog:(_SFDialog *)arg2;
@end
