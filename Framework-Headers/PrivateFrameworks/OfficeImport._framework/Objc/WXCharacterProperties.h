//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WXCharacterProperties : NSObject
{
}

+ (void)applyDeletionInsertionProperties:(id)arg1 state:(id)arg2;
+ (id)emphasisMarkEnumMap;
+ (id)fontHintEnumMap;
+ (id)highlightEnumMap;
+ (BOOL)isBooleanCharacterPropertyTrue:(int)arg1;
+ (id)ligaturesEnumMap;
+ (BOOL)readBooleanCharacterMultipleProperty:(struct _xmlNode *)arg1 propertyName:(const char *)arg2 attributeName:(const char *)arg3 outValue:(int *)arg4 state:(id)arg5;
+ (BOOL)readBooleanCharacterProperty:(struct _xmlNode *)arg1 propertyName:(const char *)arg2 attributeName:(const char *)arg3 outValue:(int *)arg4 state:(id)arg5;
+ (id)readFillColor:(struct _xmlNode *)arg1 forTarget:(id)arg2 state:(id)arg3;
+ (void)readFrom:(struct _xmlNode *)arg1 to:(id)arg2 state:(id)arg3;
+ (void)readReflection:(id)arg1 fromXmlNode:(struct _xmlNode *)arg2 state:(id)arg3;
+ (void)readShadowForTarget:(id)arg1 fromXmlNode:(struct _xmlNode *)arg2 state:(id)arg3;
+ (id)twoLineBracketsEnumMap;
+ (id)underlineEnumMap;
+ (id)verticalAlignEnumMap;

@end
