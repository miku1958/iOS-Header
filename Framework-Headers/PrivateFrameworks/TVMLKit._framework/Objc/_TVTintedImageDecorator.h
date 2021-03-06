//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVImageScaleDecorator.h>

@class IKColor;

__attribute__((visibility("hidden")))
@interface _TVTintedImageDecorator : TVImageScaleDecorator
{
    IKColor *_tintColor;
}

@property (readonly, strong, nonatomic) IKColor *tintColor; // @synthesize tintColor=_tintColor;

- (void).cxx_destruct;
- (id)decoratorIdentifier;
- (void)drawInContext:(id)arg1 imageRect:(struct CGRect)arg2;
- (id)initWithTintColor:(id)arg1;

@end

