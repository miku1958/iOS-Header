//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSText/TSWPSmartField.h>

@interface TSWPTateChuYokoField : TSWPSmartField
{
}

- (BOOL)allowsEditing;
- (unsigned long long)attributeArrayKind;
- (void)loadFromArchive:(const struct TateChuYokoFieldArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchive:(struct TateChuYokoFieldArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (unsigned short)smartFieldKind;
- (int)styleAttributeArrayKind;

@end
