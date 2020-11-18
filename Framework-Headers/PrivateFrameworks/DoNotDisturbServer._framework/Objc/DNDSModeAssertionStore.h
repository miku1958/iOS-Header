//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSBackingStoreRecord-Protocol.h>
#import <DoNotDisturbServer/NSCopying-Protocol.h>
#import <DoNotDisturbServer/NSMutableCopying-Protocol.h>

@class NSArray, NSString;

@interface DNDSModeAssertionStore : NSObject <DNDSBackingStoreRecord, NSCopying, NSMutableCopying>
{
    NSArray *_assertions;
    NSArray *_invalidations;
    NSArray *_invalidationRequests;
}

@property (readonly, copy, nonatomic) NSArray *assertions; // @synthesize assertions=_assertions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSArray *invalidationRequests; // @synthesize invalidationRequests=_invalidationRequests;
@property (readonly, copy, nonatomic) NSArray *invalidations; // @synthesize invalidations=_invalidations;
@property (readonly) Class superclass;

+ (id)messageDateForPeaceSyncDictionaryRepresentation:(id)arg1;
+ (id)messageDateForSyncDictionaryRepresentation:(id)arg1;
+ (id)newWithDictionaryRepresentation:(id)arg1;
+ (id)newWithPeaceSyncDictionaryRepresentation:(id)arg1;
+ (id)newWithSyncDictionaryRepresentation:(id)arg1;
+ (id)upgradeDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3;
- (void).cxx_destruct;
- (id)_initWithStore:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)lastUpdateDate;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)peaceSyncDictionaryRepresentationWithDate:(id)arg1 messageUUID:(id)arg2 userRequestedClientIdentifierHandler:(CDUnknownBlockType)arg3;
- (id)syncDictionaryRepresentationWithDate:(id)arg1 messageUUID:(id)arg2;
- (id)sysdiagnoseDictionaryRepresentation;

@end
