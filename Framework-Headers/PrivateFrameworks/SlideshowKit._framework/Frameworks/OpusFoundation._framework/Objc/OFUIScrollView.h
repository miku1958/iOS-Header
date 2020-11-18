//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSMutableArray, OFUIViewController;

@interface OFUIScrollView : UIScrollView
{
    OFUIViewController *_viewControllerProxy;
    NSMutableArray *_draggingPasteboardTypes;
}

@property (nonatomic) OFUIViewController *viewControllerProxy; // @synthesize viewControllerProxy=_viewControllerProxy;

- (void)commonInit;
- (void)dealloc;
- (id)draggingPasteboardTypes;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)registerDraggingPasteboardType:(id)arg1;
- (void)unregisterAllDraggingPasteboardType;

@end

