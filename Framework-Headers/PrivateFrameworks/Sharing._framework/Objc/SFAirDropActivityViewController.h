//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Sharing/SFAirDropBrowserDelegate-Protocol.h>
#import <Sharing/SFCollectionViewDelegateLayout-Protocol.h>
#import <Sharing/SFPersonCollectionViewCellDelegate-Protocol.h>
#import <Sharing/SFWirelessSettingsControllerDelegate-Protocol.h>
#import <Sharing/UICollectionViewDataSource-Protocol.h>

@class ALAssetsLibrary, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSOperationQueue, NSString, SFAirDropActiveIconView, SFAirDropBrowser, SFAirDropIconView, SFCollectionViewLayout, SFPersonCollectionViewCell, SFWirelessSettingsController, UICollectionView, UILabel;
@protocol SFAirDropActivityViewControllerDelegate;

@interface SFAirDropActivityViewController : UIViewController <UICollectionViewDataSource, SFCollectionViewDelegateLayout, SFAirDropBrowserDelegate, SFPersonCollectionViewCellDelegate, SFWirelessSettingsControllerDelegate>
{
    long long _attachmentCount;
    NSString *_sessionID;
    long long _sharedItemsRequestID;
    UILabel *_titleLabel;
    SFAirDropIconView *_airDropIconView;
    NSLayoutConstraint *_airDropIconLeftConstraint;
    UILabel *_noWifiLabel;
    NSLayoutConstraint *_noWifiRightConstraint;
    SFAirDropActiveIconView *_airDropActiveIconView;
    NSLayoutConstraint *_airDropActiveIconLeftConstraint;
    UILabel *_instructionsLabel;
    NSLayoutConstraint *_instructionsRightConstraint;
    SFAirDropActiveIconView *_airDropInactiveIconView;
    NSLayoutConstraint *_airDropInactiveIconLeftConstraint;
    UILabel *_noAWDLLabel;
    NSLayoutConstraint *_noAWDLRightConstraint;
    UICollectionView *_collectionView;
    SFCollectionViewLayout *_collectionViewLayout;
    SFPersonCollectionViewCell *_prototypeActivityCell;
    SFAirDropBrowser *_browser;
    id _progressToken;
    NSMutableDictionary *_personToProgress;
    NSMutableDictionary *_personToStoredTransferFinalState;
    NSMutableDictionary *_personToSharedItemsRequestID;
    NSMutableDictionary *_sharedItemsRequestIDToPreviewPhoto;
    SFWirelessSettingsController *_wirelessSettings;
    NSMutableSet *_cachedSharedItems;
    BOOL _itemsRequested;
    BOOL _itemsReady;
    NSOperationQueue *_operationQueue;
    NSMutableArray *_objectChanges;
    ALAssetsLibrary *_assetsLibrary;
    long long _generatedPreviews;
    BOOL _sharedItemsAvailable;
    BOOL _otherActivityViewPresented;
    BOOL _darkStyleOnLegacyApp;
    NSObject<SFAirDropActivityViewControllerDelegate> *_delegate;
    NSString *_overriddenTitleText;
    NSString *_overriddenNoWiFIBTText;
    NSString *_overriddenNoAWDLText;
    NSString *_overriddenInstructionsText;
}

@property (nonatomic) BOOL darkStyleOnLegacyApp; // @synthesize darkStyleOnLegacyApp=_darkStyleOnLegacyApp;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFAirDropActivityViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL otherActivityViewPresented; // @synthesize otherActivityViewPresented=_otherActivityViewPresented;
@property (copy, nonatomic) NSString *overriddenInstructionsText; // @synthesize overriddenInstructionsText=_overriddenInstructionsText;
@property (copy, nonatomic) NSString *overriddenNoAWDLText; // @synthesize overriddenNoAWDLText=_overriddenNoAWDLText;
@property (copy, nonatomic) NSString *overriddenNoWiFIBTText; // @synthesize overriddenNoWiFIBTText=_overriddenNoWiFIBTText;
@property (copy, nonatomic) NSString *overriddenTitleText; // @synthesize overriddenTitleText=_overriddenTitleText;
@property (nonatomic) BOOL sharedItemsAvailable; // @synthesize sharedItemsAvailable=_sharedItemsAvailable;
@property (readonly, nonatomic) struct CGSize suggestedThumbnailSize;
@property (readonly) Class superclass;

+ (BOOL)airDropActivityCanPerformActivityWithItems:(id)arg1;
+ (id)classesForItem:(id)arg1;
+ (BOOL)isAirDropAvailable;
- (void).cxx_destruct;
- (BOOL)addAttributedString:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4;
- (BOOL)addData:(id)arg1 ofType:(id)arg2 withAttachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5;
- (BOOL)addImage:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4;
- (BOOL)addString:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4;
- (BOOL)addURL:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4;
- (id)attributedStringWithTitle:(id)arg1 content:(id)arg2;
- (void)browser:(id)arg1 didDeletePersonAtIndex:(unsigned long long)arg2;
- (void)browser:(id)arg1 didInsertPersonAtIndex:(unsigned long long)arg2;
- (void)browserDidChangePeople:(id)arg1;
- (void)browserWillChangePeople:(id)arg1;
- (id)cellForPerson:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 preferredSizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (BOOL)createURLPayloadForData:(id)arg1 ofType:(id)arg2 withAttachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)dealloc;
- (void)didEnterBackground:(id)arg1;
- (void)enableAirDropRequiredFeatures;
- (void)generateSpecialPreviewPhotoForRequestID:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)instructionsText;
- (BOOL)isBluetoothEnabled;
- (BOOL)isTetheredModeEnabled;
- (BOOL)isValidPayload:(id)arg1 toPerson:(id)arg2 invalidMessage:(id *)arg3;
- (BOOL)isWifiEnabled;
- (id)noAWDLText;
- (id)noWiFiBTText;
- (void)personCollectionViewCellDidFinishTransfer:(id)arg1;
- (void)personCollectionViewCellDidStartTransfer:(id)arg1;
- (void)personCollectionViewCellDidTerminateTransfer:(id)arg1;
- (void)setNeedsRequestingSharedItems;
- (void)startBrowsing;
- (void)startTransferForPeople:(id)arg1;
- (void)stopBrowsing;
- (void)subscribeToProgresses;
- (void)subscribedProgress:(id)arg1 forPersonWithRealName:(id)arg2;
- (id)titleText;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)unpublishedProgressForPersonWithRealName:(id)arg1;
- (void)unsubscribeToProgresses;
- (void)updateContentAreaAnimated:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (id)wifiBtHelpTextLocalizedStringKey;
- (void)willEnterForeground:(id)arg1;
- (void)wirelessSettingsDidChange:(id)arg1;

@end

