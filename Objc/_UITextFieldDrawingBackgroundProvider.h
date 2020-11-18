//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UITextFieldBackgroundProvider.h>

__attribute__((visibility("hidden")))
@interface _UITextFieldDrawingBackgroundProvider : _UITextFieldBackgroundProvider
{
    struct {
        unsigned int drawsContentBasedOnTraits:1;
    } _flags;
    BOOL _drawsContent;
}

@property (nonatomic) BOOL drawsContent; // @synthesize drawsContent=_drawsContent;

- (void)_buildDescription:(id)arg1;
- (void)_setDrawsContent:(BOOL)arg1;
- (void)addToTextField:(id)arg1;
- (void)drawInBounds:(struct CGRect)arg1;
- (id)init;
- (void)removeFromTextField;
- (void)setDrawsContentBasedOnTraitsIfNeeded;
- (void)setNeedsDisplay;
- (void)traitCollectionDidChange:(id)arg1;

@end

