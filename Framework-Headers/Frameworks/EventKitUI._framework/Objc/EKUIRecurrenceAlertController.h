//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <EventKitUI/UIActionSheetDelegate-Protocol.h>

@class NSString, UIAlertController;

@interface EKUIRecurrenceAlertController : NSObject <UIActionSheetDelegate>
{
    UIAlertController *_alertController;
    CDUnknownBlockType _completionHandler;
}

@property (copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_cancelLocalizedString;
+ (id)_detachAllLocalizedString;
+ (id)_detachFutureLocalizedString;
+ (id)newAlertControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)presentDeleteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 stringForDeleteButton:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
+ (id)presentDeleteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (id)presentDetachAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)_cleanup;
- (void)_completeWithSelection:(int)arg1;
- (void)_presentDeleteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 stringForDeleteButton:(id)arg3;
- (void)_presentDetachAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2;
- (BOOL)_useSheetForViewController:(id)arg1;
- (void)cancelAnimated:(BOOL)arg1;
- (void)dealloc;

@end

