//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesUI/ICAttachmentBrickImageViewV2.h>

@class CALayer;

@interface ICAttachmentBrickSmallMapViewV2 : ICAttachmentBrickImageViewV2
{
    CALayer *_borderLayer;
    CALayer *_effectsLayer;
}

@property (strong, nonatomic) CALayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property (strong, nonatomic) CALayer *effectsLayer; // @synthesize effectsLayer=_effectsLayer;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setContentsScale:(double)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)updateSublayersBounds:(struct CGRect)arg1;

@end

