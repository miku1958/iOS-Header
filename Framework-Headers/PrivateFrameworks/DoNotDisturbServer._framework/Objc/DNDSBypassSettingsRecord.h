//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSBackingStoreRecord-Protocol.h>
#import <DoNotDisturbServer/NSCopying-Protocol.h>
#import <DoNotDisturbServer/NSMutableCopying-Protocol.h>

@class NSNumber, NSString;

@interface DNDSBypassSettingsRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>
{
    NSNumber *_immediateBypassEventSourceType;
    NSString *_immediateBypassCNGroupIdentifier;
    NSNumber *_repeatEventSourceBehaviorEnabledSetting;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *immediateBypassCNGroupIdentifier; // @synthesize immediateBypassCNGroupIdentifier=_immediateBypassCNGroupIdentifier;
@property (readonly, copy, nonatomic) NSNumber *immediateBypassEventSourceType; // @synthesize immediateBypassEventSourceType=_immediateBypassEventSourceType;
@property (readonly, copy, nonatomic) NSNumber *repeatEventSourceBehaviorEnabledSetting; // @synthesize repeatEventSourceBehaviorEnabledSetting=_repeatEventSourceBehaviorEnabledSetting;
@property (readonly) Class superclass;

+ (id)_recordWithEncodedInfo:(id)arg1 error:(id *)arg2;
+ (id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3;
+ (id)newWithDictionaryRepresentation:(id)arg1;
+ (id)recordForLegacyPrivilegedSenderType:(unsigned long long)arg1 legacyAddressBookID:(int)arg2;
- (void).cxx_destruct;
- (id)_initWithImmediateBypassEventSourceType:(id)arg1 immediateBypassCNGroupIdentifier:(id)arg2 repeatEventSourceBehaviorEnabledSetting:(id)arg3;
- (id)_initWithRecord:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)legacyPrivilegedSenderType;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

