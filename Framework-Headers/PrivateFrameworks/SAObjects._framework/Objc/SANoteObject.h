//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSDate, NSString;

@interface SANoteObject : SADomainObject
{
}

@property (copy, nonatomic) NSString *contents;
@property (copy, nonatomic) NSDate *createdDate;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (nonatomic) BOOL restricted;
@property (copy, nonatomic) NSString *title;

+ (id)object;
+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
