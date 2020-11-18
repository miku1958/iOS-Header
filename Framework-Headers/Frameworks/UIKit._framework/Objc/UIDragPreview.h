//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSDictionary, NSValue, UIDragPreviewParameters, UIView, _DUIPreview;

@interface UIDragPreview : NSObject <NSCopying>
{
    NSValue *_preferredAnchorPoint;
    BOOL _preventAfterScreenUpdatesSnapshot;
    BOOL _avoidAnimation;
    UIView *_view;
    UIDragPreviewParameters *_parameters;
    NSDictionary *__springboardParameters;
}

@property (readonly, nonatomic) _DUIPreview *_duiPreview;
@property (copy, nonatomic) NSDictionary *_springboardParameters; // @synthesize _springboardParameters=__springboardParameters;
@property (nonatomic) BOOL _springboardPlatterStyle;
@property (nonatomic) BOOL avoidAnimation; // @synthesize avoidAnimation=_avoidAnimation;
@property (readonly, copy, nonatomic) UIDragPreviewParameters *parameters; // @synthesize parameters=_parameters;
@property (nonatomic) struct CGPoint preferredAnchorPoint;
@property (nonatomic, getter=_preventAfterScreenUpdatesSnapshot, setter=_setPreventAfterScreenUpdatesSnapshot:) BOOL preventAfterScreenUpdatesSnapshot; // @synthesize preventAfterScreenUpdatesSnapshot=_preventAfterScreenUpdatesSnapshot;
@property (readonly, nonatomic) UIView *view; // @synthesize view=_view;

+ (struct CGSize)defaultBoundingSize;
+ (id)previewForURL:(id)arg1;
+ (id)previewForURL:(id)arg1 title:(id)arg2;
+ (struct CGSize)textBoundingSize;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithView:(id)arg1;
- (id)initWithView:(id)arg1 parameters:(id)arg2;

@end
