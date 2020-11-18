//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIApplicationExtensionActivity.h>

#import <UIKit/UIManagedConfigurationRestrictableActivity-Protocol.h>

@class NSString, SLComposeViewController;

@interface UISocialActivity : UIApplicationExtensionActivity <UIManagedConfigurationRestrictableActivity>
{
    BOOL _sourceIsManaged;
    NSString *_sourceApplicationBundleID;
    NSString *_builtinActivityType;
    SLComposeViewController *_socialComposeViewController;
}

@property (copy, nonatomic) NSString *builtinActivityType; // @synthesize builtinActivityType=_builtinActivityType;
@property (strong, nonatomic) SLComposeViewController *socialComposeViewController; // @synthesize socialComposeViewController=_socialComposeViewController;
@property (copy, nonatomic) NSString *sourceApplicationBundleID; // @synthesize sourceApplicationBundleID=_sourceApplicationBundleID;
@property (nonatomic) BOOL sourceIsManaged; // @synthesize sourceIsManaged=_sourceIsManaged;

+ (id)_activityExtensionItemsForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2;
+ (long long)activityCategory;
- (void).cxx_destruct;
- (BOOL)_canBeExcludeWhenMatchingWithContext:(id)arg1;
- (void)_cleanup;
- (BOOL)_dismissActivityFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_prepareComposeViewController:(id)arg1 withActivityExtensionItems:(id)arg2;
- (void)_prepareComposeViewController:(id)arg1 withInjectedExtensionItems:(id)arg2;
- (BOOL)_presentActivityOnViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGSize)_thumbnailSize;
- (BOOL)_wantsAttachmentURLItemData;
- (BOOL)_wantsThumbnailItemData;
- (id)activityType;
- (id)activityViewController;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)debugDescription;
- (id)initWithActivityType:(id)arg1;
- (id)initWithApplicationExtension:(id)arg1;
- (void)prepareWithActivityExtensionItemData:(id)arg1;

@end
