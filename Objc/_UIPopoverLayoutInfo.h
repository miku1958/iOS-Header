//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIPopoverLayoutInfo : NSObject <NSCopying>
{
    struct UIEdgeInsets _contentInset;
    double _arrowHeight;
    double _arrowOffset;
    struct CGSize _preferredContentSize;
    unsigned long long _preferredArrowDirections;
    struct CGRect _containingFrame;
    struct UIEdgeInsets _containingFrameInsets;
    struct CGRect _sourceViewRect;
    BOOL _canOverlapSourceViewRect;
    struct CGRect _frame;
    double _offset;
    unsigned long long _arrowDirection;
    BOOL _preferLandscapeOrientations;
    BOOL _updatesEnabled;
    NSMutableArray *_candidates;
}

@property (readonly, nonatomic) unsigned long long arrowDirection; // @synthesize arrowDirection=_arrowDirection;
@property (nonatomic) double arrowHeight; // @synthesize arrowHeight=_arrowHeight;
@property (nonatomic) double arrowOffset; // @synthesize arrowOffset=_arrowOffset;
@property (nonatomic) BOOL canOverlapSourceViewRect; // @synthesize canOverlapSourceViewRect=_canOverlapSourceViewRect;
@property (nonatomic) struct CGRect containingFrame; // @synthesize containingFrame=_containingFrame;
@property (nonatomic) struct UIEdgeInsets containingFrameInsets; // @synthesize containingFrameInsets=_containingFrameInsets;
@property (nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property (readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property (readonly, nonatomic) double offset; // @synthesize offset=_offset;
@property (nonatomic) BOOL preferLandscapeOrientations; // @synthesize preferLandscapeOrientations=_preferLandscapeOrientations;
@property (nonatomic) unsigned long long preferredArrowDirections; // @synthesize preferredArrowDirections=_preferredArrowDirections;
@property (nonatomic) struct CGSize preferredContentSize; // @synthesize preferredContentSize=_preferredContentSize;
@property (nonatomic) struct CGRect sourceViewRect; // @synthesize sourceViewRect=_sourceViewRect;
@property (nonatomic, getter=_updatesEnabled, setter=_setUpdatesEnabled:) BOOL updatesEnabled; // @synthesize updatesEnabled=_updatesEnabled;

+ (id)_observationKeys;
- (void).cxx_destruct;
- (struct CGSize)_popoverViewSizeForContentSize:(struct CGSize)arg1 arrowDirection:(unsigned long long)arg2;
- (void)_updateOutputs;
- (id)candidates;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateProperties:(CDUnknownBlockType)arg1;

@end

