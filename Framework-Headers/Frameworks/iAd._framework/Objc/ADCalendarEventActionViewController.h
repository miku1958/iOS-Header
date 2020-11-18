//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iAd/ADActionViewController.h>

#import <iAd/EKEventEditViewDelegate-Protocol.h>

@class ADEventEditViewController, EKEvent, NSString;

@interface ADCalendarEventActionViewController : ADActionViewController <EKEventEditViewDelegate>
{
    EKEvent *_calendarEvent;
    ADEventEditViewController *_eventKitEditViewController;
}

@property (strong, nonatomic) EKEvent *calendarEvent; // @synthesize calendarEvent=_calendarEvent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) ADEventEditViewController *eventKitEditViewController; // @synthesize eventKitEditViewController=_eventKitEditViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)clientApplicationDidEnterBackground;
- (void)didSetAdSpace;
- (void)dismiss;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
