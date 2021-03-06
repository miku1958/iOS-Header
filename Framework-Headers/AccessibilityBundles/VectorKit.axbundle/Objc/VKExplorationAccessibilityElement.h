//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@class AXVKExplorationVertexElement;

@interface VKExplorationAccessibilityElement : UIAccessibilityElement
{
    BOOL _isExplorationElement;
    AXVKExplorationVertexElement *_vertex;
}

@property (nonatomic) BOOL isExplorationElement; // @synthesize isExplorationElement=_isExplorationElement;
@property (strong, nonatomic) AXVKExplorationVertexElement *vertex; // @synthesize vertex=_vertex;

- (void).cxx_destruct;
- (BOOL)accessibilityActivate;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityLabel;
- (id)accessibilityPath;
- (id)accessibilityPaths;
- (id)initWithAccessibilityContainer:(id)arg1 andVertex:(id)arg2;
- (BOOL)isAccessibilityElement;
- (BOOL)isCurrent;

@end

