//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSCHPropertyMapsGeneratedProtocol-Protocol.h>
#import <iWorkImport/TSCHStyleOwnerCollaborationSupport-Protocol.h>
#import <iWorkImport/TSCHStyleOwning-Protocol.h>
#import <iWorkImport/TSCHUnretainedParent-Protocol.h>

@class NSString, NSUUID, TSCHChartAxis, TSCHChartAxisID, TSCHChartModel, TSCHReferenceLineNonStyle, TSCHReferenceLineStyle;

__attribute__((visibility("hidden")))
@interface TSCHReferenceLine : NSObject <TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport, TSCHUnretainedParent, TSCHStyleOwning>
{
    TSCHChartModel *mModel;
    TSCHChartAxisID *mAxisID;
    TSCHReferenceLineStyle *mStyle;
    TSCHReferenceLineNonStyle *mNonStyle;
    NSUUID *mUUID;
    unsigned long long mStyleSwapIndex;
}

@property (readonly, nonatomic) TSCHChartAxis *axis;
@property (readonly, copy, nonatomic) TSCHChartAxisID *axisID; // @synthesize axisID=mAxisID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL labelShowing; // @dynamic labelShowing;
@property (readonly, nonatomic) BOOL lineShowing; // @dynamic lineShowing;
@property (readonly, nonatomic) unsigned long long refLineType; // @dynamic refLineType;
@property (readonly, nonatomic) unsigned long long styleSwapIndex;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uuid; // @synthesize uuid=mUUID;
@property (readonly, nonatomic) BOOL valueLabelShowing; // @dynamic valueLabelShowing;

+ (id)axisIDFromStyleSwapOrStyleOwnerIndex:(unsigned long long)arg1;
+ (id)defaultNonStyleWithContext:(id)arg1 referenceLineType:(unsigned long long)arg2 axis:(id)arg3;
+ (unsigned long long)maxNumberOfReferenceLines;
+ (unsigned long long)maxNumberOfReferenceLinesOfType:(unsigned long long)arg1;
+ (id)p_lineLabelForType:(unsigned long long)arg1;
+ (unsigned long long)refLineIndexFromStyleSwapOrStyleOwnerIndex:(unsigned long long)arg1;
+ (unsigned char)styleOwnerPathType;
+ (unsigned long long)styleSwapOrStyleOwnerIndexFromAxisID:(id)arg1 refLineIndex:(unsigned long long)arg2;
- (void).cxx_destruct;
- (id)chartInfo;
- (void)clearParent;
- (id)context;
- (void)dealloc;
- (id)defaultProperties;
- (int)defaultPropertyForGeneric:(int)arg1;
- (id)drawableInfo;
- (float)floatValueForProperty:(int)arg1 defaultValue:(float)arg2;
- (id)g_genericToDefaultPropertyMap;
- (id)g_operationPropertyNameForGenericProperty:(int)arg1;
- (BOOL)hasFloatValueForProperty:(int)arg1 value:(float *)arg2;
- (BOOL)hasIntValueForProperty:(int)arg1 value:(int *)arg2;
- (BOOL)hasObjectValueForProperty:(int)arg1 value:(id *)arg2;
- (id)initWithModel:(id)arg1 axisID:(id)arg2 index:(unsigned long long)arg3 uuid:(id)arg4;
- (int)intValueForProperty:(int)arg1 defaultValue:(int)arg2;
- (id)localizedTypeName;
- (id)model;
- (id)nonstyle;
- (id)objectValueForProperty:(int)arg1;
- (id)operationPropertyNameFromGenericProperty:(int)arg1;
- (id)p_genericToDefaultPropertyMap;
- (double)referenceLineAxisValue;
- (void)setStyle:(id)arg1 nonStyle:(id)arg2;
- (int)specificPropertyForGeneric:(int)arg1;
- (id)style;
- (id)swapTuplesForMutations:(id)arg1 forImport:(BOOL)arg2;
- (id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2;
- (id)valueForProperty:(int)arg1;

@end

