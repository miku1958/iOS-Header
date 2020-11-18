//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSKApplicationDelegate-Protocol.h>

@class NSArray, NSData, NSDate, NSString;
@protocol TSKCompatibilityDelegate;

__attribute__((visibility("hidden")))
@interface TSKApplicationDelegate : NSObject <TSKApplicationDelegate>
{
    id<TSKCompatibilityDelegate> _compatibilityDelegate;
    NSArray *_availableLanguages;
    NSString *_initialInputLanguage;
}

@property (readonly, getter=isActivating) BOOL activating;
@property (readonly, copy, nonatomic) id appTextDefaults;
@property (readonly, nonatomic) NSString *applicationDisplayName;
@property (readonly, nonatomic) NSDate *applicationLaunchTime;
@property (readonly, nonatomic) NSString *applicationName;
@property (readonly, nonatomic) unsigned long long applicationType;
@property (readonly, nonatomic) NSArray *availableLanguages; // @synthesize availableLanguages=_availableLanguages;
@property (readonly, nonatomic) NSString *bladerunnerContainerIdentifier;
@property (readonly, nonatomic) NSString *cloudKitContainerIdentifier;
@property (strong, nonatomic) id<TSKCompatibilityDelegate> compatibilityDelegate; // @synthesize compatibilityDelegate=_compatibilityDelegate;
@property (readonly, nonatomic) BOOL designModeEnabled;
@property (readonly, nonatomic) NSString *documentTypeDisplayName;
@property (readonly, nonatomic) NSString *documentTypeDisplayNameForSharingInvitation;
@property (nonatomic) unsigned long long iWorkAuthorColorIndex;
@property (copy, nonatomic) NSString *iWorkAuthorName;
@property (copy, nonatomic) NSString *iWorkAuthorPrivateID; // @dynamic iWorkAuthorPrivateID;
@property (readonly, copy, nonatomic) NSData *iWorkTextDefaultsPassphraseVerifier;
@property (readonly, nonatomic) BOOL imageGalleryCaptionsUsePlaceholderText;
@property (readonly, getter=isInBackground) BOOL inBackground;
@property (readonly, nonatomic) NSString *initialInputLanguage; // @synthesize initialInputLanguage=_initialInputLanguage;
@property (readonly, nonatomic) BOOL isCanvasFullScreen;
@property (readonly, nonatomic) BOOL performanceModeEnabled;
@property (readonly, nonatomic) BOOL supportsCanvasNativeEquationObjects;
@property (readonly, nonatomic) BOOL supportsInlineNativeEquationObjects;
@property (readonly, nonatomic) BOOL supportsLinkedTextBoxes;
@property (readonly, nonatomic) BOOL supportsPastingIntoGroups;
@property (readonly, nonatomic) BOOL tableCellInspectorShowsNaturalAlignment;
@property (readonly, nonatomic) BOOL tableHeaderInspectorShowsFreezeHeaderColumnsSwitch;
@property (readonly, nonatomic) BOOL tableHeaderInspectorShowsFreezeHeaderRowsSwitch;
@property (readonly, nonatomic) BOOL tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
@property (readonly, nonatomic) NSString *templateTypeDisplayName;
@property (readonly, nonatomic) BOOL textInspectorShowsMoreSubpane;

+ (id)documentDirectoryPath;
+ (id)platform_sharedDelegate;
+ (void)setDelegate:(id)arg1;
+ (id)sharedDelegate;
- (void).cxx_destruct;
- (id)appChartPropertyOverrides;
- (id)applicationNameForTitleBar;
- (struct CGRect)applicationToolbarFrame;
- (void)collectAppLaunchAnalyticsWithLogger:(id)arg1;
- (void)collectDocumentCreationAnalyticsWithLogger:(id)arg1;
- (id)createCompatibilityDelegate;
- (void)customizeHyperlinkViewController:(id)arg1;
- (void)dealloc;
- (id)defaultHyperlinkURL;
- (Class)drawableInfoSubclassForClass:(Class)arg1 unarchiver:(id)arg2;
- (id)init;
- (id)invalidURLSchemes;
- (void)logAppLaunchAnalytics;
- (void)logDocumentCreationWithImportState:(BOOL)arg1;
- (BOOL)openURL:(id)arg1;
- (BOOL)openURL:(id)arg1 withDocumentRoot:(id)arg2;
- (id)previewImageForType:(id)arg1;
- (void)setAppTextDefaults:(id)arg1 passphraseVerifier:(id)arg2;
- (BOOL)shouldRenderContactShadow;
- (BOOL)shouldRenderCurvedShadow;
- (BOOL)shouldRenderLargeImages;
- (BOOL)shouldValidateMasterLayoutWhileInsertingRows;
- (BOOL)sidebarPositionRespectsUserInterfaceLayoutDirection;
- (BOOL)supportsAutosizingTextboxes;
- (BOOL)supportsRTL;
- (BOOL)supportsShrinkTextToFit;

@end
