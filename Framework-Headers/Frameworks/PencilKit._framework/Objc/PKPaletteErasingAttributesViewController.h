//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/PKPaletteAttributeViewController.h>

@protocol PKPaletteErasingAttributesViewControllerDelegate;

@interface PKPaletteErasingAttributesViewController : PKPaletteAttributeViewController
{
    id<PKPaletteErasingAttributesViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id<PKPaletteErasingAttributesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) long long eraserType;

+ (double)_preferredContentSizeWidth;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)_segmentedControlDidChangeValue:(id)arg1;
- (void)loadView;
- (struct CGSize)preferredContentSize;

@end

