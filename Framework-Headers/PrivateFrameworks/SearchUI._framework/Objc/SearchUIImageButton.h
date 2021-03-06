//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class SearchUIImage;

@interface SearchUIImageButton : UIButton
{
    SearchUIImage *_unselectedImage;
    SearchUIImage *_selectedImage;
}

@property (strong, nonatomic) SearchUIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property (strong, nonatomic) SearchUIImage *unselectedImage; // @synthesize unselectedImage=_unselectedImage;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)didMoveToWindow;
- (void)tlk_updateForAppearance:(id)arg1;

@end

