//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUImageModifier.h>

@class UIColor;

@interface SUStrokeEdgesImageModifier : SUImageModifier
{
    struct UIEdgeInsets _edgeInsets;
    BOOL _fitToImage;
    UIColor *_strokeColor;
    BOOL _strokeCurrentPath;
}

@property (nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property (nonatomic) BOOL fitToImage; // @synthesize fitToImage=_fitToImage;
@property (strong, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property (nonatomic) BOOL strokeCurrentPath; // @synthesize strokeCurrentPath=_strokeCurrentPath;

- (void)dealloc;
- (void)drawAfterImageForContext:(struct CGContext *)arg1 imageFrame:(struct CGRect)arg2 finalSize:(struct CGSize)arg3;
- (BOOL)isEqual:(id)arg1;

@end

