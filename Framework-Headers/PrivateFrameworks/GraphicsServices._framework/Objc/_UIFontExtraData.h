//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCharacterSet, NSString;

@interface _UIFontExtraData : NSObject
{
    NSCharacterSet *_coveredCharacterSet;
    double _ascender;
    double _descender;
    double _lineHeight;
    double _lineGap;
    struct __fFlags {
        unsigned int _initialized:1;
        unsigned int _isSystemFont:1;
        unsigned int _hasKernPair:1;
        unsigned int _unused:1;
        unsigned int _isIBTextStyleFont:1;
        unsigned int _isIBScaledFont:1;
    } _fFlags;
    NSString *_textStyleForScaling;
    double _pointSizeForScaling;
    double _maximumPointSizeAfterScaling;
}

- (void)dealloc;

@end

