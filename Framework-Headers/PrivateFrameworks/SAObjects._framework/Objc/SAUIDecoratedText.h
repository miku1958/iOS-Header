//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString;

@interface SAUIDecoratedText : AceObject <SAAceSerializable>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *ducId;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *regions;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;

+ (id)decoratedText;
+ (id)decoratedTextWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
