//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class UITraitCollection, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectEnvironment : NSObject <NSCopying>
{
    BOOL _allowsDithering;
    BOOL _allowsBlurring;
    BOOL _useSimpleVibrancy;
    BOOL _reducedTransperancy;
    UIVisualEffectView *_effectView;
    UITraitCollection *_traitCollection;
}

@property (nonatomic) BOOL allowsBlurring; // @synthesize allowsBlurring=_allowsBlurring;
@property (nonatomic) BOOL allowsDithering; // @synthesize allowsDithering=_allowsDithering;
@property (readonly, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property (nonatomic) BOOL reducedTransperancy; // @synthesize reducedTransperancy=_reducedTransperancy;
@property (copy, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property (nonatomic) BOOL useSimpleVibrancy; // @synthesize useSimpleVibrancy=_useSimpleVibrancy;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithHost:(id)arg1;

@end

