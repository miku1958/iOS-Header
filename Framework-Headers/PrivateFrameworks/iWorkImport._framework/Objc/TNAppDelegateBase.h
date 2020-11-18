//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSABaseApplicationDelegate.h>

@class NSArray, TSUColor;

__attribute__((visibility("hidden")))
@interface TNAppDelegateBase : TSABaseApplicationDelegate
{
    TSUColor *_numbersKeyColor;
}

@property (readonly, copy, nonatomic) NSArray *excelDocumentTypes;
@property (readonly, copy, nonatomic) TSUColor *numbersKeyColor; // @synthesize numbersKeyColor=_numbersKeyColor;

- (void).cxx_destruct;
- (id)appChartPropertyOverrides;
- (void)applicationDidFinishLaunching:(id)arg1;
- (id)applicationDisplayName;
- (id)applicationName;
- (id)applicationTemplateVariantsForLocale:(struct __CFLocale *)arg1;
- (unsigned long long)applicationType;
- (id)bladerunnerContainerIdentifier;
- (id)cloudKitContainerIdentifier;
- (void)configureSharedCode;
- (id)createCompatibilityDelegate;
- (Class)documentRootClass;
- (id)documentTypeDisplayName;
- (id)documentTypeDisplayNameForSharingInvitation;
- (Class)documentViewControllerClass;
- (id)importableDocumentTypes;
- (id)init;
- (id)nativeDocumentType;
- (id)nativeSFFDocumentType;
- (void)p_inputMethodsChanged:(id)arg1;
- (id)previewImageNameForEncryptedNativeDocument;
- (id)previewImageNameForNativeDocument;
- (void)registerClassTypeMappings;
- (void)registerSOSClassTypeMappings;
- (id)sharedAlertMessageWithUserName:(id)arg1;
- (id)sharedReadOnlyAlertMessageWithUserName:(id)arg1;
- (id)stringForApplicationUpdateError;
- (id)stringForBoxCollaborationOptInMessage;
- (id)stringForCloseDocument;
- (id)stringForCloseDocumentConfirmationAlertMessage;
- (id)stringForCloseDocumentConfirmationWillContinueToUpdateInformativeText;
- (id)stringForCollaborationConnecting;
- (id)stringForCollaborationOffline;
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
- (id)stringForGenericServerUnreachable;
- (id)stringForICloudUnreachable;
- (id)stringForLearnMoreSharingURL;
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
- (id)stringForUpdatingDocumentWithoutServiceType;
- (BOOL)supportsRTL;
- (id)tangierEditingFormatDocumentType;
- (id)templateDocumentType;
- (id)templateSFFDocumentType;
- (id)templateTypeDisplayName;
- (id)universalPreviewImageNameForDocumentType:(id)arg1;

@end
