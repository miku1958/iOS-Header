//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class NSArray, NSString;

@interface SASTTableHeaderItem : AceObject <SASTTemplateItem>
{
}

@property (copy, nonatomic) NSArray *columnValues;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)tableHeaderItem;
+ (id)tableHeaderItemWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

