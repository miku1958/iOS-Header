//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SASTActionableTemplateItem-Protocol.h>

@class NSString, SAUINanoImageResource;
@protocol SASTTemplateAction;

@interface SASTAttributionItem : AceObject <SASTActionableTemplateItem>
{
}

@property (strong, nonatomic) id<SASTTemplateAction> action;
@property (copy, nonatomic) NSString *attributionPosition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SAUINanoImageResource *imageResource;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;

+ (id)attributionItem;
+ (id)attributionItemWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

