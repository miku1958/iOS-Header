//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sleep/BSDescriptionProviding-Protocol.h>
#import <Sleep/NSCopying-Protocol.h>
#import <Sleep/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;

@interface HKSPChangeSet : NSObject <NSSecureCoding, NSCopying, BSDescriptionProviding>
{
    NSMutableDictionary *_changeDictionary;
}

@property (readonly, nonatomic) NSMutableDictionary *changeDictionary; // @synthesize changeDictionary=_changeDictionary;
@property (readonly, nonatomic) NSArray *changes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addChange:(id)arg1;
- (void)applyChangeSet:(id)arg1;
- (id)changedValueForPropertyIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasChangeForPropertyIdentifier:(id)arg1;
- (id)init;
- (id)initWithChangeDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)originalValueForPropertyIdentifier:(id)arg1;
- (void)removeAllChanges;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
