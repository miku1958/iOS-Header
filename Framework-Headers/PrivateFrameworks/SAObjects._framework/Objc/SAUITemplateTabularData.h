//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSArray, NSNumber, NSString;
@protocol SAUITemplateItem;

@interface SAUITemplateTabularData : SAUITemplateBaseItem
{
}

@property (nonatomic) BOOL allowContentScrolling;
@property (copy, nonatomic) NSArray *columns;
@property (strong, nonatomic) id<SAUITemplateItem> footerItem;
@property (strong, nonatomic) id<SAUITemplateItem> headerItem;
@property (copy, nonatomic) NSString *layoutStyle;
@property (copy, nonatomic) NSNumber *minimumRowHeight;
@property (copy, nonatomic) NSArray *rowStyleRules;
@property (nonatomic) BOOL showHeaderDivider;

+ (id)tabularData;
+ (id)tabularDataWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
