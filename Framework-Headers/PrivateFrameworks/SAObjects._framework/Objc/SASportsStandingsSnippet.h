//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SASportsSnippet.h>

@class NSArray;

@interface SASportsStandingsSnippet : SASportsSnippet
{
}

@property (copy, nonatomic) NSArray *columns;
@property (copy, nonatomic) NSArray *entities;
@property (copy, nonatomic) NSArray *selectedEntities;
@property (nonatomic) BOOL showCardinalPositions;

+ (id)standingsSnippet;
+ (id)standingsSnippetWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

