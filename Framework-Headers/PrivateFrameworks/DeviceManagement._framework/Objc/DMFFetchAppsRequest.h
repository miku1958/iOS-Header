//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTaskRequest.h>

@class NSArray, NSNumber, NSURL;

@interface DMFFetchAppsRequest : CATTaskRequest
{
    BOOL _deleteFeedback;
    BOOL _managedAppsOnly;
    BOOL _advanceTransientStates;
    NSArray *_bundleIdentifiers;
    NSNumber *_storeItemIdentifier;
    NSURL *_manifestURL;
    NSArray *_propertyKeys;
}

@property (nonatomic) BOOL advanceTransientStates; // @synthesize advanceTransientStates=_advanceTransientStates;
@property (copy, nonatomic) NSArray *bundleIdentifiers; // @synthesize bundleIdentifiers=_bundleIdentifiers;
@property (nonatomic) BOOL deleteFeedback; // @synthesize deleteFeedback=_deleteFeedback;
@property (nonatomic) BOOL managedAppsOnly; // @synthesize managedAppsOnly=_managedAppsOnly;
@property (copy, nonatomic) NSURL *manifestURL; // @synthesize manifestURL=_manifestURL;
@property (copy, nonatomic) NSArray *propertyKeys; // @synthesize propertyKeys=_propertyKeys;
@property (copy, nonatomic) NSNumber *storeItemIdentifier; // @synthesize storeItemIdentifier=_storeItemIdentifier;

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
