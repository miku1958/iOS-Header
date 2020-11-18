//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainer, CKDatabase, CKOperationGroup, HDProfile, NSString, NSUUID;

@interface HDCloudSyncOperationConfiguration : NSObject
{
    CKContainer *_container;
    CKDatabase *_privateDatabase;
    CKOperationGroup *_operationGroup;
    NSString *_syncContainerPrefix;
    NSString *_ownerIdentifier;
    HDProfile *_profile;
    unsigned long long _options;
    long long _reason;
    NSUUID *_syncIdentifier;
}

@property (readonly, nonatomic) CKContainer *container; // @synthesize container=_container;
@property (readonly, nonatomic) CKOperationGroup *operationGroup; // @synthesize operationGroup=_operationGroup;
@property (readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property (readonly, copy, nonatomic) NSString *ownerIdentifier; // @synthesize ownerIdentifier=_ownerIdentifier;
@property (readonly, nonatomic) CKDatabase *privateDatabase; // @synthesize privateDatabase=_privateDatabase;
@property (readonly, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property (readonly, nonatomic) long long reason; // @synthesize reason=_reason;
@property (readonly, copy, nonatomic) NSString *syncContainerPrefix; // @synthesize syncContainerPrefix=_syncContainerPrefix;
@property (readonly, nonatomic) NSUUID *syncIdentifier; // @synthesize syncIdentifier=_syncIdentifier;

- (void).cxx_destruct;
- (id)initWithCKContainer:(id)arg1 operationGroup:(id)arg2 syncContainerPrefix:(id)arg3 ownerIdentifier:(id)arg4 profile:(id)arg5 options:(unsigned long long)arg6 reason:(long long)arg7 syncIdentifier:(id)arg8;

@end

