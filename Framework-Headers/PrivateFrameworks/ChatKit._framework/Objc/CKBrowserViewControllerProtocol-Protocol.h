//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKBrowserDragManager, IMBalloonPlugin, IMBalloonPluginDataSource, NSArray, NSData, NSNumber, NSObject, NSString, NSURL, UIViewController;
@protocol CKBrowserViewControllerSendDelegate, UIViewControllerTransitioningDelegate;

@protocol CKBrowserViewControllerProtocol <NSObject>

@property (strong, nonatomic) NSNumber *adamID;
@property (readonly, nonatomic) unsigned long long badgeValue;
@property (readonly, nonatomic) IMBalloonPlugin *balloonPlugin;
@property (strong, nonatomic) IMBalloonPluginDataSource *balloonPluginDataSource;
@property (readonly, nonatomic) CKBrowserDragManager *browserDragManager;
@property (readonly, nonatomic) long long browserPresentationStyle;
@property (readonly, nonatomic) BOOL canReplaceDataSource;
@property (strong, nonatomic) NSData *conversationEngramID;
@property (nonatomic) NSString *conversationID;
@property (nonatomic) long long currentBrowserConsumer;
@property (readonly, nonatomic, getter=isDismissing) BOOL dismissing;
@property (readonly, nonatomic) struct CGRect horizontalSwipeExclusionRect;
@property (readonly, nonatomic) BOOL inExpandedPresentation;
@property (readonly, nonatomic) BOOL inFullScreenModalPresentation;
@property (nonatomic) BOOL isPrimaryViewController;
@property (nonatomic) BOOL isiMessage;
@property (readonly, nonatomic) BOOL mayBeKeptInViewHierarchy;
@property (readonly, nonatomic) long long parentModalPresentationStyle;
@property (readonly, weak, nonatomic) id<UIViewControllerTransitioningDelegate> parentTransitioningDelegate;
@property (strong, nonatomic) UIViewController *presentationViewController;
@property (strong, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) UIViewController *remoteViewController;
@property (weak, nonatomic) NSObject<CKBrowserViewControllerSendDelegate> *sendDelegate;
@property (strong, nonatomic) NSString *sender;
@property (readonly, nonatomic) BOOL shouldShowChatChrome;
@property (readonly, nonatomic) BOOL shouldSuppressEntryView;
@property (readonly, nonatomic) BOOL supportsQuickView;
@property (readonly, nonatomic) BOOL wantsDarkUI;
@property (readonly, nonatomic) BOOL wantsOpaqueUI;
@property (readonly, nonatomic) BOOL wasExpandedPresentation;

- (void)dismiss;
- (id)initWithBalloonPlugin:(IMBalloonPlugin *)arg1;
- (id)initWithBalloonPlugin:(IMBalloonPlugin *)arg1 dataSource:(IMBalloonPluginDataSource *)arg2;
- (BOOL)isLoaded;

@optional
- (void)_updateContentOverlayInsetsForSelfAndChildren;
- (void)beginDisablingUserInteraction;
- (void)beginSuppressingAppearanceMethods;
- (void)browserScrolledOffScreen;
- (void)browserScrolledOnScreen;
- (id)cancelTouchesInView;
- (void)deferredForceTearDownRemoteView;
- (void)didTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (void)dropAssertion;
- (void)endDisablingUserInteraction;
- (void)endSuppressingAppearanceMethods;
- (void)forceTearDownRemoteView;
- (void)killExtensionProcess;
- (void)loadRemoteView;
- (void)messageAddedWithDataSource:(IMBalloonPluginDataSource *)arg1;
- (void)prepareForDisplay;
- (NSData *)requestSnapshotDataForPersistance;
- (void)saveSnapshotForBrowserViewController;
- (void)setStoreLaunchURL:(NSURL *)arg1 sourceApplication:(NSString *)arg2;
- (void)unloadRemoteView;
- (void)viewDidTransitionToCompactPresentation;
- (void)viewDidTransitionToExpandedPresentation;
- (void)viewWillTransitionToCompactPresentation;
- (void)viewWillTransitionToExpandedPresentation;
- (void)volumeButtonPressed:(BOOL)arg1;
@end

