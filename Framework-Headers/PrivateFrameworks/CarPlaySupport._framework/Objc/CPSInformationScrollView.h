//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSMutableArray;
@protocol CPSInformationScrollViewDelegate;

@interface CPSInformationScrollView : UIScrollView
{
    id<CPSInformationScrollViewDelegate> _scrollviewDelegate;
    NSMutableArray *_focusWaypoints;
}

@property (strong, nonatomic) NSMutableArray *focusWaypoints; // @synthesize focusWaypoints=_focusWaypoints;
@property (weak, nonatomic) id<CPSInformationScrollViewDelegate> scrollviewDelegate; // @synthesize scrollviewDelegate=_scrollviewDelegate;

- (void).cxx_destruct;
- (void)setContentSize:(struct CGSize)arg1;

@end

