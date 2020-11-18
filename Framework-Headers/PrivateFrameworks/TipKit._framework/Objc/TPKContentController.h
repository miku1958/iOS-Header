//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TipKit/TPKContentViewDelegate-Protocol.h>
#import <TipKit/TPKTipContentHintViewDelegate-Protocol.h>
#import <TipKit/TPSConstellationContentParserDelegate-Protocol.h>
#import <TipKit/TPSEventsProviderDelegate-Protocol.h>

@class NSArray, NSDate, NSHashTable, NSString, TPKContent, TPKContentViewController, TPSDuetEventsProvider, TPSMiniTipContentManager;
@protocol OS_dispatch_queue;

@interface TPKContentController : NSObject <TPKContentViewDelegate, TPKTipContentHintViewDelegate, TPSEventsProviderDelegate, TPSConstellationContentParserDelegate>
{
    BOOL _contentOnScreen;
    BOOL _enterForegroundNotificationRegistered;
    BOOL _allowsOverrides;
    BOOL _userPerformedDesiredOutcome;
    BOOL _userPerformedContentDesiredOutcome;
    BOOL _displayTestContent;
    NSDate *_nextAllowedCheckDate;
    NSDate *_lastContentValidateDate;
    NSArray *_currentContext;
    NSObject<OS_dispatch_queue> *_checkQueue;
    TPSDuetEventsProvider *_duetEventsProvider;
    BOOL _contentDismissedByUser;
    long long _state;
    TPKContent *_content;
    NSString *_context;
    NSHashTable *_delegates;
    TPSMiniTipContentManager *_miniTipContentManager;
    NSString *__contentTitle;
    NSString *__contentText;
    TPKContentViewController *_currentPopOverController;
}

@property (copy, nonatomic, getter=_contentText, setter=_setContentText:) NSString *_contentText; // @synthesize _contentText=__contentText;
@property (copy, nonatomic, getter=_contentTitle, setter=_setContentTitle:) NSString *_contentTitle; // @synthesize _contentTitle=__contentTitle;
@property (strong, nonatomic) TPKContent *content; // @synthesize content=_content;
@property (readonly, nonatomic) BOOL contentDismissedByUser; // @synthesize contentDismissedByUser=_contentDismissedByUser;
@property (strong, nonatomic) NSString *context; // @synthesize context=_context;
@property (strong, nonatomic) TPKContentViewController *currentPopOverController; // @synthesize currentPopOverController=_currentPopOverController;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) TPSMiniTipContentManager *miniTipContentManager; // @synthesize miniTipContentManager=_miniTipContentManager;
@property (nonatomic) long long state; // @synthesize state=_state;
@property (readonly) Class superclass;

+ (id)_identifierForContext:(id)arg1;
+ (id)_legacyIdentifierForContext:(id)arg1;
- (void).cxx_destruct;
- (id)_cachedContent;
- (void)_clearCachedContent;
- (void)_clearLegacyCachedContent;
- (void)_contentDidDismiss:(id)arg1;
- (void)_contentDidDisplay:(id)arg1;
- (void)_contentViewWillBeRemoved:(id)arg1;
- (void)_contentViewWillBeShown:(id)arg1;
- (id)_createContentViewWithContent:(id)arg1 asPopover:(BOOL)arg2;
- (void)_deregisterCallbackForDismissalEvents:(id)arg1;
- (BOOL)_isCacheContentValidForBundleID:(id)arg1;
- (void)_registerCallbackForDismissalEvents:(id)arg1;
- (void)_tipContentHintView:(id)arg1 actionTapped:(id)arg2;
- (id)_tipContentHintView:(id)arg1 iconForCustomizationID:(long long)arg2;
- (void)_tipContentHintView:(id)arg1 viewTappedForIdentifier:(id)arg2;
- (void)_tipContentHintViewCloseButtonTapped:(id)arg1;
- (void)_tipContentHintViewContentViewNeedsLayout:(id)arg1 reason:(unsigned long long)arg2;
- (void)_updateCachedContent:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 content:(id)arg2;
- (void)applicationWillEnterForeground;
- (id)attributedStringForContent:(id)arg1 error:(id *)arg2;
- (void)cancelContentDisplayDelay;
- (void)checkForContent;
- (void)checkForContentForBundleID:(id)arg1;
- (id)constellationContentParser:(id)arg1 personalizedStringForID:(unsigned long long)arg2;
- (void)contentDisplayDelay;
- (id)createContentViewControllerWithContent:(id)arg1 sourceViewController:(id)arg2;
- (id)createContentViewWithContent:(id)arg1;
- (void)dataProvider:(id)arg1 didFinishQueryWithResults:(id)arg2;
- (void)dataProvider:(id)arg1 didReceiveCallbackWithResult:(id)arg2;
- (void)dealloc;
- (id)duetEventsFromContextualEvents:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)notifyDelegate:(id)arg1 contentDidBecomeAvailable:(id)arg2 animated:(BOOL)arg3;
- (void)notifyDelegate:(id)arg1 didFinishWithContent:(id)arg2 animated:(BOOL)arg3;
- (void)notifyEventOccurred:(long long)arg1 content:(id)arg2 context:(id)arg3;
- (void)registerCustomContentView:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1 content:(id)arg2;
- (void)showTestContent;
- (void)unregisterEnterForegroundNotification;

@end
