//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDSyncAnchorMap-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>
#import <HealthDaemon/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSString;

@interface HDSyncAnchorMap : NSObject <HDSyncAnchorMap, NSSecureCoding, NSCopying>
{
    NSMutableDictionary *_anchorsByEntityIdentifier;
}

@property (strong, nonatomic) NSMutableDictionary *anchorsByEntityIdentifier; // @synthesize anchorsByEntityIdentifier=_anchorsByEntityIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)anchorMapWithAnchorMap:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)syncAnchorMapWithSyncAnchorRangeMap:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)anchorCount;
- (long long)anchorForSyncEntityClass:(Class)arg1;
- (long long)anchorForSyncEntityIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateAnchorsAndEntityIdentifiersWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAllZero;
- (BOOL)isEqual:(id)arg1;
- (void)setAnchor:(long long)arg1 forSyncEntity:(Class)arg2;
- (void)setAnchor:(long long)arg1 forSyncEntityIdentifier:(id)arg2;
- (void)setAnchorsFromMap:(id)arg1;

@end

