//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/MFComposeHeaderViewDelegate-Protocol.h>

@class MFComposeRecipient, MFComposeRecipientView, MFModernComposeRecipientAtom, NSArray, NSString;

@protocol MFComposeRecipientViewDelegate <MFComposeHeaderViewDelegate>

@optional
- (BOOL)chooseSelectedSearchResultForComposeRecipientView:(MFComposeRecipientView *)arg1;
- (MFComposeRecipient *)composeRecipientView:(MFComposeRecipientView *)arg1 composeRecipientForAddress:(NSString *)arg2;
- (MFComposeRecipient *)composeRecipientView:(MFComposeRecipientView *)arg1 composeRecipientForRecord:(void *)arg2 identifier:(int)arg3;
- (MFComposeRecipient *)composeRecipientView:(MFComposeRecipientView *)arg1 composeRecipientForRecord:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)composeRecipientView:(MFComposeRecipientView *)arg1 didAddRecipient:(MFComposeRecipient *)arg2;
- (void)composeRecipientView:(MFComposeRecipientView *)arg1 didAddRecipients:(NSArray *)arg2;
- (void)composeRecipientView:(MFComposeRecipientView *)arg1 didChangeSize:(struct CGSize)arg2;
- (void)composeRecipientView:(MFComposeRecipientView *)arg1 didFinishEnteringAddress:(NSString *)arg2;
- (void)composeRecipientView:(MFComposeRecipientView *)arg1 didRemoveRecipient:(MFComposeRecipient *)arg2;
- (void)composeRecipientView:(MFComposeRecipientView *)arg1 didReplaceRecipients:(NSArray *)arg2 withRecipients:(NSArray *)arg3;
- (void)composeRecipientView:(MFComposeRecipientView *)arg1 showCorecipients:(NSArray *)arg2;
- (void)composeRecipientView:(MFComposeRecipientView *)arg1 showPersonCardForAtom:(MFModernComposeRecipientAtom *)arg2;
- (void)composeRecipientView:(MFComposeRecipientView *)arg1 showPersonCardForRecipient:(MFComposeRecipient *)arg2;
- (void)composeRecipientView:(MFComposeRecipientView *)arg1 textDidChange:(NSString *)arg2;
- (void)composeRecipientViewDidBecomeFirstResponder:(MFComposeRecipientView *)arg1;
- (void)composeRecipientViewDidFinishPickingRecipient:(MFComposeRecipientView *)arg1;
- (void)composeRecipientViewRequestAddRecipient:(MFComposeRecipientView *)arg1;
- (void)composeRecipientViewReturnPressed:(MFComposeRecipientView *)arg1;
- (BOOL)composeRecipientViewShowingSearchResults:(MFComposeRecipientView *)arg1;
- (void)dismissSearchResultsForComposeRecipientView:(MFComposeRecipientView *)arg1;
- (BOOL)presentSearchResultsForComposeRecipientView:(MFComposeRecipientView *)arg1;
- (void)recipientViewDidBecomeFirstResponder:(MFComposeRecipientView *)arg1;
- (void)recipientViewDidResignFirstResponder:(MFComposeRecipientView *)arg1;
- (BOOL)recipientViewShouldIgnoreFirstResponderChanges:(MFComposeRecipientView *)arg1;
- (void)selectNextSearchResultForComposeRecipientView:(MFComposeRecipientView *)arg1;
- (void)selectPreviousSearchResultForComposeRecipientView:(MFComposeRecipientView *)arg1;
@end

