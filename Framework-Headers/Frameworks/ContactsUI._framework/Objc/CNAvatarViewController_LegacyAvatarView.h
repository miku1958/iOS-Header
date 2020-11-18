//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNAvatarViewController.h>

#import <ContactsUI/CNAvatarViewDelegate-Protocol.h>

@class CNAvatarView, CNContactStore, NSArray, NSString, PRPersonaStore;
@protocol CNSchedulerProvider, CNUILikenessRendering, NSObject><CNAvatarViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNAvatarViewController_LegacyAvatarView : CNAvatarViewController <CNAvatarViewDelegate>
{
    BOOL _threeDTouchEnabled;
    NSArray *_contacts;
    CNContactStore *_contactStore;
    PRPersonaStore *_personaStore;
    id<CNUILikenessRendering> _imageRenderer;
    unsigned long long _style;
    id<NSObject><CNAvatarViewControllerDelegate> _delegate;
    id<CNSchedulerProvider> _schedulerProvider;
    CNAvatarView *_avatarView;
}

@property (weak, nonatomic) CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property (readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NSObject><CNAvatarViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<CNUILikenessRendering> imageRenderer; // @synthesize imageRenderer=_imageRenderer;
@property (readonly, nonatomic) PRPersonaStore *personaStore; // @synthesize personaStore=_personaStore;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property (nonatomic) unsigned long long style; // @synthesize style=_style;
@property (readonly) Class superclass;
@property (nonatomic, getter=isThreeDTouchEnabled) BOOL threeDTouchEnabled; // @synthesize threeDTouchEnabled=_threeDTouchEnabled;

- (void).cxx_destruct;
- (id)contacts;
- (id)descriptorForRequiredKeys;
- (void)didUpdateContentForAvatarView:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (void)loadView;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)setContacts:(id)arg1;

@end

