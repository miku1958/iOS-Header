//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString, NSURL;

@interface SAScreenActionInfo : SADomainObject
{
}

@property (copy, nonatomic) NSString *elementId;
@property (copy, nonatomic) NSArray *examples;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *semanticData;
@property (copy, nonatomic) NSURL *semanticId;
@property (copy, nonatomic) NSURL *type;
@property (copy, nonatomic) NSString *value;

+ (id)info;
+ (id)infoWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

