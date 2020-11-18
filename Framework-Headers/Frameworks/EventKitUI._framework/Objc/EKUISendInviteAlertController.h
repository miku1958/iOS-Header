//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EventKitUI/UIActionSheetDelegate-Protocol.h>

@class NSString, UIAlertController;

@interface EKUISendInviteAlertController : NSObject <UIActionSheetDelegate>
{
    CDUnknownBlockType _completionHandler;
    UIAlertController *_alertController;
    EKUISendInviteAlertController *_strongSelf;
}

@property (strong) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property (copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) EKUISendInviteAlertController *strongSelf; // @synthesize strongSelf=_strongSelf;
@property (readonly) Class superclass;

+ (id)newAlertControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)presentInviteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)_cleanup;
- (void)_completeWithSelection:(int)arg1;
- (void)_presentAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2;
- (BOOL)_useSheetForViewController:(id)arg1;
- (void)cancelAnimated:(BOOL)arg1;
- (void)dealloc;

@end

