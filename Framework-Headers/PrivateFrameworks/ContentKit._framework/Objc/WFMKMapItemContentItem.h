//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFContentItem.h>

#import <ContentKit/WFContentItemClass-Protocol.h>

@class CLLocation, MKMapItem;

@interface WFMKMapItemContentItem : WFContentItem <WFContentItemClass>
{
    CLLocation *_queryLocation;
}

@property (readonly, nonatomic) MKMapItem *mapItem;
@property (strong, nonatomic) CLLocation *queryLocation; // @synthesize queryLocation=_queryLocation;

+ (id)contentCategories;
+ (id)countDescription;
+ (id)itemWithMapItem:(id)arg1 fromQueryLocation:(id)arg2;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)typeDescription;
- (void).cxx_destruct;
- (BOOL)canGenerateRepresentationForType:(id)arg1;
- (void)generateObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (BOOL)getListAltText:(CDUnknownBlockType)arg1;
- (BOOL)getListSubtitle:(CDUnknownBlockType)arg1;

@end

