//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUpNextBaseCell.h>

@interface NTKUpNextPhotoCell : NTKUpNextBaseCell
{
    struct CGSize _scaledImageSize;
    struct CGRect _facesRect;
    double _aspectRatio;
    BOOL _wantsFullCellPhoto;
}

- (void)configureWithContent:(id)arg1;
- (void)layoutSubviews;
- (id)transitionContextInView:(id)arg1;

@end

