//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Contacts/CNKeyDescriptor-Protocol.h>
#import <Contacts/CNKeyDescriptor_Private-Protocol.h>

@class NSMutableDictionary, NSString;

@interface CNPerContactPropertyKeyDescriptor : NSObject <CNKeyDescriptor_Private, CNKeyDescriptor>
{
    NSMutableDictionary *_propertiesByIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableDictionary *propertiesByIdentifier; // @synthesize propertiesByIdentifier=_propertiesByIdentifier;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void)_cn_executeGetterForRepresentedKeys:(CDUnknownBlockType)arg1;
- (id)_cn_requiredKeys;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setKeysToFetch:(id)arg1 forContactIdentifier:(id)arg2;

@end

