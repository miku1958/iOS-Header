//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNVisualIdentityPickerViewController.h>

#import <ChatKit/CNVisualIdentityPickerViewControllerDelegate-Protocol.h>

@class CKConversation;
@protocol CKVisualIdentityPickerViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CKVisualIdentityPickerViewController : CNVisualIdentityPickerViewController <CNVisualIdentityPickerViewControllerDelegate>
{
    CKConversation *_conversation;
    id<CKVisualIdentityPickerViewControllerDelegate> _presentationDelegate;
}

@property (strong, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property (weak, nonatomic) id<CKVisualIdentityPickerViewControllerDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;

+ (id)imagePickerForContact:(id)arg1;
+ (id)imagePickerForGroupIdentity:(id)arg1 withConversation:(id)arg2;
- (void).cxx_destruct;
- (void)visualIdentityPicker:(id)arg1 didUpdatePhotoForVisualIdentity:(id)arg2 withContactImage:(id)arg3;
- (void)visualIdentityPickerDidCancel:(id)arg1;

@end
