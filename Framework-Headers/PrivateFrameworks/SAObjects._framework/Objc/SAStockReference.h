//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAStockReference : SADomainObject
{
}

@property (copy, nonatomic) NSString *companyName;
@property (copy, nonatomic) NSString *symbol;

+ (id)reference;
+ (id)referenceWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

