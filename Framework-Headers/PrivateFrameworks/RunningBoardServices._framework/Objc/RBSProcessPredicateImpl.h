//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/RBSProcessMatching-Protocol.h>
#import <RunningBoardServices/RBSXPCSecureCoding-Protocol.h>

@class NSString;

@interface RBSProcessPredicateImpl : NSObject <RBSProcessMatching, RBSXPCSecureCoding>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)supportsRBSXPCSecureCoding;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)initWithRBSXPCCoder:(id)arg1;
- (BOOL)matchesProcess:(id)arg1;
- (id)processIdentifier;
- (id)processPredicate;

@end

