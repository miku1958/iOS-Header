//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUImageModifier.h>

@interface SUFrameAdjustmentImageModifier : SUImageModifier
{
    BOOL _shouldSizeDownToFit;
    unsigned long long _sizingMask;
}

@property (nonatomic) BOOL shouldSizeDownToFit; // @synthesize shouldSizeDownToFit=_shouldSizeDownToFit;
@property (nonatomic) unsigned long long sizingMask; // @synthesize sizingMask=_sizingMask;

- (struct CGRect)imageFrameForImage:(id)arg1 currentFrame:(struct CGRect)arg2 finalSize:(struct CGSize)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)scalesImage;

@end
