//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <EventKitUI/MFMailComposeViewControllerDelegate-Protocol.h>

@class EKEvent, NSString;

@interface EKUIInviteesViewMessageSendingViewController : UIViewController <MFMailComposeViewControllerDelegate>
{
    CDUnknownBlockType _messageSendingComplete;
    EKEvent *_event;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) EKEvent *event; // @synthesize event=_event;
@property (readonly) unsigned long long hash;
@property (copy) CDUnknownBlockType messageSendingComplete; // @synthesize messageSendingComplete=_messageSendingComplete;
@property (readonly) Class superclass;

+ (id)_attendeesIgnorningMe:(id)arg1;
+ (id)_recipientEmailAddressesToDisplayNames:(id)arg1;
+ (BOOL)canShowForEvent:(id)arg1;
- (void).cxx_destruct;
- (id)_htmlBodyForMailMessageWithNames:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (BOOL)prefersForcedModalShowViewController;
- (BOOL)prefersToBePresentedFromApplicationRootViewController;

@end
