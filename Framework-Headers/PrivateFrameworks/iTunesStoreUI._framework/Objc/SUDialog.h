//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/UIAlertViewDelegate-Protocol.h>

@class ISDialog, NSString, UIAlertView;

@interface SUDialog : NSObject <UIAlertViewDelegate>
{
    UIAlertView *_alertView;
    CDUnknownBlockType _completionBlock;
    ISDialog *_dialog;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ISDialog *dialog; // @synthesize dialog=_dialog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_alertView;
- (void)_completeWithButtonIndex:(long long)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)dealloc;
- (id)initWithDialog:(id)arg1;
- (BOOL)isEquivalent:(id)arg1;
- (void)showWithCompletionBlock:(CDUnknownBlockType)arg1;

@end

