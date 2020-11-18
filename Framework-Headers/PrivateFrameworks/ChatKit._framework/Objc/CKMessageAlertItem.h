//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKAlertItem.h>

#import <ChatKit/NCInteractiveNotificationHostDelegate-Protocol.h>
#import <ChatKit/SBBannerPresentingAlertItem-Protocol.h>

@class BBBulletin, CKIMDBMessage, NCInteractiveNotificationHostViewController, NSString;
@protocol SBBannerPresentingAlertItemDelegate;

@interface CKMessageAlertItem : CKAlertItem <NCInteractiveNotificationHostDelegate, SBBannerPresentingAlertItem>
{
    CKIMDBMessage *_message;
    BOOL _playedSound;
    BBBulletin *_bulletin;
    BOOL _showingImage;
    id<SBBannerPresentingAlertItemDelegate> bannerPresenterDelegate;
    NCInteractiveNotificationHostViewController *_audioPlaybackViewController;
}

@property (strong, nonatomic) NCInteractiveNotificationHostViewController *audioPlaybackViewController; // @synthesize audioPlaybackViewController=_audioPlaybackViewController;
@property (nonatomic) id<SBBannerPresentingAlertItemDelegate> bannerPresenterDelegate; // @synthesize bannerPresenterDelegate;
@property (strong, nonatomic) BBBulletin *bulletin; // @synthesize bulletin=_bulletin;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL showingImage; // @synthesize showingImage=_showingImage;
@property (readonly) Class superclass;

+ (int)lastMessageSenderID;
+ (void)playMessageReceived;
+ (void)setLastMessageSenderID:(int)arg1;
+ (void)stopPlayingCurrentAlertTone;
- (id)_groupID;
- (id)accessoryView;
- (id)address;
- (id)alertImage;
- (Class)alertSheetClass;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (BOOL)allowMenuButtonDismissal;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)dealloc;
- (void)didDeactivateForReason:(int)arg1;
- (BOOL)dismissOnLock;
- (BOOL)isAudioPlaybackAlert;
- (id)messageText;
- (id)name;
- (void)performUnlockAction;
- (void)reply;
- (void)setMessage:(id)arg1;
- (void)willPresentAlertView:(id)arg1;
- (void)willRelockForButtonPress:(BOOL)arg1;

@end
