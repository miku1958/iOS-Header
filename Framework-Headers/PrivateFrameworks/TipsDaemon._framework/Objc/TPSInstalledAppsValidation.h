//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TipsDaemon/TPSTargetingValidation.h>

@class TPSInstalledAppInfo;

@interface TPSInstalledAppsValidation : TPSTargetingValidation
{
    TPSInstalledAppInfo *_appInfo;
}

@property (strong, nonatomic) TPSInstalledAppInfo *appInfo; // @synthesize appInfo=_appInfo;

- (void).cxx_destruct;
- (id)description;
- (id)initWithInstalledAppInfo:(id)arg1;
- (void)validateWithCompletion:(CDUnknownBlockType)arg1;

@end

