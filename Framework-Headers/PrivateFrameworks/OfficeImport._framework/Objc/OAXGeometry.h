//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXGeometry : NSObject
{
}

+ (void)addFormulasFromFile:(id)arg1 toCustomGeometry:(id)arg2 formulaNameToIndexMap:(id)arg3 drawingState:(id)arg4;
+ (int)adjustValueWithGuideXmlNode:(struct _xmlNode *)arg1;
+ (id)formulaKeywordEnumMap;
+ (id)formulaTypeEnumMap;
+ (id)pathFillModeEnumMap;
+ (struct OADAdjustCoord)readAdjustCoordFromXmlNode:(struct _xmlNode *)arg1 name:(const char *)arg2 formulaNameToIndexMap:(id)arg3;
+ (void)readAdjustValuesFromCustomGeometryXmlNode:(struct _xmlNode *)arg1 toCustomGeometry:(id)arg2 adjustValueNameToIndexMap:(id)arg3 drawingState:(id)arg4;
+ (id)readCustomGeometryFromXmlNode:(struct _xmlNode *)arg1 hasImplicitFormulas:(BOOL)arg2 drawingState:(id)arg3;
+ (void)readFormulasFromCustomGeometryXmlNode:(struct _xmlNode *)arg1 toCustomGeometry:(id)arg2 adjustValueNameToIndexMap:(id)arg3 formulaNameToIndexMap:(id)arg4 drawingState:(id)arg5;
+ (id)readFromParentXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (void)readPathsFromCustomGeometryXmlNode:(struct _xmlNode *)arg1 toCustomGeometry:(id)arg2 formulaNameToIndexMap:(id)arg3 drawingState:(id)arg4;
+ (id)readPresetGeometryFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (void)readTextRectFromCustomGeometryXmlNode:(struct _xmlNode *)arg1 toCustomGeometry:(id)arg2 formulaNameToIndexMap:(id)arg3 drawingState:(id)arg4;
+ (id)shapeTypeEnumMap;
+ (int)shapeTypeForString:(id)arg1;
+ (id)stringForShapeType:(int)arg1;
+ (id)stringWritingShapeType:(int)arg1;
+ (void)write:(id)arg1 to:(id)arg2;
+ (void)writePath:(id)arg1 coordSpace:(CsRect_0aefebc6)arg2 to:(id)arg3;
+ (void)writeShapePathPoint:(struct OADAdjustPoint)arg1 origin:(CsPoint_c846a6ec)arg2 to:(id)arg3;

@end
