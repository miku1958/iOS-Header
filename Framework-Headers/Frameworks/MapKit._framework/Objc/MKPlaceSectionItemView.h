//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKViewWithHairline.h>

@interface MKPlaceSectionItemView : MKViewWithHairline
{
    BOOL _fullWidthHairline;
}

@property (nonatomic, getter=isHairlineFullWidth) BOOL fullWidthHairline; // @synthesize fullWidthHairline=_fullWidthHairline;

- (void)_updateHairlineInsets;
- (void)didMoveToWindow;
- (void)infoCardThemeChanged;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutMarginsDidChange;
- (void)traitCollectionDidChange:(id)arg1;

@end

