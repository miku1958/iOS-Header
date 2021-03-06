//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SharingUI/SFShareAudioBaseViewController.h>

@class NSError, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface SFShareAudioErrorViewController : SFShareAudioBaseViewController
{
    UILabel *_infoLabel;
    UILabel *_internalLabel;
    UIButton *_dismissButton;
    NSError *_error;
}

@property (strong, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property (copy, nonatomic) NSError *error; // @synthesize error=_error;
@property (strong, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property (strong, nonatomic) UILabel *internalLabel; // @synthesize internalLabel=_internalLabel;

- (void).cxx_destruct;
- (void)eventDismiss:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

