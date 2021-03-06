//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/NSCopying-Protocol.h>
#import <HomeKitBackingStore/NSMutableCopying-Protocol.h>

@class HMFVersion, NSString;

@interface HMBModelField : HMFObject <NSCopying, NSMutableCopying>
{
    BOOL _encrypted;
    BOOL _excludeFromCloudStorage;
    BOOL _optional;
    BOOL _conformsToHMBModelNativeCKWrapper;
    Class _classObj;
    NSString *_externalRecordField;
    unsigned long long _loggingVisibility;
    id _defaultValue;
    HMFVersion *_readonlyVersion;
    HMFVersion *_unavailableVersion;
    CDUnknownBlockType _encodeBlock;
    CDUnknownBlockType _decodeBlock;
    CDUnknownBlockType _descriptionBlock;
}

@property (readonly, nonatomic) Class classObj; // @synthesize classObj=_classObj;
@property (nonatomic) BOOL conformsToHMBModelNativeCKWrapper; // @synthesize conformsToHMBModelNativeCKWrapper=_conformsToHMBModelNativeCKWrapper;
@property (copy, nonatomic) CDUnknownBlockType decodeBlock; // @synthesize decodeBlock=_decodeBlock;
@property (strong, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property (copy, nonatomic) CDUnknownBlockType descriptionBlock; // @synthesize descriptionBlock=_descriptionBlock;
@property (copy, nonatomic) CDUnknownBlockType encodeBlock; // @synthesize encodeBlock=_encodeBlock;
@property (nonatomic) BOOL encrypted; // @synthesize encrypted=_encrypted;
@property (nonatomic) BOOL excludeFromCloudStorage; // @synthesize excludeFromCloudStorage=_excludeFromCloudStorage;
@property (strong, nonatomic) NSString *externalRecordField; // @synthesize externalRecordField=_externalRecordField;
@property (nonatomic) unsigned long long loggingVisibility; // @synthesize loggingVisibility=_loggingVisibility;
@property (nonatomic, getter=isOptional) BOOL optional; // @synthesize optional=_optional;
@property (copy, nonatomic) HMFVersion *readonlyVersion; // @synthesize readonlyVersion=_readonlyVersion;
@property (copy, nonatomic) HMFVersion *unavailableVersion; // @synthesize unavailableVersion=_unavailableVersion;

+ (id)deprecatedField;
+ (id)fieldWithClass:(Class)arg1;
+ (id)fieldWithClass:(Class)arg1 options:(id)arg2;
+ (id)optionalFieldWithClass:(Class)arg1;
+ (id)optionalFieldWithClass:(Class)arg1 options:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)decodeQueryableValue:(id)arg1;
- (id)description;
- (id)descriptionForEncodedQueryableValue:(id)arg1;
- (id)encodeQueryableValue:(id)arg1;
- (id)initWithClass:(Class)arg1;
- (id)initWithClass:(Class)arg1 options:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

