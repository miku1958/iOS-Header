//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNContact;
@protocol CNSharingProfileOnboardingAudienceController;

@protocol CNSharingProfileOnboardingAudienceControllerDelegate <NSObject>
- (void)audienceController:(id<CNSharingProfileOnboardingAudienceController>)arg1 didFinishWithContact:(CNContact *)arg2 sharingAudience:(unsigned long long)arg3;

@optional
- (void)audienceControllerDidTapSetupLater:(id<CNSharingProfileOnboardingAudienceController>)arg1;
@end

