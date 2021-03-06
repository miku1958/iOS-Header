//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Preferences/NSCopying-Protocol.h>

@class NSArray;

@interface PSCapacityBarData : NSObject <NSCopying>
{
    NSArray *_orderedCategories;
    NSArray *_adjustedCategories;
    BOOL _hideTinyCategories;
    int _sortStyle;
    long long _categoryLimit;
    long long _capacity;
    long long _bytesUsed;
    NSArray *_categories;
}

@property (readonly) NSArray *adjustedCategories;
@property long long bytesUsed; // @synthesize bytesUsed=_bytesUsed;
@property long long capacity; // @synthesize capacity=_capacity;
@property (strong, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property long long categoryLimit; // @synthesize categoryLimit=_categoryLimit;
@property BOOL hideTinyCategories; // @synthesize hideTinyCategories=_hideTinyCategories;
@property (readonly) NSArray *orderedCategories;
@property int sortStyle; // @synthesize sortStyle=_sortStyle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

