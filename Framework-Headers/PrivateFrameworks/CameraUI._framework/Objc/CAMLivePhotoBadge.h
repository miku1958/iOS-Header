//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMBadgeTextView.h>

@interface CAMLivePhotoBadge : CAMBadgeTextView
{
    long long _irisMode;
}

@property (nonatomic) long long irisMode; // @synthesize irisMode=_irisMode;

- (double)_cornerRadius;
- (id)_text;
- (id)_textAttributes;
- (struct UIEdgeInsets)_textInsets;
- (void)_updateFromIrisModeChange;

@end
