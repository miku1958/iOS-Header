//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface CPLScopeFilter : NSObject
{
    NSSet *_includedScopeIdentifiers;
    NSSet *_excludedScopeIdentifiers;
}

@property (readonly, nonatomic) NSSet *excludedScopeIdentifiers; // @synthesize excludedScopeIdentifiers=_excludedScopeIdentifiers;
@property (readonly, nonatomic) NSSet *includedScopeIdentifiers; // @synthesize includedScopeIdentifiers=_includedScopeIdentifiers;

- (void).cxx_destruct;
- (id)_setOfScopeIdentifiersFromEnumeration:(id)arg1;
- (id)description;
- (BOOL)filterOnScopeIdentifier:(id)arg1;
- (id)initWithExcludedScopeIdentifiers:(id)arg1;
- (id)initWithIncludedScopeIdentifiers:(id)arg1;

@end
