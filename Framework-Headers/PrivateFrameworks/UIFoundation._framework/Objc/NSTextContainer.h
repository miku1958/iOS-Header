//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSSecureCoding-Protocol.h>
#import <UIFoundation/NSTextLayoutOrientationProvider-Protocol.h>

@class NSArray, NSDictionary, NSLayoutManager, NSTextLayoutManager, UIView;
@protocol NSTextContainerView;

@interface NSTextContainer : NSObject <NSSecureCoding, NSTextLayoutOrientationProvider>
{
    NSLayoutManager *_layoutManager;
    UIView<NSTextContainerView> *_textView;
    struct CGSize _size;
    double _lineFragmentPadding;
    unsigned long long _maximumLines;
    struct __tcFlags {
        unsigned int widthTracksTextView:1;
        unsigned int heightTracksTextView:1;
        unsigned int observingFrameChanges:1;
        unsigned int lineBreakMode:4;
        unsigned int oldAPI:1;
        unsigned int _reserved:8;
    } _tcFlags;
    NSTextLayoutManager *_textLayoutManager;
    NSArray *_exclusionPaths;
    struct CGPath *_cachedBoundingPath;
    struct __CFArray *_cachedClippingAttributes;
    struct __CFArray *_cachedBounds;
    double _cacheBoundsMinY;
    double _cacheBoundsMaxY;
    double _minimumWidth;
    long long _layoutOrientation;
    NSDictionary *_attributesForExtraLineFragment;
    long long _applicationFrameworkContext;
    BOOL _textViewSupportsAdaptiveColor;
}

@property (copy, nonatomic) NSArray *exclusionPaths;
@property (nonatomic) BOOL heightTracksTextView;
@property (nonatomic) NSLayoutManager *layoutManager;
@property (readonly, nonatomic) long long layoutOrientation; // @dynamic layoutOrientation;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) double lineFragmentPadding;
@property (nonatomic) unsigned long long maximumNumberOfLines;
@property (readonly, nonatomic, getter=isSimpleRectangularTextContainer) BOOL simpleRectangularTextContainer;
@property (nonatomic) struct CGSize size;
@property (nonatomic) BOOL widthTracksTextView;

+ (void)initialize;
+ (BOOL)supportsSecureCoding;
- (void)_commonInit;
- (BOOL)_containerObservesTextViewFrameChanges;
- (void)_containerTextViewFrameChanged:(id)arg1;
- (void)_resizeAccordingToTextView:(id)arg1;
- (id)attributesForExtraLineFragment;
- (struct CGSize)containerSize;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (void)coordinateAccess:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainerSize:(struct CGSize)arg1;
- (id)initWithSize:(struct CGSize)arg1;
- (void)invalidateTextContainerOrigin;
- (struct CGRect)lineFragmentRectForProposedRect:(struct CGRect)arg1 atIndex:(unsigned long long)arg2 writingDirection:(long long)arg3 remainingRect:(struct CGRect *)arg4;
- (struct CGRect)lineFragmentRectForProposedRect:(struct CGRect)arg1 remainingRect:(struct CGRect *)arg2;
- (id)markedTextAttributesAtCharacterIndex:(long long)arg1 effectiveRange:(out struct _NSRange *)arg2;
- (double)minimumLineFragmentWidth;
- (id)renderingColorForDocumentColor:(id)arg1;
- (void)replaceLayoutManager:(id)arg1;
- (id)selectedTextAttributes;
- (void)setAttributesForExtraLineFragment:(id)arg1;
- (void)setContainerSize:(struct CGSize)arg1;
- (void)setLayoutOrientation:(long long)arg1;
- (void)setMinimumLineFragmentWidth:(double)arg1;
- (void)setTextLayoutManager:(id)arg1;
- (void)setTextView:(id)arg1;
- (struct NSEdgeInsets)textContainerInsetsForView:(id)arg1;
- (struct NSEdgeInsets)textContainerInsetsForView_iOS:(id)arg1;
- (struct CGPoint)textContainerOrigin;
- (id)textLayoutManager;
- (id)textView;

@end
