//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, RBEntitlementPredicate;

__attribute__((visibility("hidden")))
@interface RBAttributeTemplateGroup : NSObject
{
    NSArray *_attributes;
    NSDictionary *_targetBundleProperties;
    RBEntitlementPredicate *_originatorEntitlements;
    RBEntitlementPredicate *_targetEntitlements;
    NSDictionary *_additionalRestrictions;
}

@property (strong, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes;
@property (copy, nonatomic) NSDictionary *targetBundleProperties; // @synthesize targetBundleProperties=_targetBundleProperties;

- (void).cxx_destruct;
- (id)description;

@end

