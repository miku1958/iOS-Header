//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXFont : NSObject
{
}

+ (id)defaultEdRunCollectionForTitle:(id)arg1 titleElement:(struct _xmlNode *)arg2 state:(id)arg3;
+ (id)defaultEdRunCollectionWithState:(id)arg1;
+ (id)edFontFromXmlTextPropertiesElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)edFontWithFullOadCharacterProperties:(id)arg1 state:(id)arg2;
+ (id)edFontWithOadCharacterProperties:(id)arg1 state:(id)arg2;
+ (id)edFontWithOadTextBody:(id)arg1 state:(id)arg2;
+ (id)edRunCollectionFromXmlTextPropertiesElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)mapFontProperties:(id)arg1 to:(id)arg2;
+ (void)mapFontProperties:(id)arg1 toTextProps:(id)arg2 withEffects:(id)arg3;
+ (id)readParagraphPropertiesFromXmlTextPropertiesParentElement:(struct _xmlNode *)arg1 state:(id)arg2;

@end

