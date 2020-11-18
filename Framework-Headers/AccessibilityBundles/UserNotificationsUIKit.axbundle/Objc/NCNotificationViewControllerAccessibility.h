//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__NCNotificationViewControllerAccessibility_super.h"

@interface NCNotificationViewControllerAccessibility : __NCNotificationViewControllerAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (BOOL)_accessibilityAppearanceAnnouncementHandledByEnclosingEntity;
- (BOOL)_accessibilityShouldPostScreenChangedOnPresentation;
- (void)_axAnnounceNotification;
- (void)_axHandleAnnouncementFinished;
- (BOOL)_axHasFinishedAnnouncement;
- (BOOL)_axHasSentAnnouncement;
- (id)_axLongLookView;
- (void)_axNotifyDidEndUserInteraction;
- (void)_axNotifyWillBeginUserInteraction:(BOOL)arg1;
- (void)_axSetHasFinishedAnnouncement:(BOOL)arg1;
- (void)_axSetHasSentAnnouncement:(BOOL)arg1;
- (void)_logNotificationMessage:(id)arg1;
- (void)dismissViewControllerWithTransition:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewDidAppear:(BOOL)arg1;

@end
