//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class AFBulletin, AceObject, NSDictionary, NSString;

@interface AFApplicationContext : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_associatedBundleIdentifier;
    AFBulletin *_bulletin;
    AceObject *_aceContext;
    NSDictionary *_contextDictionary;
}

@property (readonly, copy, nonatomic) AceObject *aceContext; // @synthesize aceContext=_aceContext;
@property (readonly, copy, nonatomic) NSString *associatedBundleIdentifier; // @synthesize associatedBundleIdentifier=_associatedBundleIdentifier;
@property (readonly, copy, nonatomic) AFBulletin *bulletin; // @synthesize bulletin=_bulletin;
@property (readonly, copy, nonatomic) NSDictionary *contextDictionary; // @synthesize contextDictionary=_contextDictionary;

+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAssociatedBundleIdentifier:(id)arg1 bulletin:(id)arg2 aceContext:(id)arg3 contextDictionary:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end

