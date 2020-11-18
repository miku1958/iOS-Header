//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface WBSPasswordGenerationManager : NSObject
{
    NSDictionary *_passwordRequirementsByDomain;
}

@property (copy, nonatomic) NSDictionary *passwordRequirementsByDomain; // @synthesize passwordRequirementsByDomain=_passwordRequirementsByDomain;

- (void).cxx_destruct;
- (id)defaultRequirementsForDomain:(id)arg1;
- (id)defaultRequirementsForURL:(id)arg1;
- (id)generatedPasswordMatchingRequirements:(id)arg1;
- (id)init;
- (id)initWithPasswordRequirementsByDomain:(id)arg1;
- (BOOL)manualPasswordGenerationIsDisallowedByRequirements:(id)arg1;
- (BOOL)passwordGenerationIsDisallowedByRequirements:(id)arg1;
- (id)protectionSpaceForGeneratedPasswordsInProtectionSpace:(id)arg1;
- (id)updatedRequirements:(id)arg1 respectingMaxLength:(unsigned long long)arg2;

@end
