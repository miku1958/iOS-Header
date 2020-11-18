//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class CKShare, NSError;

@protocol _UIShareInvitationViewControllerHost <NSObject>
- (void)_dismissForActivityRepresentation:(void (^)(void))arg1;
- (void)_dismissViewControllerWithError:(NSError *)arg1;
- (void)_performAuxiliaryActionWithCompletion:(void (^)(void))arg1;
- (void)_performHeaderActionWithCompletion:(void (^)(void))arg1;
- (void)_representFullscreenAfterActivityDismissal:(void (^)(void))arg1;
- (void)_requestContentSize:(struct CGSize)arg1;
- (void)_requestSavedShareWithCompletion:(void (^)(CKShare *, CKContainerID *))arg1;
- (void)_shareDidChange:(CKShare *)arg1;
- (void)_shareWasMadePrivate;
@end
