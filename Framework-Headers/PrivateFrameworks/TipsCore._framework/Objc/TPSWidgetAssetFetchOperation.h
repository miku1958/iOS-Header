//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TipsCore/TPSAsyncOperation.h>

@class NSURL, TPSTip, TPSWidgetController;

@interface TPSWidgetAssetFetchOperation : TPSAsyncOperation
{
    TPSWidgetController *_widgetController;
    TPSTip *_widgetTip;
    NSURL *_lightAssetURL;
    NSURL *_darkAssetURL;
}

@property (strong, nonatomic) NSURL *darkAssetURL; // @synthesize darkAssetURL=_darkAssetURL;
@property (strong, nonatomic) NSURL *lightAssetURL; // @synthesize lightAssetURL=_lightAssetURL;
@property (readonly, weak, nonatomic) TPSWidgetController *widgetController; // @synthesize widgetController=_widgetController;
@property (readonly, nonatomic) TPSTip *widgetTip; // @synthesize widgetTip=_widgetTip;

- (void).cxx_destruct;
- (id)initWithTip:(id)arg1 widgetController:(id)arg2;
- (void)main;

@end
