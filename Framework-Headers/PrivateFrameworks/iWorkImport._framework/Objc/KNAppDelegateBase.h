//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSABaseApplicationDelegate.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface KNAppDelegateBase : TSABaseApplicationDelegate
{
    BOOL _cachedBidiIsSupported;
}

@property (readonly, nonatomic) NSArray *powerPointDocumentTypes;

- (BOOL)URLIsValidForImportedHyperlink:(id)arg1 targetDocumentRoot:(id)arg2 forCrossDocumentPaste:(BOOL)arg3;
- (id)appChartPropertyOverrides;
- (void)applicationDidFinishLaunching;
- (id)applicationDisplayName;
- (id)applicationName;
- (id)applicationTemplateVariantsForLocale:(id)arg1;
- (unsigned long long)applicationType;
- (id)bladerunnerContainerIdentifier;
- (id)cloudKitContainerIdentifier;
- (id)cloudKitSyncContainerIdentifier;
- (id)createCompatibilityDelegate;
- (id)defaultHyperlinkURLWithDocumentRoot:(id)arg1;
- (Class)documentRootClass;
- (id)documentTypeDisplayName;
- (id)documentTypeDisplayNameForSharingInvitation;
- (id)equationEditorAPDID;
- (id)importableDocumentTypes;
- (id)init;
- (id)invalidURLSchemes;
- (double)maximumAspectRatioForPreviewImage;
- (double)mimimumAspectRatioForPreviewImage;
- (id)nativeDocumentType;
- (id)nativeSFFDocumentType;
- (void)p_inputMethodsChanged:(id)arg1;
- (id)previewImageNameForEncryptedNativeDocument;
- (id)previewImageNameForNativeDocument;
- (void)registerAllowedElementKinds;
- (void)registerClassTypeMappings;
- (void)registerSOSClassTypeMappings;
- (id)sharedAlertMessageWithUserName:(id)arg1;
- (id)sharedReadOnlyAlertMessageWithUserName:(id)arg1;
- (BOOL)sidebarPositionRespectsUserInterfaceLayoutDirection;
- (id)stringForApplePencilDoubleTapSettingsDescription;
- (id)stringForApplicationUpdateError;
- (id)stringForBoxCollaborationOptInMessage;
- (id)stringForChangePasswordWhileConnectingAlertMessage;
- (id)stringForCloseDocument;
- (id)stringForCloseDocumentConfirmationAlertMessage;
- (id)stringForCloseDocumentConfirmationWillContinueToUpdateInformativeText;
- (id)stringForCollaborationConnecting;
- (id)stringForCollaborationOfflinePlacard;
- (id)stringForCollaborationOnline;
- (id)stringForCollaborator1_6ConflictDetails;
- (id)stringForCollaborator1_6ConflictWithKeepDetails;
- (id)stringForCollaboratorConflict;
- (id)stringForCollaboratorConflictDetails;
- (id)stringForCollaboratorConflictWithKeepDetails;
- (id)stringForCollaboratorsBlockedWhileOffline;
- (id)stringForCouldntCreatePDFTitle;
- (id)stringForDocumentUpdated;
- (id)stringForDocumentUpdatedByOwnerDetails;
- (id)stringForDocumentUpdatedByOwnerWithKeepDetails;
- (id)stringForDocumentUpdatedTitle;
- (id)stringForDocumentViewOnly;
- (id)stringForDocumentViewOnlyMessage;
- (id)stringForDocumentViewOnlyTitle;
- (id)stringForEquationChoiceBody;
- (id)stringForEquationChoiceTitle;
- (id)stringForEquationChoiceUseEQKitButtonTitle;
- (id)stringForGenericServerUnreachable;
- (id)stringForICloudUnreachable;
- (id)stringForLearnMoreSharingURL;
- (id)stringForMoveInlineToFloatingButtonTitle;
- (id)stringForMoveInlineToFloatingButtonToolTip;
- (id)stringForNoItemsSyncingListItem;
- (id)stringForOwnerHasCollabEnabledMessage;
- (id)stringForOwnerHasCollabEnabledTitle;
- (id)stringForOwnerPasswordOnConflictAlertMessage;
- (id)stringForOwnerPasswordOnConflictAlertTitle;
- (id)stringForRemoteVersionRestorationAlertMessage;
- (id)stringForRemoteVersionRestorationWithUnsavedChangesAlertMessage;
- (id)stringForRemoveLastPrivateParticipantAlertConfirmationMessage;
- (id)stringForRemoveSelfAlertConfirmationMessage;
- (id)stringForRemoveSelfAlertConfirmationTitle;
- (id)stringForStopSharingAlertConfirmationMessage;
- (id)stringForStopSharingAlertConfirmationTitle;
- (id)stringForSyncActivityPopoverTitle;
- (id)stringForUpdatingDocumentWithoutServiceType;
- (id)stringForUserActivityTitleForFilename:(id)arg1;
- (BOOL)supportsFreehandAnimationUI;
- (BOOL)supportsPastingIntoGroups;
- (BOOL)supportsRTL;
- (BOOL)supportsShrinkTextToFit;
- (id)tangierEditingFormatDocumentType;
- (id)templateDocumentType;
- (id)templateSFFDocumentType;
- (id)templateTypeDisplayName;
- (id)universalPreviewImageNameForDocumentType:(id)arg1;

@end
