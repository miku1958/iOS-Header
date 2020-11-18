//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSArray, NSString;
@protocol SAUITemplateItem;

@interface SAUITemplateTabularData : SAUITemplateBaseItem
{
}

@property (copy, nonatomic) NSArray *columns;
@property (strong, nonatomic) id<SAUITemplateItem> footerItem;
@property (strong, nonatomic) id<SAUITemplateItem> headerItem;
@property (copy, nonatomic) NSString *layoutStyle;
@property (nonatomic) BOOL showHeaderDivider;

+ (id)tabularData;
+ (id)tabularDataWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

