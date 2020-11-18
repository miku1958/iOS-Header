//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSDictionary, NSNumber, NSString, WKBrowsingContextHandle;

@protocol SFReaderWebProcessControllerProtocol <NSObject>
- (void)collectReaderContentForMail;
- (void)collectReadingListItemInfoWithBookmarkID:(NSNumber *)arg1;
- (void)decreaseReaderTextSize;
- (void)didCreateReaderPageContextHandle:(WKBrowsingContextHandle *)arg1;
- (void)didFinishPresentationUpdateAfterTransitioningToReader;
- (void)increaseReaderTextSize;
- (void)loadNewReaderArticle;
- (void)prepareReaderContentForPrinting;
- (void)prepareToTransitionToReader;
- (void)setInitalArticleScrollPositionAsDictionary:(NSDictionary *)arg1;
- (void)setReaderFont:(NSString *)arg1;
- (void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(NSDictionary *)arg2 isViewingArchive:(BOOL)arg3;
- (void)setReaderTheme:(NSString *)arg1;
- (void)willHideReader;
@end

