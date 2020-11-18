//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFViewControllerPrivate;

@interface PDFViewController : NSObject
{
    PDFViewControllerPrivate *_private;
}

- (void).cxx_destruct;
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 toPageView:(id)arg2;
- (void)_prepareHandleSelection;
- (void)_updateHandleSelection;
- (void)_updateWordSelectionForPage:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)clearSelectionState;
- (int)didTapSelectionHandlersForGesture:(id)arg1;
- (id)initWithView:(id)arg1;
- (BOOL)isSelectingText;
- (void)scrollViewDidEndDecelerating;
- (void)showMenu:(BOOL)arg1;
- (void)touchLongDown:(id)arg1;
- (void)touchLongMoved:(id)arg1;
- (void)touchLongUp:(id)arg1;
- (void)touchPan:(id)arg1;
- (void)touchSwipe:(id)arg1;
- (void)touchTap:(id)arg1;

@end

