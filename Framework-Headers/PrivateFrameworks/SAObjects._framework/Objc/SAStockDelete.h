//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray;

@interface SAStockDelete : SADomainCommand
{
}

@property (copy, nonatomic) NSArray *stocks;

+ (id)delete;
+ (id)deleteWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end

