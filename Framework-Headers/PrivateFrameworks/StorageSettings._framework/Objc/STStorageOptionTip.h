//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StorageSettings/STStorageTip.h>

@class NSObject, NSString;
@protocol STStorageOptionTipDelegate;

@interface STStorageOptionTip : STStorageTip
{
    BOOL _mayCauseDataLoss;
    NSObject<STStorageOptionTipDelegate> *_delegate;
    NSString *_confirmationText;
    NSString *_confirmationButtonTitle;
}

@property (strong, nonatomic) NSString *activatingString;
@property (nonatomic) float activationPercent;
@property (strong) NSString *confirmationButtonTitle; // @synthesize confirmationButtonTitle=_confirmationButtonTitle;
@property (strong) NSString *confirmationText; // @synthesize confirmationText=_confirmationText;
@property (weak) NSObject<STStorageOptionTipDelegate> *delegate; // @synthesize delegate=_delegate;
@property (strong) NSString *enableButtonTitle;
@property (nonatomic) long long eventualGain;
@property (nonatomic) long long immediateGain;
@property BOOL mayCauseDataLoss; // @synthesize mayCauseDataLoss=_mayCauseDataLoss;

- (void).cxx_destruct;
- (void)enableOption;
- (id)getValue:(id)arg1;
- (id)init;
- (void)setValue:(id)arg1 specifier:(id)arg2;

@end

