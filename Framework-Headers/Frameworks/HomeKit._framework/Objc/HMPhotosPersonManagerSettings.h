//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFObject-Protocol.h>
#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSMutableCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface HMPhotosPersonManagerSettings : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>
{
    BOOL _importingFromPhotoLibraryEnabled;
    BOOL _sharingFaceClassificationsEnabled;
}

@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (getter=isImportingFromPhotoLibraryEnabled) BOOL importingFromPhotoLibraryEnabled; // @synthesize importingFromPhotoLibraryEnabled=_importingFromPhotoLibraryEnabled;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, getter=isSharingFaceClassificationsAllowed) BOOL sharingFaceClassificationsAllowed;
@property (getter=isSharingFaceClassificationsEnabled) BOOL sharingFaceClassificationsEnabled; // @synthesize sharingFaceClassificationsEnabled=_sharingFaceClassificationsEnabled;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)shortDescription;
+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

