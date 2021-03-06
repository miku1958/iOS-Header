//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFContentItem.h>

#import <WorkflowKit/WFContentItemClass-Protocol.h>

@class INCustomObject;

@interface WFCustomIntentOutputContentItem : WFContentItem <WFContentItemClass>
{
}

@property (readonly, nonatomic) INCustomObject *customObject;

+ (id)codableDescription;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)typeDescription;
- (Class)classForCoder;
- (Class)classForKeyedArchiver;
- (id)copyWithName:(id)arg1 zone:(struct _NSZone *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (BOOL)getListSubtitle:(CDUnknownBlockType)arg1;
- (BOOL)getListThumbnail:(CDUnknownBlockType)arg1 forSize:(struct CGSize)arg2;
- (id)initWithCoder:(id)arg1;

@end

