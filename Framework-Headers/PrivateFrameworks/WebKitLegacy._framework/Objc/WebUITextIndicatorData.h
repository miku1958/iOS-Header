//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIColor, UIImage;

@interface WebUITextIndicatorData : NSObject
{
    UIImage *_dataInteractionImage;
    NSArray *_textRectsInBoundingRectCoordinates;
    UIImage *_contentImageWithHighlight;
    UIImage *_contentImageWithoutSelection;
    UIImage *_contentImage;
    UIColor *_estimatedBackgroundColor;
    double _contentImageScaleFactor;
    struct CGRect _selectionRectInRootViewCoordinates;
    struct CGRect _textBoundingRectInRootViewCoordinates;
    struct CGRect _contentImageWithoutSelectionRectInRootViewCoordinates;
}

@property (strong, nonatomic) UIImage *contentImage; // @synthesize contentImage=_contentImage;
@property (nonatomic) double contentImageScaleFactor; // @synthesize contentImageScaleFactor=_contentImageScaleFactor;
@property (strong, nonatomic) UIImage *contentImageWithHighlight; // @synthesize contentImageWithHighlight=_contentImageWithHighlight;
@property (strong, nonatomic) UIImage *contentImageWithoutSelection; // @synthesize contentImageWithoutSelection=_contentImageWithoutSelection;
@property (nonatomic) struct CGRect contentImageWithoutSelectionRectInRootViewCoordinates; // @synthesize contentImageWithoutSelectionRectInRootViewCoordinates=_contentImageWithoutSelectionRectInRootViewCoordinates;
@property (strong, nonatomic) UIImage *dataInteractionImage; // @synthesize dataInteractionImage=_dataInteractionImage;
@property (strong, nonatomic) UIColor *estimatedBackgroundColor; // @synthesize estimatedBackgroundColor=_estimatedBackgroundColor;
@property (nonatomic) struct CGRect selectionRectInRootViewCoordinates; // @synthesize selectionRectInRootViewCoordinates=_selectionRectInRootViewCoordinates;
@property (nonatomic) struct CGRect textBoundingRectInRootViewCoordinates; // @synthesize textBoundingRectInRootViewCoordinates=_textBoundingRectInRootViewCoordinates;
@property (strong, nonatomic) NSArray *textRectsInBoundingRectCoordinates; // @synthesize textRectsInBoundingRectCoordinates=_textRectsInBoundingRectCoordinates;

- (void)dealloc;
- (id)initWithImage:(struct CGImage *)arg1 scale:(double)arg2;
- (id)initWithImage:(struct CGImage *)arg1 textIndicatorData:(const struct TextIndicatorData *)arg2 scale:(double)arg3;

@end
