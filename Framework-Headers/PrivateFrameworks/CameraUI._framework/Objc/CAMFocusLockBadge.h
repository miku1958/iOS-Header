//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraEditKit/CEKBadgeTextView.h>

@interface CAMFocusLockBadge : CEKBadgeTextView
{
    BOOL _focusLocked;
    BOOL _exposureLocked;
}

@property (nonatomic, getter=isExposureLocked) BOOL exposureLocked; // @synthesize exposureLocked=_exposureLocked;
@property (nonatomic, getter=isFocusLocked) BOOL focusLocked; // @synthesize focusLocked=_focusLocked;

- (void)_updateText;
- (id)initWithFrame:(struct CGRect)arg1;

@end
