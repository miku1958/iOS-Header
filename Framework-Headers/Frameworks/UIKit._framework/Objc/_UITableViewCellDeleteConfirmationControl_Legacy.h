//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UITableViewCellDeleteConfirmationControl_Legacy : UIControl
{
    NSString *_title;
}

@property (readonly, nonatomic) struct CGSize size;
@property (readonly, nonatomic) NSString *title;

+ (id)_backgroundImage;
+ (id)_highlightedBackgroundImage;
+ (struct CGSize)defaultSizeForTitle:(id)arg1;
- (void).cxx_destruct;
- (void)drawBackgroundInRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithTitle:(id)arg1;
- (void)setBackgroundColor:(id)arg1;

@end

