//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface VSIdentityProviderFilter : NSObject
{
    NSArray *_allIdentityProviders;
    NSArray *_supportedAccountProviderIDs;
    NSString *_searchQuery;
}

@property (copy, nonatomic) NSArray *allIdentityProviders; // @synthesize allIdentityProviders=_allIdentityProviders;
@property (readonly, copy, nonatomic) NSArray *filteredIdentityProviders;
@property (copy, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
@property (copy, nonatomic) NSArray *supportedAccountProviderIDs; // @synthesize supportedAccountProviderIDs=_supportedAccountProviderIDs;

+ (id)keyPathsForValuesAffectingFilteredIdentityProviders;
- (void).cxx_destruct;
- (id)init;

@end

