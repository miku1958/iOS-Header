//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UISettings.h>

__attribute__((visibility("hidden")))
@interface _UIScreenEdgePanRecognizerCornerSettings : _UISettings
{
    double _cornerSize;
    double _cornerAngleWindow;
}

@property (nonatomic) double cornerAngleWindow; // @synthesize cornerAngleWindow=_cornerAngleWindow;
@property (nonatomic) double cornerAngleWindowDegreees;
@property (nonatomic) double cornerSize; // @synthesize cornerSize=_cornerSize;

+ (id)keyPathsForValuesAffectingCornerAngleWindowDegreees;
+ (id)settingsControllerModule;
- (void)setDefaultValues;

@end

