//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumberFormatter, NSString, PXImportController, UIAction, UIMenu, UIViewController;
@protocol PUImportActionCoordinatorDelegate;

@interface PUImportActionCoordinator : NSObject
{
    BOOL _presentsAdditionalDeleteAllConfirmation;
    BOOL _ppt_alwaysImportDuplicatesNoPrompt;
    id<PUImportActionCoordinatorDelegate> _delegate;
    long long _loggingSource;
    UIViewController *_viewController;
    PXImportController *_importController;
    NSString *_loggingPrefix;
    UIAction *_importAllAction;
    UIMenu *_importActionsMenu;
    NSNumberFormatter *_percentageNumberFormatter;
}

@property (weak, nonatomic) id<PUImportActionCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) UIMenu *importActionsMenu; // @synthesize importActionsMenu=_importActionsMenu;
@property (strong, nonatomic) UIAction *importAllAction; // @synthesize importAllAction=_importAllAction;
@property (strong, nonatomic) PXImportController *importController; // @synthesize importController=_importController;
@property (strong, nonatomic) NSString *loggingPrefix; // @synthesize loggingPrefix=_loggingPrefix;
@property (readonly, nonatomic) long long loggingSource; // @synthesize loggingSource=_loggingSource;
@property (strong, nonatomic) NSNumberFormatter *percentageNumberFormatter; // @synthesize percentageNumberFormatter=_percentageNumberFormatter;
@property (nonatomic) BOOL ppt_alwaysImportDuplicatesNoPrompt; // @synthesize ppt_alwaysImportDuplicatesNoPrompt=_ppt_alwaysImportDuplicatesNoPrompt;
@property (nonatomic) BOOL presentsAdditionalDeleteAllConfirmation; // @synthesize presentsAdditionalDeleteAllConfirmation=_presentsAdditionalDeleteAllConfirmation;
@property (weak, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;

+ (id)deleteAllConfirmationMessageForItems:(id)arg1 importSource:(id)arg2;
+ (long long)importBehaviorForBatteryState:(long long)arg1 batteryLevel:(float)arg2;
+ (float)lowBatteryLevelThresholdForDevice;
+ (void)retrieveBatteryState:(long long *)arg1 batteryLevel:(float *)arg2;
- (void).cxx_destruct;
- (void)_commitImportingItems:(id)arg1;
- (void)_deleteItems:(id)arg1;
- (void)_importItems:(id)arg1 allowDuplicates:(BOOL)arg2;
- (id)actionMenuForImportButton;
- (void)checkBatteryLevelWithCompletion:(CDUnknownBlockType)arg1;
- (void)configureImportActionsForBarButtonItem:(id)arg1;
- (void)deleteItemsFromBarButtonItem:(id)arg1;
- (void)deleteItemsFromBarButtonItem:(id)arg1 withOneUpHintItems:(id)arg2;
- (void)deleteItemsWithoutConfirmation:(id)arg1;
- (void)importAllFromBarButtonItem;
- (id)initWithViewController:(id)arg1 importController:(id)arg2 loggingSource:(long long)arg3;
- (void)notifyDelegateOfImportCancellation;
- (void)ppt_beginImportFromBarButtonItem;
- (BOOL)someItemsButNotAllAreSelected;
- (void)stopImport;

@end

