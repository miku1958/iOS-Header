//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXHorizontalStackLayoutCalculator-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface SXHorizontalStackLayoutCalculator : NSObject <SXHorizontalStackLayoutCalculator>
{
    NSMutableArray *_items;
    NSMutableArray *_flexibleItems;
    NSMutableArray *_sortedItems;
    NSMutableDictionary *_componentsGroupedByMaximumWidth;
    NSMutableDictionary *_componentsGroupedByMinimumWidth;
    NSMutableDictionary *_minimumWidths;
    NSMutableDictionary *_maximumWidths;
    double _combinedMaximumWidth;
    double _combinedMinimumWidth;
}

@property (nonatomic) double combinedMaximumWidth; // @synthesize combinedMaximumWidth=_combinedMaximumWidth;
@property (nonatomic) double combinedMinimumWidth; // @synthesize combinedMinimumWidth=_combinedMinimumWidth;
@property (readonly, nonatomic) NSMutableDictionary *componentsGroupedByMaximumWidth; // @synthesize componentsGroupedByMaximumWidth=_componentsGroupedByMaximumWidth;
@property (readonly, nonatomic) NSMutableDictionary *componentsGroupedByMinimumWidth; // @synthesize componentsGroupedByMinimumWidth=_componentsGroupedByMinimumWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableArray *flexibleItems; // @synthesize flexibleItems=_flexibleItems;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property (readonly, nonatomic) NSMutableDictionary *maximumWidths; // @synthesize maximumWidths=_maximumWidths;
@property (readonly, nonatomic) NSMutableDictionary *minimumWidths; // @synthesize minimumWidths=_minimumWidths;
@property (readonly, nonatomic) NSMutableArray *sortedItems; // @synthesize sortedItems=_sortedItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addFlexibleItemWithIdentifier:(id)arg1;
- (void)addItemWithMinimumWidth:(double)arg1 maximumWidth:(double)arg2 identifier:(id)arg3;
- (id)init;
- (id)layoutForComponentWidth:(double)arg1;

@end
