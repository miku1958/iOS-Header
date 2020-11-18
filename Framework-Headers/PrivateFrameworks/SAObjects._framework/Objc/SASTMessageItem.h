//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class NSString, SAUIDecoratedText;

@interface SASTMessageItem : AceObject <SASTTemplateItem>
{
}

@property (copy, nonatomic) NSString *bundleId;
@property (strong, nonatomic) SAUIDecoratedText *content;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SAUIDecoratedText *recipient;
@property (readonly) Class superclass;

+ (id)messageItem;
+ (id)messageItemWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
