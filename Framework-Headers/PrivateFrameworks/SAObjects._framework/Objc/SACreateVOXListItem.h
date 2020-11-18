//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString;

@interface SACreateVOXListItem : AceObject <SAAceSerializable>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *displayHints;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *speakableInSequence;
@property (copy, nonatomic) NSString *speakableStandalone;
@property (readonly) Class superclass;

+ (id)createVOXListItem;
+ (id)createVOXListItemWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
