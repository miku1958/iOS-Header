//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TipsDaemon/TPSWidgetControllerDelegate-Protocol.h>

@class NSArray, NSBundle, NSDictionary, NSMutableArray, NSString, TPSExperiment, TPSMetadata, TPSNotificationController, TPSTipStatusController, TPSWidgetController;
@protocol OS_dispatch_queue, TPSTipsManagerDelegate;

@interface TPSTipsManager : NSObject <TPSWidgetControllerDelegate>
{
    BOOL _contextualTipsInactive;
    id<TPSTipsManagerDelegate> _delegate;
    TPSExperiment *_experiment;
    NSString *_rulesVersion;
    TPSNotificationController *_notificationController;
    TPSTipStatusController *_tipStatusController;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSMutableArray *_sessionItems;
    TPSMetadata *_metadata;
    NSArray *_collections;
    NSArray *_tips;
    NSDictionary *_collectionsMap;
    NSDictionary *_tipsMap;
    NSBundle *_frameworkBundle;
    TPSWidgetController *_widgetController;
}

@property (strong, nonatomic) NSArray *collections; // @synthesize collections=_collections;
@property (strong, nonatomic) NSDictionary *collectionsMap; // @synthesize collectionsMap=_collectionsMap;
@property (nonatomic) BOOL contextualTipsInactive; // @synthesize contextualTipsInactive=_contextualTipsInactive;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<TPSTipsManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) TPSExperiment *experiment; // @synthesize experiment=_experiment;
@property (strong, nonatomic) NSBundle *frameworkBundle; // @synthesize frameworkBundle=_frameworkBundle;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) TPSMetadata *metadata; // @synthesize metadata=_metadata;
@property (strong, nonatomic) TPSNotificationController *notificationController; // @synthesize notificationController=_notificationController;
@property (copy, nonatomic) NSString *rulesVersion; // @synthesize rulesVersion=_rulesVersion;
@property (strong, nonatomic) NSMutableArray *sessionItems; // @synthesize sessionItems=_sessionItems;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property (strong, nonatomic) TPSTipStatusController *tipStatusController; // @synthesize tipStatusController=_tipStatusController;
@property (strong, nonatomic) NSArray *tips; // @synthesize tips=_tips;
@property (strong, nonatomic) NSDictionary *tipsMap; // @synthesize tipsMap=_tipsMap;
@property (strong, nonatomic) TPSWidgetController *widgetController; // @synthesize widgetController=_widgetController;

+ (BOOL)eligibleForHardwareWelcomeNotification;
+ (id)immediateNotificationIdentifierForType:(unsigned long long)arg1;
+ (BOOL)needImmediateNotificationForType:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)_frameworkBundle;
- (id)_localContentFormattedData;
- (id)_localContentURL;
- (id)_localContentURLForIdentifier:(id)arg1;
- (id)_localFormattedDataForURL:(id)arg1;
- (id)_localMetaFormattedData;
- (id)_localMetaURL;
- (BOOL)_shouldProcessLocalContent;
- (void)_updateExperimentCache;
- (void)_updatePauseStatus:(BOOL)arg1;
- (void)clearWelcomeDoumentCacheWithMajorVersion:(id)arg1;
- (void)contentForIdentifier:(id)arg1 variantIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)contentFromOrigin:(BOOL)arg1 contextualEligibility:(BOOL)arg2 widgetEligibility:(BOOL)arg3 notificationEligibility:(BOOL)arg4 preferredNotificationIdentifier:(id)arg5 shouldDeferBlock:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)finalEligibleContentWithCollections:(id)arg1 collectionsMap:(id)arg2 collectionDeliveryInfoMap:(id)arg3 eligibleTipIdentifiers:(id)arg4 eligibleContextualTipIdentifiers:(id)arg5 allFullTipsMap:(id)arg6 allMiniTipsMap:(id)arg7 tipDeliveryInfoMap:(id)arg8 deliveryInfoMap:(id)arg9 completionHandler:(CDUnknownBlockType)arg10;
- (BOOL)hasWidgetTip;
- (id)initWithTipStatusController:(id)arg1;
- (BOOL)isHoldoutCamp;
- (BOOL)isPreconditionValidForIdentifier:(id)arg1 preconditionDictionary:(id)arg2;
- (id)localizedStringForKey:(id)arg1 localizedStringsFileName:(id)arg2;
- (void)processCollectionsMap:(id)arg1 collectionRootId:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)processTipContentsFeedFromOrigin:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)processTipContentsFeedFromURLRequest:(id)arg1 attributionIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)processTips:(id)arg1 deliveryInfoMap:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateContentIfOverrideImmediately:(BOOL)arg1;
- (id)welcomeDocumentFromContentPackage:(id)arg1;
- (BOOL)widgetController:(id)arg1 validForTip:(id)arg2 tipDeliveryInfoMap:(id)arg3 deliveryInfoMap:(id)arg4;

@end
