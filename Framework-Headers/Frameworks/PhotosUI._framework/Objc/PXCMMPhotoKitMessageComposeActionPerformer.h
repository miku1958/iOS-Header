//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXCMMShowMessageComposeActionPerformer.h>

#import <PhotosUICore/MFMessageComposeViewControllerDelegate-Protocol.h>

@class MFMessageComposeViewController, NSString;

@interface PXCMMPhotoKitMessageComposeActionPerformer : PXCMMShowMessageComposeActionPerformer <MFMessageComposeViewControllerDelegate>
{
    MFMessageComposeViewController *_messageComposeViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)performUserInteractionTask;

@end
