//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, VKImage;

__attribute__((visibility("hidden")))
@interface VKIconArtwork : NSObject
{
    BOOL _hasIcon;
    VKImage *_image;
    double _contentScale;
    double _leftCapWidth;
    double _rightCapWidth;
    double _textOffsetY;
    NSMutableArray *_completionHandlers;
    struct CGColor *_fullBleedColor;
}

@property (readonly, nonatomic) double contentScale; // @synthesize contentScale=_contentScale;
@property (nonatomic) struct CGColor *fullBleedColor; // @synthesize fullBleedColor=_fullBleedColor;

- (void)_cleanUpAfterDrawing;
- (id)_newImage;
- (id)_newImageWithText:(id)arg1 fontName:(id)arg2;
- (void)dealloc;
- (void)getImage:(CDUnknownBlockType)arg1;
- (id)image;
- (id)imageWithText:(id)arg1 fontName:(id)arg2;
- (id)initWithImage:(struct CGImage *)arg1 contentScale:(double)arg2;

@end

