//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/CALayerDelegate-Protocol.h>

@class NSArray, __UITextTiledLayer;

@protocol _UITextTiledLayerDelegate <CALayerDelegate>

@optional
- (struct CGRect)_textTiledLayer:(__UITextTiledLayer *)arg1 constrainTileableBounds:(struct CGRect)arg2;
- (NSArray *)_textTiledLayer:(__UITextTiledLayer *)arg1 maskedRectsInVisibleRect:(struct CGRect)arg2;
@end

