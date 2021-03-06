//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/NSObject-Protocol.h>
#import <TSCharts/TSCHStyleVending-Protocol.h>

@class NSArray, NSDictionary, NSString, TSCHChartInfo, TSCHChartModel, TSPObjectContext, TSSPropertySet, TSSStyle;

@protocol TSCHStyleOwning <NSObject, TSCHStyleVending>
- (TSCHChartInfo *)chartInfo;
- (TSPObjectContext *)context;
- (NSArray *)defaultProperties;
- (int)defaultPropertyForGeneric:(int)arg1;
- (BOOL)hasFloatValueForProperty:(int)arg1 value:(float *)arg2;
- (BOOL)hasIntValueForProperty:(int)arg1 value:(int *)arg2;
- (BOOL)hasObjectValueForProperty:(int)arg1 value:(id *)arg2;
- (TSCHChartModel *)model;
- (TSSStyle *)nonstyle;
- (NSString *)operationPropertyNameFromGenericProperty:(int)arg1;
- (int)specificPropertyForGeneric:(int)arg1;
- (TSSStyle *)style;
- (NSArray *)swapTuplesForMutations:(NSDictionary *)arg1 forImport:(BOOL)arg2;
- (NSArray *)swapTuplesForParagraphStyleMutations:(NSDictionary *)arg1 forReferencingProperty:(int)arg2;
- (id)valueForProperty:(int)arg1;

@optional
- (void)propertiesWereMutated:(TSSPropertySet *)arg1;
@end

