//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PBTextBlock : NSObject
{
}

+ (void)applyTextRuler:(struct PptTextRulerAtom *)arg1 toTextBlock:(id)arg2;
+ (void)readClientTextBox:(id)arg1 textBody:(id)arg2 state:(id)arg3;
+ (void)readFromStyledText:(struct __CFAttributedString *)arg1 toStyledPargraphs:(struct __CFArray *)arg2;
+ (void)readFromTextBlock:(id)arg1 toStyledText:(struct __CFAttributedString *)arg2;
+ (void)readParagraph:(id)arg1 paragraph:(struct __CFAttributedString *)arg2 textType:(int)arg3 state:(id)arg4;

@end

