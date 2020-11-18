//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/BSXPCSecureCoding-Protocol.h>
#import <RunningBoardServices/RBSProcessMatching-Protocol.h>

@class NSString, RBSProcessIdentity, RBSProcessPredicateImpl;

@interface RBSProcessPredicate : NSObject <BSXPCSecureCoding, RBSProcessMatching>
{
    RBSProcessPredicateImpl *_predicate;
}

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned int euid;
@property (readonly, copy, nonatomic) NSString *extensionPoint;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *jobLabel;
@property (readonly, nonatomic) RBSProcessPredicateImpl *predicate; // @synthesize predicate=_predicate;
@property (readonly, copy, nonatomic) RBSProcessIdentity *processIdentity;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly) Class superclass;

+ (id)predicate;
+ (id)predicateMatching:(id)arg1;
+ (id)predicateMatchingBundleIdentifier:(id)arg1;
+ (id)predicateMatchingEuid:(unsigned int)arg1;
+ (id)predicateMatchingExtensionPoint:(id)arg1;
+ (id)predicateMatchingHandle:(id)arg1;
+ (id)predicateMatchingIdentifier:(id)arg1;
+ (id)predicateMatchingIdentity:(id)arg1;
+ (id)predicateMatchingJobLabel:(id)arg1;
+ (id)predicateMatchingPredicates:(id)arg1;
+ (id)predicateMatchingServiceName:(id)arg1;
+ (id)predicateMatchingTarget:(id)arg1;
+ (id)predicatePowerLogProcesses;
+ (BOOL)supportsBSXPCSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)matchesProcess:(id)arg1;
- (id)processIdentifier;
- (id)processPredicate;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
