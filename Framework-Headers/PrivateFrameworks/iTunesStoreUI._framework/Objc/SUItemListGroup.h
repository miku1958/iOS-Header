//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, SUItem;

@interface SUItemListGroup : NSObject
{
    NSMutableArray *_items;
    SUItem *_separatorItem;
}

@property (readonly, nonatomic) NSString *indexBarTitle;
@property (strong, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property (strong, nonatomic) SUItem *separatorItem; // @synthesize separatorItem=_separatorItem;

- (void)dealloc;
- (id)description;

@end

