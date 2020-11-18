//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol MCDErrorViewDelegate;

@interface MCDErrorLoadingView : UIView
{
    BOOL _shouldEnableNetwork;
    id<MCDErrorViewDelegate> _delegate;
}

@property (weak, nonatomic) id<MCDErrorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL shouldEnableNetwork; // @synthesize shouldEnableNetwork=_shouldEnableNetwork;

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 buttonText:(id)arg2;
- (void)retryButtonPressed:(id)arg1;

@end

