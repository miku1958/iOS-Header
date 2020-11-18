//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKController, AKHighlightAnnotation;

@interface AKHighlightAnnotationController : NSObject
{
    AKController *_controller;
    AKHighlightAnnotation *_continuousHighlight;
}

@property (strong) AKHighlightAnnotation *continuousHighlight; // @synthesize continuousHighlight=_continuousHighlight;
@property (weak) AKController *controller; // @synthesize controller=_controller;

- (void).cxx_destruct;
- (BOOL)_adaptExistingHighlightsToNewHighlight:(id)arg1 onPageController:(id)arg2 firstModifiedHighlight:(id *)arg3;
- (BOOL)_clearHighlightsWithStyleMatchingMask:(unsigned long long)arg1 except:(id)arg2 inRange:(struct _NSRange)arg3 onPageController:(id)arg4;
- (id)_createHighlightAnnotationWithAttributeTag:(long long)arg1;
- (id)_highlightsInCharacterIndexRange:(struct _NSRange)arg1 onPageController:(id)arg2;
- (void)beginContinuousHighlighting;
- (void)clearHighlightsWithinSelection;
- (void)continueHighlighting;
- (void)endContinuousHighlighting;
- (id)highlightsWithinSelection;
- (id)initWithController:(id)arg1;
- (void)performOneShotHighlightWithAttributeTag:(long long)arg1;

@end
