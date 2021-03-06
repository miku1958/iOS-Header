//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DataDeliveryServices/NSCopying-Protocol.h>
#import <DataDeliveryServices/NSSecureCoding-Protocol.h>

@class DDSAssetPolicy, DDSAssetQuery, NSDate, NSMutableSet, NSSet, NSString;

@interface DDSAssertion : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_description;
    NSDate *_lastUpdated;
    DDSAssetQuery *_query;
    NSMutableSet *_descriptors;
}

@property (readonly, nonatomic) NSSet *assertionIdentifiers;
@property (readonly, nonatomic) NSSet *clientIdentifiers;
@property (strong, nonatomic) NSMutableSet *descriptors; // @synthesize descriptors=_descriptors;
@property (strong, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property (readonly, nonatomic) DDSAssetPolicy *policy;
@property (readonly, nonatomic) DDSAssetQuery *query; // @synthesize query=_query;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addDescriptorWithAssertionID:(id)arg1 clientID:(id)arg2 policy:(id)arg3;
- (id)assertionIDsForClientID:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuery:(id)arg1;
- (void)invalidateDescription;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAssertion:(id)arg1;
- (void)removeDescriptorWithAssertionID:(id)arg1;
- (void)removeDescriptorWithClientID:(id)arg1;

@end

