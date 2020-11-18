//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIImageView, UILongPressGestureRecognizer;
@protocol _UICollectionViewListCellReorderControlDelegate;

__attribute__((visibility("hidden")))
@interface _UICollectionViewListCellReorderControl : UIView <UIGestureRecognizerDelegate>
{
    UIImageView *_imageView;
    UILongPressGestureRecognizer *_reorderRecognizer;
    BOOL _tracking;
    id<_UICollectionViewListCellReorderControlDelegate> _delegate;
    CDUnknownBlockType _grabberImageProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_UICollectionViewListCellReorderControlDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType grabberImageProvider; // @synthesize grabberImageProvider=_grabberImageProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)beginReordering;
- (void)endReordering:(BOOL)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 grabberImageProvider:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (void)moveToPoint:(struct CGPoint)arg1;
- (void)pan:(id)arg1;

@end
