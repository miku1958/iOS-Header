//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SASTActionableTemplateItem-Protocol.h>

@class NSArray, NSString, SAUIDecoratedText, SAUINanoImageResource;
@protocol SASTTemplateAction;

@interface SASTColumnDataListItem : AceObject <SASTActionableTemplateItem>
{
}

@property (strong, nonatomic) id<SASTTemplateAction> action; // @dynamic action;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *decoratedRows;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SAUINanoImageResource *imageResource;
@property (copy, nonatomic) NSString *rowLayout;
@property (readonly) Class superclass;
@property (strong, nonatomic) SAUIDecoratedText *title;

+ (id)columnDataListItem;
+ (id)columnDataListItemWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

