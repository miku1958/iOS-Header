//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFContentItem.h>

#import <ContentKit/WFContentItemClass-Protocol.h>

@class NSDate;

@interface WFDateContentItem : WFContentItem <WFContentItemClass>
{
}

@property (readonly, nonatomic) NSDate *date;

+ (id)contentCategories;
+ (id)countDescription;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (BOOL)getListAltText:(CDUnknownBlockType)arg1;
- (id)richListTitle;

@end

