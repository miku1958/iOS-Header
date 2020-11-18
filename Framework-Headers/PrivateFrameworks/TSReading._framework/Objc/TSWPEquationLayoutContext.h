//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSReading/EQKitLayoutContext-Protocol.h>

@class NSString;

@interface TSWPEquationLayoutContext : NSObject <EQKitLayoutContext>
{
    struct __CFString *_fontName;
    double _fontSize;
    double _columnWidth;
}

@property (nonatomic) double columnWidth; // @synthesize columnWidth=_columnWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (struct __CFString *)baseFontName;
- (double)baseFontSize;
- (double)containerWidth;
- (void)dealloc;
- (id)initWithTextAttributes:(struct __CFDictionary *)arg1 columnWidth:(double)arg2;
- (BOOL)isEqual:(id)arg1;

@end

