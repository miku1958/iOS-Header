//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface PBBridgeBarcodeScannerView : UIView
{
    BOOL _canUseCamera;
    BOOL _isRunning;
    id _delegate;
}

@property (readonly, nonatomic) BOOL canUseCamera; // @synthesize canUseCamera=_canUseCamera;
@property (nonatomic) id delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) BOOL isRunning; // @synthesize isRunning=_isRunning;

- (id)initWithDelegate:(id)arg1;

@end

