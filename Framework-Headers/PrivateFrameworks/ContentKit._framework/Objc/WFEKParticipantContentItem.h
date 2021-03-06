//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFContentItem.h>

#import <ContentKit/WFContentItemClass-Protocol.h>

@interface WFEKParticipantContentItem : WFContentItem <WFContentItemClass>
{
}

+ (id)contentCategories;
+ (id)countDescription;
+ (id)defaultSourceForRepresentation:(id)arg1;
+ (id)filterDescription;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralFilterDescription;
+ (id)pluralTypeDescription;
+ (id)possibleRoles;
+ (id)possibleStatuses;
+ (id)propertyBuilders;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)typeDescription;
- (BOOL)canGenerateContact;
- (BOOL)canGenerateRepresentationForType:(id)arg1;
- (void)generateObjectRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (BOOL)getListSubtitle:(CDUnknownBlockType)arg1;
- (BOOL)isCurrentUser;
- (id)participant;
- (id)role;
- (id)status;

@end

