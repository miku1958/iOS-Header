//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocs/NSCopying-Protocol.h>
#import <CloudDocs/NSSecureCoding-Protocol.h>

@class NSString;

@interface BRMangledID : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_mangledIDString;
}

@property (readonly, nonatomic) NSString *aliasTargetContainerString;
@property (readonly, nonatomic) NSString *appLibraryOrZoneName;
@property (readonly, nonatomic) BOOL isCloudDocsMangledID;
@property (readonly, nonatomic) BOOL isDesktopMangledID;
@property (readonly, nonatomic) BOOL isDocumentsMangledID;
@property (readonly, nonatomic) BOOL isPassbookMangledID;
@property (readonly, nonatomic) BOOL isPrivate;
@property (readonly, nonatomic) BOOL isShared;
@property (readonly, nonatomic) NSString *mangledIDString; // @synthesize mangledIDString=_mangledIDString;
@property (readonly, nonatomic) NSString *ownerName;

+ (id)_containerIDFromSharedContainerID:(id)arg1 validate:(BOOL)arg2;
+ (id)_containerIDFromSharedMangledIDString:(id)arg1 validate:(BOOL)arg2;
+ (id)_mangledIDStringFromZoneName:(id)arg1 ownerName:(id)arg2 validate:(BOOL)arg3;
+ (id)_ownerNameFromSharedMangledIDString:(id)arg1 validate:(BOOL)arg2;
+ (id)_privateMangledContainerID:(id)arg1 validate:(BOOL)arg2;
+ (id)_privateUnmangledContainerID:(id)arg1 validate:(BOOL)arg2;
+ (id)_sharedMangledIDStringWithContainerID:(id)arg1 ownerName:(id)arg2 validate:(BOOL)arg3;
+ (id)cloudDocsMangledID;
+ (id)desktopMangledID;
+ (id)documentsMangledID;
+ (id)sideCarMangledID;
+ (BOOL)supportsSecureCoding;
+ (BOOL)validateContainerID:(id)arg1;
+ (BOOL)validateMangledIDString:(id)arg1;
+ (BOOL)validateOwnerName:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAliasTargetContainerString:(id)arg1;
- (id)initWithAppLibraryName:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMangledString:(id)arg1;
- (id)initWithRecordZoneID:(id)arg1;
- (id)initWithZoneName:(id)arg1 ownerName:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToMangledID:(id)arg1;

@end
