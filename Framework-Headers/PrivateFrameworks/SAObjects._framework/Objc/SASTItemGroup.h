//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAUISnippet.h>

@class NSArray;

@interface SASTItemGroup : SAUISnippet
{
}

@property (copy, nonatomic) NSArray *fallbackCommands;
@property (copy, nonatomic) NSArray *templateItems;

+ (id)itemGroup;
+ (id)itemGroupWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

