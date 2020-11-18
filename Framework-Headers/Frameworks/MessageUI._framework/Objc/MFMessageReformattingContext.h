//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DOMDocument, DOMNode, DOMRange, NSArray, NSMutableArray;

@interface MFMessageReformattingContext : NSObject
{
    DOMDocument *_document;
    DOMNode *_body;
    NSMutableArray *_changes;
    double _maximumWidth;
    double _meanWidth;
    double _widthDeviation;
    BOOL _hasAnyLeftFloat;
    BOOL _containsUnknownImageDimensions;
    NSArray *_rightFloats;
    NSArray *_potentialEdgeToEdgeNodes;
    BOOL _floatsNeedUpdate;
    BOOL _metricsNeedUpdate;
    BOOL _documentContainsAnyWebKitTransform;
    double _minimumRescalingFactor;
    DOMRange *_firstTextRange;
    struct UIEdgeInsets _basePadding;
}

@property (nonatomic) struct UIEdgeInsets basePadding; // @synthesize basePadding=_basePadding;
@property (readonly, nonatomic) DOMNode *body;
@property (readonly, nonatomic) BOOL containsUnknownImageDimensions;
@property (readonly, nonatomic) BOOL didChangeDocument;
@property (readonly, nonatomic) DOMDocument *document;
@property (strong, nonatomic) DOMRange *firstTextRange; // @synthesize firstTextRange=_firstTextRange;
@property (readonly, nonatomic) BOOL hasAnyLeftFloat;
@property (readonly, nonatomic) BOOL hasAnyRightFloat;
@property (readonly, nonatomic) double maximumWidth;
@property (readonly, nonatomic) double meanWidth;
@property (nonatomic) double minimumRescalingFactor; // @synthesize minimumRescalingFactor=_minimumRescalingFactor;
@property (readonly, copy, nonatomic) NSArray *potentialEdgeToEdgeNodes;
@property (readonly, copy, nonatomic) NSArray *rightFloats;
@property (readonly, nonatomic) double widthDeviation;

- (void)_rollBackChange:(id)arg1;
- (void)_updateFloatsIfNecessary;
- (void)_updateMetricsIfNecessary;
- (struct CGRect)boundingBoxOf:(id)arg1;
- (BOOL)changeMarginOfElement:(id)arg1 priority:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)changeProprety:(id)arg1 ofElement:(id)arg2 toValue:(id)arg3 priority:(id)arg4;
- (BOOL)changeSizeOfElement:(id)arg1 priority:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;
- (BOOL)rescaleElement:(id)arg1 withScale:(double)arg2;
- (BOOL)resizeElement:(id)arg1 withScale:(double)arg2 verificationBlock:(CDUnknownBlockType)arg3;
- (void)rollBackAllChanges;
- (void)rollBackLastChangeForElement:(id)arg1;

@end
