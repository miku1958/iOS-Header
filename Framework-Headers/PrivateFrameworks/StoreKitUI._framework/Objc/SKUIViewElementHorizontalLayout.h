//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SKUIViewElementHorizontalLayout : NSObject
{
    double _elementSpacing;
    double _layoutWidth;
    long long _maximumElementsPerLine;
    long long _maximumLines;
}

@property (nonatomic) double elementSpacing; // @synthesize elementSpacing=_elementSpacing;
@property (nonatomic) double layoutWidth; // @synthesize layoutWidth=_layoutWidth;
@property (nonatomic) long long maximumElementsPerLine; // @synthesize maximumElementsPerLine=_maximumElementsPerLine;
@property (nonatomic) long long maximumLines; // @synthesize maximumLines=_maximumLines;

- (id)layoutViewElements:(id)arg1 usingSizingBlock:(CDUnknownBlockType)arg2;

@end

