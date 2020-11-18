//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface UIAccessibilityOpaqueFocusState : NSObject
{
    BOOL _hasFocus;
    BOOL _hasBeenReused;
    id _element;
    UIView *_reusableView;
    struct CGRect _sceneRelativeFrame;
}

@property (nonatomic) id element; // @synthesize element=_element;
@property (nonatomic) BOOL hasBeenReused; // @synthesize hasBeenReused=_hasBeenReused;
@property (nonatomic) BOOL hasFocus; // @synthesize hasFocus=_hasFocus;
@property (strong, nonatomic) UIView *reusableView; // @synthesize reusableView=_reusableView;
@property (nonatomic) struct CGRect sceneRelativeFrame; // @synthesize sceneRelativeFrame=_sceneRelativeFrame;

- (void)dealloc;
- (id)description;

@end
