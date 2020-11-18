//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXColor : NSObject
{
}

+ (id)presetColorEnumMap;
+ (id)presetColorRGBEnumMap;
+ (id)readColorFromNode:(struct _xmlNode *)arg1;
+ (id)readColorFromParentXmlNode:(struct _xmlNode *)arg1;
+ (id)readHslColorFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readPresetColorFromAttribute:(id)arg1;
+ (id)readPresetColorFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readSRgbColorFromXmlNode:(struct _xmlNode *)arg1 attribute:(const char *)arg2;
+ (id)readScRgbColorFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readSchemeColorFromAttribute:(id)arg1;
+ (id)readSchemeColorFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readSystemColorFromAttribute:(id)arg1;
+ (id)readSystemColorFromXmlNode:(struct _xmlNode *)arg1;
+ (id)schemeColorEnumMap;
+ (id)stringSRgbColor:(id)arg1;
+ (id)systemColorEnumMap;
+ (void)writeColor:(id)arg1 to:(id)arg2;
+ (void)writePlaceholderColor:(id)arg1 to:(id)arg2;
+ (void)writePresetColor:(id)arg1 to:(id)arg2;
+ (void)writeRgbColor:(id)arg1 to:(id)arg2;
+ (void)writeSchemeColor:(id)arg1 to:(id)arg2;
+ (void)writeSystemColor:(id)arg1 to:(id)arg2;

@end
