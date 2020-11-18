//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSApplication/TSAApplicationPropertiesProvider.h>

@class NSArray;

@interface KNAppPropertiesProvider : TSAApplicationPropertiesProvider
{
}

@property (readonly, nonatomic) NSArray *powerPointDocumentTypes;

- (id)applicationDisplayName;
- (id)applicationName;
- (unsigned long long)applicationType;
- (id)bladerunnerContainerIdentifier;
- (id)cloudKitContainerIdentifier;
- (id)cloudKitSyncContainerIdentifier;
- (id)documentTypeDisplayName;
- (id)documentTypeDisplayNameForSharingInvitation;
- (id)importableDocumentTypes;
- (id)nativeDocumentType;
- (id)nativeSFFDocumentType;
- (id)tangierEditingFormatDocumentType;
- (id)templateDocumentType;
- (id)templateSFFDocumentType;
- (id)templateTypeDisplayName;
- (unsigned long long)webVideoRequiredDocumentWriteVersion;

@end
