//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface QLThumbnailView : UIView
{
    BOOL _alwaysVisible;
    UIImage *_image;
    long long _pageNumber;
    struct CGRect _unselectedFrame;
}

@property BOOL alwaysVisible; // @synthesize alwaysVisible=_alwaysVisible;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property struct CGRect unselectedFrame; // @synthesize unselectedFrame=_unselectedFrame;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end

