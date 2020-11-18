//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface VSIdentityProviderFilter : NSObject
{
    BOOL _shouldExcludeUnsupportedProviders;
    NSArray *_allIdentityProviders;
    NSArray *_supportedAccountProviderIDs;
}

@property (copy, nonatomic) NSArray *allIdentityProviders; // @synthesize allIdentityProviders=_allIdentityProviders;
@property (readonly, copy, nonatomic) NSArray *filteredIdentityProviders;
@property (nonatomic) BOOL shouldExcludeUnsupportedProviders; // @synthesize shouldExcludeUnsupportedProviders=_shouldExcludeUnsupportedProviders;
@property (copy, nonatomic) NSArray *supportedAccountProviderIDs; // @synthesize supportedAccountProviderIDs=_supportedAccountProviderIDs;

+ (id)keyPathsForValuesAffectingFilteredIdentityProviders;
- (void).cxx_destruct;
- (id)init;

@end
