//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface CANodeButton : UIButton
{
    BOOL hasLabel;
    NSURL *_url;
}

@property BOOL hasLabel;
@property (strong) NSURL *url; // @synthesize url=_url;

- (id)init;
- (void)layoutSubviews;

@end
