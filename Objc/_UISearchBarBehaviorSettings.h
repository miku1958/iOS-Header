//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

__attribute__((visibility("hidden")))
@interface _UISearchBarBehaviorSettings : PTSettings
{
    BOOL _useGenerousPadding;
    double _buttonMinimumHeight;
    double _buttonTightPadding;
    double _buttonGenerousPadding;
}

@property (nonatomic) double buttonGenerousPadding; // @synthesize buttonGenerousPadding=_buttonGenerousPadding;
@property (nonatomic) double buttonMinimumHeight; // @synthesize buttonMinimumHeight=_buttonMinimumHeight;
@property (nonatomic) double buttonTightPadding; // @synthesize buttonTightPadding=_buttonTightPadding;
@property (nonatomic) BOOL useGenerousPadding; // @synthesize useGenerousPadding=_useGenerousPadding;

+ (id)settingsControllerModule;
- (void)setDefaultValues;

@end

