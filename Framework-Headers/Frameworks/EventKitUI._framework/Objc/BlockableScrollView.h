//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSObject;
@protocol BlockableScrollViewDelegate;

@interface BlockableScrollView : UIScrollView
{
    BOOL _isResizing;
    NSObject<BlockableScrollViewDelegate> *_blockableDelegate;
}

@property (weak, nonatomic) NSObject<BlockableScrollViewDelegate> *blockableDelegate; // @synthesize blockableDelegate=_blockableDelegate;
@property (nonatomic) BOOL isResizing; // @synthesize isResizing=_isResizing;

- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end
