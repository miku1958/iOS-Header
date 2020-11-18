//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/WFOpenInAction.h>

#import <ActionKitUI/UIDocumentInteractionControllerDelegatePrivate-Protocol.h>

@class NSString, UIDocumentInteractionController, WFFileRepresentation;

@interface WFOpenInAction (UIKit) <UIDocumentInteractionControllerDelegatePrivate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIDocumentInteractionController *document;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) WFFileRepresentation *retainedFile;
@property (weak, nonatomic) WFFileRepresentation *sendingFile;
@property (readonly) Class superclass;

- (void)documentInteractionController:(id)arg1 didEndSendingToApplication:(id)arg2;
- (void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2;
- (void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1;
- (id)excludedActivityTypesForDocumentInteractionController:(id)arg1;
- (void)runWithUIKitUserInterface:(id)arg1 input:(id)arg2;
@end
