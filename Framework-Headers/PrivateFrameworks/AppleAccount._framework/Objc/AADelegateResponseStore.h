//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AADelegateResponseStore : NSObject
{
}

+ (void)_saveKeychainItem:(id)arg1 forUsername:(id)arg2 service:(id)arg3 itemDescription:(id)arg4;
+ (id)responseAndTokenRuntimeStore;
+ (void)restoreFinished;
+ (void)saveiCloudResponseParameters:(id)arg1;
+ (void)saveiCloudToken:(id)arg1 hsaToken:(id)arg2 fmipToken:(id)arg3 faceTimeToken:(id)arg4 madridToken:(id)arg5 gameCenterToken:(id)arg6;

@end

