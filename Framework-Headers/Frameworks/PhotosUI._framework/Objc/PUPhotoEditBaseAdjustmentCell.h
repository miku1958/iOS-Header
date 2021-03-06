//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, PUPhotoEditAdjustmentControl;

__attribute__((visibility("hidden")))
@interface PUPhotoEditBaseAdjustmentCell : UICollectionViewCell
{
    NSString *_imageName;
    BOOL _enabled;
    BOOL _isUserModifying;
    PUPhotoEditAdjustmentControl *_containerButton;
}

@property (strong, nonatomic) PUPhotoEditAdjustmentControl *containerButton; // @synthesize containerButton=_containerButton;
@property (nonatomic) double defaultValue;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (nonatomic) double identityValue;
@property (strong, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property (nonatomic) BOOL isUserModifying; // @synthesize isUserModifying=_isUserModifying;
@property (nonatomic) double maxValue;
@property (nonatomic) double minValue;
@property (nonatomic) double value;

- (void).cxx_destruct;
- (void)_setupContainerButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)resetToDefault;
- (void)setSelected:(BOOL)arg1;

@end

