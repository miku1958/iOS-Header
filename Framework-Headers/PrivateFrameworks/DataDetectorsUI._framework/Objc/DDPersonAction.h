//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsUI/DDPreviewAction.h>

#import <DataDetectorsUI/CNAvatarCardControllerDelegate-Protocol.h>

@class CNAvatarCardController, CNContact, CNContactStore, NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface DDPersonAction : DDPreviewAction <CNAvatarCardControllerDelegate>
{
    CNContact *_contact;
    CNContactStore *_store;
    CNAvatarCardController *_avatar;
    UIViewController *_presentingViewController;
}

@property (strong) CNAvatarCardController *avatar; // @synthesize avatar=_avatar;
@property (strong) CNContact *contact; // @synthesize contact=_contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property (strong) CNContactStore *store; // @synthesize store=_store;
@property (readonly) Class superclass;

+ (BOOL)handlesUrl:(id)arg1 result:(struct __DDResult *)arg2;
- (void).cxx_destruct;
- (id)createViewController;
- (id)initWithURL:(id)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;
- (id)mainValueFromURLString:(id)arg1 schemes:(id)arg2;
- (id)presentingViewControllerForAvatarCardController:(id)arg1;
- (BOOL)requiresEmbeddingNavigationController;

@end
