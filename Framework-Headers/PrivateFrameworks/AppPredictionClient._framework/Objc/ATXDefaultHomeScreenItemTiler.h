//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ATXDefaultWidgetStack, NSArray, NSMutableArray, NSMutableSet;

@interface ATXDefaultHomeScreenItemTiler : NSObject
{
    ATXDefaultWidgetStack *_defaultStack;
    NSMutableArray *_defaultWidgetsSmall;
    NSMutableArray *_defaultWidgetsMedium;
    NSMutableArray *_defaultWidgetsLarge;
    unsigned long long _gridSize;
    NSMutableSet *_usedBundleIds;
    NSMutableSet *_usedSpecialKinds;
}

@property (readonly, nonatomic) NSArray *tiledHomeScreenItems;

+ (BOOL)_isSpecialAvocadoDescriptorKind:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_addFirstRow:(id)arg1;
- (BOOL)_addFirstRowGridSize2:(id)arg1;
- (BOOL)_addFirstRowGridSize3:(id)arg1;
- (BOOL)_addLargeRow:(id)arg1;
- (BOOL)_addLargeRowGridSize2:(id)arg1;
- (BOOL)_addMediumRow:(id)arg1;
- (BOOL)_addMediumRowGridSize2:(id)arg1;
- (BOOL)_addMediumRowGridSize3:(id)arg1;
- (BOOL)_addRow:(id)arg1 rowSizePreference:(unsigned long long)arg2;
- (BOOL)_addSmallRow:(id)arg1;
- (BOOL)_addSmallRowGridSize2:(id)arg1;
- (BOOL)_addSmallRowGridSize3:(id)arg1;
- (id)_filterForNextUnusedWidgetDescriptor:(id)arg1;
- (id)initWithDefaultStack:(id)arg1 defaultWidgetsSmall:(id)arg2 defaultWidgetsMedium:(id)arg3 defaultWidgetsLarge:(id)arg4 gridSize:(unsigned long long)arg5;

@end
