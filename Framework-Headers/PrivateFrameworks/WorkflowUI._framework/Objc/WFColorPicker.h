//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <WorkflowUI/UICollectionViewDataSource-Protocol.h>
#import <WorkflowUI/UICollectionViewDelegate-Protocol.h>

@class NSArray, NSString, UICollectionView, WFColor;
@protocol WFColorPickerDelegate;

@interface WFColorPicker : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    WFColor *_selectedColor;
    id<WFColorPickerDelegate> _delegate;
    NSArray *_colors;
    NSArray *_colorNames;
    UICollectionView *_colorCollectionView;
}

@property (strong, nonatomic) UICollectionView *colorCollectionView; // @synthesize colorCollectionView=_colorCollectionView;
@property (strong, nonatomic) NSArray *colorNames; // @synthesize colorNames=_colorNames;
@property (strong, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WFColorPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) WFColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;

@end
