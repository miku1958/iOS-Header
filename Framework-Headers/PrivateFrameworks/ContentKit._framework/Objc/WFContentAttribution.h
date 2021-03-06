//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContentKit/NSSecureCoding-Protocol.h>
#import <ContentKit/WFSerializableContent-Protocol.h>

@class NSString;

@interface WFContentAttribution : NSObject <NSSecureCoding, WFSerializableContent>
{
    unsigned long long _disclosureLevel;
    unsigned long long _managedLevel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long disclosureLevel; // @synthesize disclosureLevel=_disclosureLevel;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long managedLevel; // @synthesize managedLevel=_managedLevel;
@property (readonly) Class superclass;

+ (id)attributionWithAccountBasedBundleIdentifier:(id)arg1 accountIdentifier:(id)arg2 disclosureLevel:(unsigned long long)arg3;
+ (id)attributionWithBundleIdentifier:(id)arg1 accountIdentifier:(id)arg2 disclosureLevel:(unsigned long long)arg3 managedLevel:(unsigned long long)arg4;
+ (id)attributionWithBundleIdentifier:(id)arg1 disclosureLevel:(unsigned long long)arg2;
+ (id)attributionWithDisclosureLevel:(unsigned long long)arg1 managedLevel:(unsigned long long)arg2;
+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (id)shortcutsAppAttribution;
+ (id)shortcutsAppAttributionWithDisclosureLevel:(unsigned long long)arg1;
+ (BOOL)supportsSecureCoding;
- (id)attributionIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisclosureLevel:(unsigned long long)arg1 managedLevel:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)localizedDescription;
- (id)wfSerializedRepresentation;

@end

