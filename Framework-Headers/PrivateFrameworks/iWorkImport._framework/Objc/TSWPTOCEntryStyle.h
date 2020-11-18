//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPParagraphStyle.h>

__attribute__((visibility("hidden")))
@interface TSWPTOCEntryStyle : TSWPParagraphStyle
{
}

+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (id)properties;
+ (id)propertiesAllowingNSNull;
- (id)initWithContext:(id)arg1 name:(id)arg2 basedOnParagraphStyle:(id)arg3;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(BOOL)arg4;
- (void)loadFromUnarchiver:(id)arg1;
- (void)p_loadTOCEntryParagraphStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct TOCEntryStylePropertiesArchive *)arg2 unarchiver:(id)arg3;
- (void)p_saveTOCEntryStylePropertiesToArchive:(struct TOCEntryStylePropertiesArchive *)arg1 archiver:(id)arg2;
- (id)parentStyleForFixingOrphanVariation;
- (id)presetKind;
- (void)saveToArchive:(struct TOCEntryStyleArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;

@end

