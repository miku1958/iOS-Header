//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileCoreServices/_UTConcreteType.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSObject, NSString, NSURL, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UTDeclaredType : _UTConcreteType
{
    NSObject<OS_dispatch_queue> *_additionalInfoQueue;
    unsigned int _flags;
    NSUUID *_uuid;
    NSNumber *_version;
    NSString *_unlocalizedDescription;
    NSString *_localizedDescription;
    NSDictionary *_localizedDescriptionDictionary;
    NSData *_declaringBundleBookmark;
    NSString *_declaringBundleDelegate;
    NSURL *_declaringBundleURL;
    NSString *_kextName;
    NSDictionary *_tagSpecification;
    NSArray *_conformsTo;
    NSArray *_iconFiles;
    NSURL *_parentIconURL;
    NSString *_referenceURLString;
}

+ (BOOL)supportsSecureCoding;
- (id)_iconURL;
- (BOOL)_isActive;
- (BOOL)_isAppleInternal;
- (BOOL)_isPublic;
- (id)_kernelExtensionName;
- (id)_localizedDescriptionDictionary;
- (id)_localizedDescriptionWithPreferredLocalizations:(id)arg1;
- (id)_unlocalizedDescription;
- (void)dealloc;
- (id)declaration;
- (id)declaringBundleURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContext:(struct LSContext *)arg1 UTTypeID:(unsigned int)arg2 UTTypeData:(const CDStruct_b227e4e8 *)arg3;
- (BOOL)isDeclared;
- (BOOL)needsWorkaroundFor22092605;
- (id)parentIdentifiers;
- (id)referenceURL;
- (id)tagSpecification;
- (BOOL)validateCollectionTypes;
- (id)version;

@end

