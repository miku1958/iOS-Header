//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PlatterKit/PLTitledPlatterView.h>

@protocol WFCompactTitledPlatterViewDelegate;

@interface WFCompactTitledPlatterView : PLTitledPlatterView
{
    id<WFCompactTitledPlatterViewDelegate> _delegate;
}

@property (weak, nonatomic) id<WFCompactTitledPlatterViewDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFitsContentWithSize:(struct CGSize)arg1;

@end

