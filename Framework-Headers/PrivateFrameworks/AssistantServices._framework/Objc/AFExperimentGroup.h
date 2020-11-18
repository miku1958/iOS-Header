//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface AFExperimentGroup : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    unsigned long long _allocation;
    NSDictionary *_properties;
}

@property (readonly, nonatomic) unsigned long long allocation; // @synthesize allocation=_allocation;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;

+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 allocation:(unsigned long long)arg2 properties:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end

