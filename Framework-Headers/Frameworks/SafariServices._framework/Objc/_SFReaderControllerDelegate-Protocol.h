//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>
#import <SafariServices/WKUIDelegatePrivate-Protocol.h>

@class NSDictionary, NSNumber, NSString, NSURL, NSURLRequest, _SFReaderController, _SFSyntheticClickContext, _WKFrameHandle;

@protocol _SFReaderControllerDelegate <NSObject, WKUIDelegatePrivate>

@optional
- (void)createReaderWebViewForReaderController:(_SFReaderController *)arg1;
- (void)readerController:(_SFReaderController *)arg1 contentDidBecomeReadyWithDetectedLanguage:(NSString *)arg2;
- (void)readerController:(_SFReaderController *)arg1 didClickLinkInReaderWithRequest:(NSURLRequest *)arg2;
- (void)readerController:(_SFReaderController *)arg1 didClickLinkRequestingNewWindowInReaderWithRequest:(NSURLRequest *)arg2;
- (void)readerController:(_SFReaderController *)arg1 didCollectArticleContent:(NSDictionary *)arg2;
- (void)readerController:(_SFReaderController *)arg1 didCollectReaderContentForMail:(NSString *)arg2;
- (void)readerController:(_SFReaderController *)arg1 didCollectReadingListItemInfo:(NSDictionary *)arg2 bookmarkID:(NSNumber *)arg3;
- (void)readerController:(_SFReaderController *)arg1 didDeactivateReaderWithMode:(unsigned long long)arg2;
- (void)readerController:(_SFReaderController *)arg1 didDetermineReaderAvailability:(BOOL)arg2 dueTo:(long long)arg3;
- (void)readerController:(_SFReaderController *)arg1 didExtractArticleText:(NSString *)arg2 withMetadata:(NSDictionary *)arg3;
- (void)readerController:(_SFReaderController *)arg1 didPrepareReaderContentForPrinting:(_WKFrameHandle *)arg2;
- (void)readerController:(_SFReaderController *)arg1 didSetReaderConfiguration:(NSDictionary *)arg2;
- (void)readerController:(_SFReaderController *)arg1 didTwoFingerTapLinkInReaderWithContext:(_SFSyntheticClickContext *)arg2;
- (NSURL *)readerURLForReaderController:(_SFReaderController *)arg1;
@end
