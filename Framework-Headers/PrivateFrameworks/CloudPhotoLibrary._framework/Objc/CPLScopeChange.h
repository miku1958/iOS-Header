//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLRecordChange.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class CPLAccountFlags, CPLEngineScope, CPLLibraryInfo, CPLLibraryState, CPLScopedIdentifier, CPLShare, NSDate, NSString;

@interface CPLScopeChange : CPLRecordChange <NSSecureCoding, NSCopying>
{
    BOOL _activated;
    long long _scopeType;
    CPLShare *_share;
    CPLLibraryState *_libraryState;
    CPLLibraryInfo *_libraryInfo;
    unsigned long long _pullTaskItem;
    CPLEngineScope *_scope;
}

@property (readonly, nonatomic) CPLAccountFlags *accountFlags;
@property (nonatomic, getter=isActivated) BOOL activated; // @synthesize activated=_activated;
@property (readonly, nonatomic) NSDate *deleteDate;
@property (readonly, nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly, nonatomic) NSDate *disabledDate;
@property (copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property (strong, nonatomic) CPLLibraryInfo *libraryInfo; // @synthesize libraryInfo=_libraryInfo;
@property (strong, nonatomic) CPLLibraryState *libraryState; // @synthesize libraryState=_libraryState;
@property (nonatomic) unsigned long long pullTaskItem; // @synthesize pullTaskItem=_pullTaskItem;
@property (copy, nonatomic) NSDate *recordModificationDate; // @dynamic recordModificationDate;
@property (strong, nonatomic) CPLEngineScope *scope; // @synthesize scope=_scope;
@property (nonatomic) long long scopeType; // @synthesize scopeType=_scopeType;
@property (copy, nonatomic) CPLScopedIdentifier *scopedIdentifier; // @dynamic scopedIdentifier;
@property (strong, nonatomic) CPLShare *share; // @synthesize share=_share;

+ (BOOL)cplShouldIgnorePropertyForEquality:(id)arg1;
+ (id)descriptionForScopeType:(long long)arg1;
+ (id)mappingForScopeTypeDescription;
+ (id)newDeleteScopeChangeWithScopeIdentifier:(id)arg1 type:(long long)arg2;
+ (id)newScopeChangeInferClassWithScopeIdentifier:(id)arg1 type:(long long)arg2;
+ (id)newScopeChangeWithScopeIdentifier:(id)arg1 type:(long long)arg2;
+ (Class)scopeChangeClassForType:(long long)arg1;
+ (BOOL)shouldAutoActivateScopeWithType:(long long)arg1;
- (void).cxx_destruct;
- (id)_scopedIdentifier;
- (void)_setChangeType:(unsigned long long)arg1;
- (id)assetCountPerType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)defaultFlags;
- (id)description;
- (id)initWithScopeIdentifier:(id)arg1 type:(long long)arg2;
- (id)redactedDescription;
- (id)scopeIdentifier;
- (void)udpateScopeFromScopeChange:(id)arg1 direction:(unsigned long long)arg2 didHaveChanges:(BOOL *)arg3;

@end

