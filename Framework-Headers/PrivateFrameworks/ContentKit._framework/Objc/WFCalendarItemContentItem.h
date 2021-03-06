//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFGenericFileContentItem.h>

#import <ContentKit/WFContentItemClass-Protocol.h>

@class EKCalendarItem, EKEventStore, NSString;

@interface WFCalendarItemContentItem : WFGenericFileContentItem <WFContentItemClass>
{
    EKEventStore *_eventStore;
}

@property (readonly, nonatomic) EKCalendarItem *calendarItem;
@property (strong, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
@property (readonly, nonatomic) NSString *location;

+ (id)contentCategories;
+ (id)countDescription;
+ (id)outputTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)typeDescription;
- (void).cxx_destruct;
- (id)attachments;
- (BOOL)canGenerateRepresentationForType:(id)arg1;
- (id)changeTransaction;
- (id)copyWithName:(id)arg1 zone:(struct _NSZone *)arg2;
- (id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)generateObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;

@end

