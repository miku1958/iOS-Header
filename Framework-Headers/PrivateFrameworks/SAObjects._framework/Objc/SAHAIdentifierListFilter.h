//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAHAFilter.h>

@class NSArray;

@interface SAHAIdentifierListFilter : SAHAFilter
{
}

@property (copy, nonatomic) NSArray *identifiers;

+ (id)identifierListFilter;
+ (id)identifierListFilterWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

