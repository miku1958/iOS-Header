//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSExtension, NSString;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerDescriptor : NSObject
{
    BOOL _newlyAdded;
    NSExtension *_extension;
}

@property (nonatomic) BOOL enabled;
@property (strong, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property (readonly, strong, nonatomic) NSString *fileProviderDocumentGroup;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (nonatomic, getter=isNewlyAdded) BOOL newlyAdded; // @synthesize newlyAdded=_newlyAdded;
@property (readonly, copy, nonatomic) NSString *nonUIIdentifier;
@property (readonly, copy, nonatomic) NSArray *supportedContentTypes;

+ (void)__updateCloudEnabledStatus;
+ (void)_ubiquityIdentityTokenDidChange:(id)arg1;
+ (void)_updateCloudEnabledStatus;
+ (id)allPickers;
+ (id)allPickersForMode:(unsigned long long)arg1 documentTypes:(id)arg2;
+ (BOOL)cloudEnabledStatus;
+ (BOOL)cloudMigrationStatus;
+ (id)defaultPickerIdentifierForMode:(unsigned long long)arg1 documentTypes:(id)arg2;
+ (id)descriptorWithIdentifier:(id)arg1;
+ (id)enabledPickersForMode:(unsigned long long)arg1 documentTypes:(id)arg2;
+ (id)filteredPickersForPickers:(id)arg1 filter:(unsigned long long)arg2;
+ (CDStruct_6ad76789)hostAuditToken;
+ (id)hostBundleID;
+ (BOOL)isInAddToiCloudDrive;
+ (id)manageablePickersForMode:(unsigned long long)arg1 documentTypes:(id)arg2;
+ (id)pickerOrder;
+ (void)setHostAuditToken:(CDStruct_6ad76789)arg1;
+ (void)setHostBundleID:(id)arg1;
+ (void)setOrderFromPickers:(id)arg1;
+ (void)setSourceIsManaged:(BOOL)arg1;
+ (BOOL)sourceIsManaged;
- (void).cxx_destruct;
- (id)_extensionValueOfClass:(Class)arg1 forKey:(id)arg2;
- (id)_ownBundle;
- (id)_parentApp;
- (long long)compare:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)imageWithScale:(double)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)nonUIBundle;
- (BOOL)pickerEnabledForMode:(unsigned long long)arg1 documentTypes:(id)arg2 reason:(id *)arg3;
- (BOOL)supportsPickerMode:(unsigned long long)arg1;

@end
