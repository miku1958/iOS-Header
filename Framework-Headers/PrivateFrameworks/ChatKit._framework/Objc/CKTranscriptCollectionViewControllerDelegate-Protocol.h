//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKTranscriptCollectionViewController, NSIndexPath;

@protocol CKTranscriptCollectionViewControllerDelegate <NSObject>
- (void)transcriptCollectionViewController:(CKTranscriptCollectionViewController *)arg1 balloonViewTappedForItemWithIndexPath:(NSIndexPath *)arg2;
- (void)transcriptCollectionViewController:(CKTranscriptCollectionViewController *)arg1 balloonViewTitleTappedForItemWithIndexPath:(NSIndexPath *)arg2;
- (void)transcriptCollectionViewController:(CKTranscriptCollectionViewController *)arg1 collectionViewContentSizeDidChange:(struct CGSize)arg2;
- (void)transcriptCollectionViewController:(CKTranscriptCollectionViewController *)arg1 didDeselectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)transcriptCollectionViewController:(CKTranscriptCollectionViewController *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)transcriptCollectionViewController:(CKTranscriptCollectionViewController *)arg1 moreButtonTappedForRowAtIndexPath:(NSIndexPath *)arg2;
- (void)transcriptCollectionViewControllerChatItemsDidChange:(CKTranscriptCollectionViewController *)arg1;
- (void)transcriptCollectionViewControllerDidInset:(CKTranscriptCollectionViewController *)arg1;
- (void)transcriptCollectionViewControllerPlayingAudioDidChange:(CKTranscriptCollectionViewController *)arg1;
- (void)transcriptCollectionViewControllerReportSpamButtonTapped:(CKTranscriptCollectionViewController *)arg1;
- (BOOL)transcriptCollectionViewControllerShouldPlayAudio:(CKTranscriptCollectionViewController *)arg1;
- (void)transcriptCollectionViewControllerWillInset:(CKTranscriptCollectionViewController *)arg1 targetContentInset:(inout struct UIEdgeInsets *)arg2;
- (void)transcriptCollectionViewControllerWillScrollToBottom:(CKTranscriptCollectionViewController *)arg1;
@end

