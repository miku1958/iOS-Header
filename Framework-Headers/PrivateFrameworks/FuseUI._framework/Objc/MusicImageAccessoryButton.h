//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface MusicImageAccessoryButton : UIButton
{
    double _tallestFontDescender;
    BOOL _shouldBaselineAlignTrailingAccessoryImage;
    struct UIOffset _trailingAccessoryOffset;
}

@property (nonatomic) BOOL shouldBaselineAlignTrailingAccessoryImage; // @synthesize shouldBaselineAlignTrailingAccessoryImage=_shouldBaselineAlignTrailingAccessoryImage;
@property (nonatomic) struct UIOffset trailingAccessoryOffset; // @synthesize trailingAccessoryOffset=_trailingAccessoryOffset;

- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)music_configureControlWithTextDescriptor:(id)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;

@end

