//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/_UITextTiledLayerDelegate-Protocol.h>

@class NSArray, NSMutableSet, NSString;
@protocol _UITextFieldContentViewContext;

__attribute__((visibility("hidden")))
@interface _UITextFieldContentView : UIView <_UITextTiledLayerDelegate>
{
    NSMutableSet *_ghostedRanges;
    NSArray *_maskedRects;
    id<_UITextFieldContentViewContext> _context;
}

@property (readonly, weak, nonatomic) id<_UITextFieldContentViewContext> context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)layerClass;
- (void).cxx_destruct;
- (id)_textTiledLayer:(id)arg1 maskedRectsInRect:(struct CGRect)arg2;
- (void)addGhostedRange:(struct _NSRange)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;
- (id)initWithContentContext:(id)arg1;
- (id)layer;
- (void)removeAllGhostedRanges;
- (void)setNeedsLayout;

@end

