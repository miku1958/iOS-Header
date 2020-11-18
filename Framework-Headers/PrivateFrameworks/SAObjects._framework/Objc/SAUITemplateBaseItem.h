//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseAceObject.h>

#import <SAObjects/SAUITemplateItem-Protocol.h>

@class NSArray, NSString, SAUITemplateEdgeInsets;

@interface SAUITemplateBaseItem : SABaseAceObject <SAUITemplateItem>
{
}

@property (copy, nonatomic) NSArray *communicationOptions; // @dynamic communicationOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) SAUITemplateEdgeInsets *fullScreenPaddingDelta; // @dynamic fullScreenPaddingDelta;
@property (nonatomic) BOOL hasPriorityLayout; // @dynamic hasPriorityLayout;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SAUITemplateEdgeInsets *padding; // @dynamic padding;
@property (copy, nonatomic) NSArray *presentationOptions; // @dynamic presentationOptions;
@property (nonatomic) BOOL shouldBeOffscreenInPartial; // @dynamic shouldBeOffscreenInPartial;
@property (readonly) Class superclass;

+ (id)baseItem;
+ (id)baseItemWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

