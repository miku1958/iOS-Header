//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PDFAnnotation;

__attribute__((visibility("hidden")))
@interface PDFBorderPrivateVars : NSObject
{
    PDFAnnotation *annotation;
    long long style;
    double hCornerRadius;
    double vCornerRadius;
    double lineWidth;
    long long dashCount;
    NSArray *dashPattern;
    double *dashPatternRaw;
}

- (void).cxx_destruct;

@end

