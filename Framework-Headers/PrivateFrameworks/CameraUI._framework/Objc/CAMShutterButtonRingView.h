//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface CAMShutterButtonRingView : UIView
{
    BOOL _showContrastBorder;
    struct CAMShutterButtonSpec _spec;
}

@property (nonatomic) BOOL showContrastBorder; // @synthesize showContrastBorder=_showContrastBorder;
@property (nonatomic) struct CAMShutterButtonSpec spec; // @synthesize spec=_spec;

- (void)drawRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithSpec:(struct CAMShutterButtonSpec)arg1;

@end

