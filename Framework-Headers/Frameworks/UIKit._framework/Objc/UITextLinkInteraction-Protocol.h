//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol UITextLinkInteraction
- (void)cancelInteractionWithLink;
- (BOOL)isInteractingWithLink;
- (BOOL)mightHaveLinks;
- (void)startInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)startLongInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)tapLinkAtPoint:(struct CGPoint)arg1;
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint)arg1;
- (BOOL)willInteractWithLinkAtPoint:(struct CGPoint)arg1;

@optional
- (void)_requestTextItemConstrainedToLineAtPoint:(struct CGPoint)arg1 resultHandler:(void (^)(struct CGRect, BOOL))arg2;
- (BOOL)interactionDidStartWithLinkAtPoint:(struct CGPoint)arg1;
@end
