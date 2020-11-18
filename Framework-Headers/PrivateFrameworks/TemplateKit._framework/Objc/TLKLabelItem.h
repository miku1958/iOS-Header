//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TemplateKit/TLKGridArrangementItem-Protocol.h>

@class NSString, NUISizeCache, TLKFormattedText;

@interface TLKLabelItem : NSObject <TLKGridArrangementItem>
{
    unsigned long long row;
    double horizontalHuggingPriority;
    double horizontalCompressionResistance;
    NUISizeCache *sizeCache;
    TLKFormattedText *_formattedText;
    struct _NSRange columnRange;
    struct CGRect frame;
}

@property struct _NSRange columnRange; // @synthesize columnRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak) TLKFormattedText *formattedText; // @synthesize formattedText=_formattedText;
@property struct CGRect frame;
@property (readonly) unsigned long long hash;
@property double horizontalCompressionResistance; // @synthesize horizontalCompressionResistance;
@property double horizontalHuggingPriority; // @synthesize horizontalHuggingPriority;
@property unsigned long long row; // @synthesize row;
@property (strong) NUISizeCache *sizeCache; // @synthesize sizeCache;
@property (readonly) Class superclass;

+ (id)font;
+ (void)initialize;
+ (double)minimumWidthForLabelItem;
+ (void)setFontValues;
- (void).cxx_destruct;
- (float)contentCompressionResistancePriorityForAxis:(long long)arg1;
- (float)contentHuggingPriorityForAxis:(long long)arg1;
- (double)effectiveBaselineOffsetFromContentBottom;
- (double)effectiveFirstBaselineOffsetFromContentTop;
- (id)init;
- (BOOL)isLayoutSizeDependentOnPerpendicularAxis;
- (struct CGSize)sizeForTargetSize:(struct CGSize)arg1;

@end

