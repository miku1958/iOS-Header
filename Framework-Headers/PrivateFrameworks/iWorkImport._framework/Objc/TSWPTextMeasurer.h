//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSWPTextMeasurer : NSObject
{
}

+ (BOOL)canQuicklyMeasureString:(id)arg1 paragraphStyle:(id)arg2;
+ (double)heightForString:(id)arg1 textMeasurerBundle:(id)arg2 width:(double)arg3 outFitWidth:(inout double *)arg4;
+ (id)textMeasurerBundleForParagraphStyle:(id)arg1;
+ (double)widthForString:(id)arg1 textMeasurerBundle:(id)arg2;

@end
