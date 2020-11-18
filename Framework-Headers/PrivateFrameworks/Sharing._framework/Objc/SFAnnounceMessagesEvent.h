//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/SFCoreAnalyticsEvent-Protocol.h>

@class NSDictionary, NSString;

@interface SFAnnounceMessagesEvent : NSObject <SFCoreAnalyticsEvent>
{
    BOOL _allowsSiriWhenLocked;
    BOOL _announceMessagesAlreadyEnabled;
    BOOL _skippedTutorialCards;
    BOOL _userAutomaticallyEnrolled;
    BOOL _userExplicitlyOptedIn;
    BOOL _userExplicitlyOptedOut;
    long long _pairingExitView;
}

@property (nonatomic) BOOL allowsSiriWhenLocked; // @synthesize allowsSiriWhenLocked=_allowsSiriWhenLocked;
@property (nonatomic) BOOL announceMessagesAlreadyEnabled; // @synthesize announceMessagesAlreadyEnabled=_announceMessagesAlreadyEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *eventPayload;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long pairingExitView; // @synthesize pairingExitView=_pairingExitView;
@property (nonatomic) BOOL skippedTutorialCards; // @synthesize skippedTutorialCards=_skippedTutorialCards;
@property (readonly) Class superclass;
@property (nonatomic) BOOL userAutomaticallyEnrolled; // @synthesize userAutomaticallyEnrolled=_userAutomaticallyEnrolled;
@property (nonatomic) BOOL userExplicitlyOptedIn; // @synthesize userExplicitlyOptedIn=_userExplicitlyOptedIn;
@property (nonatomic) BOOL userExplicitlyOptedOut; // @synthesize userExplicitlyOptedOut=_userExplicitlyOptedOut;

+ (id)eventName;
+ (id)stringForExitView:(long long)arg1;
- (void)submitEvent;

@end
