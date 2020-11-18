//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class UIColor, UIScreen, UITraitCollection;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionVisualStyleViewState : NSObject <NSCopying>
{
    UITraitCollection *_traitCollection;
    UIScreen *_screen;
    UIColor *_tintColor;
}

@property (readonly, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
@property (readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property (readonly, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;

- (void).cxx_destruct;
- (void)_collectStateFromScreen:(id)arg1;
- (void)_collectStateFromView:(id)arg1;
- (void)_collectStateFromVisualStyleViewState:(id)arg1;
- (BOOL)_stateEqualToVisualStyleViewState:(id)arg1;
- (id)copyWithScreen:(id)arg1;
- (id)copyWithTraitCollection:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (id)initWithPropertiesFromTopLevelView:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

