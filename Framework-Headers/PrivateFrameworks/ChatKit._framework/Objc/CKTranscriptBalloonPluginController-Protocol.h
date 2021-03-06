//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKTranscriptPluginViewReuseDelegate-Protocol.h>
#import <ChatKit/IMBalloonPluginController-Protocol.h>

@class IMBalloonPluginDataSource, NSArray, NSString, UIView, UIViewController;
@protocol CKTranscriptPluginView;

@protocol CKTranscriptBalloonPluginController <CKTranscriptPluginViewReuseDelegate, IMBalloonPluginController>

@property (nonatomic) BOOL allowsOpeningSensitiveURLs;
@property (readonly, nonatomic) UIViewController *contentViewController;
@property (readonly, nonatomic) BOOL hasSizingInfo;
@property (readonly, nonatomic) BOOL isInteractive;
@property (readonly, nonatomic) UIView<CKTranscriptPluginView> *pluginContentView;
@property (readonly, nonatomic) UIViewController *pluginContentViewController;
@property (copy, nonatomic) CDUnknownBlockType updateSnapshot;
@property (readonly, nonatomic) BOOL wantsBalloonGradient;
@property (readonly, nonatomic) BOOL wantsOutline;
@property (readonly, nonatomic) BOOL wantsTranscriptGroupMonograms;
@property (readonly, nonatomic) BOOL wantsTranscriptTimestampDrawer;


@optional
+ (UIViewController *)contentViewControllerForDataSource:(IMBalloonPluginDataSource *)arg1;
- (void)clearShelfPayload;
- (void)configureWithConversationID:(NSString *)arg1 recipients:(NSArray *)arg2;
- (void)configureWithDataSource:(IMBalloonPluginDataSource *)arg1 isFromMe:(BOOL)arg2;
- (void)didFinishAnimatedBoundsChange;
- (BOOL)handlePresentationAction;
- (void)performHostAppResume;
- (void)performHostAppSuspend;
- (void)pluginContentViewWillAppear;
- (void)pluginContentViewWillDisappear;
- (void)relinquishDataSource;
- (void)willAnimateBoundsChange;
@end

