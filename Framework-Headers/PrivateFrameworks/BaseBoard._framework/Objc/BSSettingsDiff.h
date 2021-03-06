//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSDescriptionProviding-Protocol.h>
#import <BaseBoard/BSXPCCoding-Protocol.h>
#import <BaseBoard/NSCopying-Protocol.h>
#import <BaseBoard/NSSecureCoding-Protocol.h>

@class BSMutableSettings, NSMutableSet, NSString;
@protocol BSSettingDescriptionProvider;

@interface BSSettingsDiff : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding, BSXPCCoding>
{
    BSMutableSettings *_changes;
    NSMutableSet *_flagRemovals;
    NSMutableSet *_objectRemovals;
    id<BSSettingDescriptionProvider> _descriptionProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<BSSettingDescriptionProvider> descriptionProvider; // @synthesize descriptionProvider=_descriptionProvider;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly) Class superclass;

+ (id)diffFromSettings:(id)arg1 toSettings:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)applyToSettings:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)inspectChangesWithBlock:(CDUnknownBlockType)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

