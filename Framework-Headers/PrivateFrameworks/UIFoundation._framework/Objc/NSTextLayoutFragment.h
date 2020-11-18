//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLayoutManager, NSTextStorage;

@interface NSTextLayoutFragment : NSObject
{
    NSLayoutManager *_layoutManager;
    unsigned long long _animationType;
    NSLayoutManager *_sourceLayoutManager;
    NSTextStorage *_sourceTextStorage;
    double _sourceVerticalDelta;
    long long _sourceRangeDelta;
    NSLayoutManager *_destinationLayoutManager;
    NSTextStorage *_destinationTextStorage;
    double _destinationVerticalDelta;
    struct _NSRange _characterRange;
    struct _NSRange _destinationGlyphRange;
    struct CGRect _sourceBoundingRect;
    struct CGRect _destinationBoundingRect;
}

@property (readonly) unsigned long long animationType; // @synthesize animationType=_animationType;
@property (readonly) struct _NSRange characterRange; // @synthesize characterRange=_characterRange;
@property struct CGRect destinationBoundingRect; // @synthesize destinationBoundingRect=_destinationBoundingRect;
@property struct _NSRange destinationGlyphRange; // @synthesize destinationGlyphRange=_destinationGlyphRange;
@property NSLayoutManager *destinationLayoutManager; // @synthesize destinationLayoutManager=_destinationLayoutManager;
@property (strong) NSTextStorage *destinationTextStorage; // @synthesize destinationTextStorage=_destinationTextStorage;
@property double destinationVerticalDelta; // @synthesize destinationVerticalDelta=_destinationVerticalDelta;
@property (weak) NSLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property (readonly) struct CGRect sourceBoundingRect; // @synthesize sourceBoundingRect=_sourceBoundingRect;
@property NSLayoutManager *sourceLayoutManager; // @synthesize sourceLayoutManager=_sourceLayoutManager;
@property long long sourceRangeDelta; // @synthesize sourceRangeDelta=_sourceRangeDelta;
@property (strong) NSTextStorage *sourceTextStorage; // @synthesize sourceTextStorage=_sourceTextStorage;
@property double sourceVerticalDelta; // @synthesize sourceVerticalDelta=_sourceVerticalDelta;

- (void).cxx_destruct;
- (void)_setup;
- (void)dealloc;
- (id)description;
- (void)drawAtPoint:(struct CGPoint)arg1 contentType:(unsigned long long)arg2;
- (id)init;
- (id)initWithLayoutManager:(id)arg1 characterRange:(struct _NSRange)arg2 animationType:(unsigned long long)arg3 boundingRect:(struct CGRect)arg4;

@end
