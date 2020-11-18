//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASTask.h>

@class NSArray;

@interface ASGetOptionsTask : ASTask
{
    NSArray *_versionArray;
    NSArray *_commandArray;
}

+ (void)__setUsePort:(BOOL)arg1;
- (void).cxx_destruct;
- (BOOL)_shouldSendAuthForRequest:(id)arg1;
- (id)_url;
- (id)commandArray;
- (int)commandCode;
- (void)finishWithError:(id)arg1;
- (id)httpMethod;
- (BOOL)processContext:(id)arg1;
- (id)requestBody;
- (BOOL)requiresEASVersionInformaton;
- (void)setCommandArray:(id)arg1;
- (void)setVersionArray:(id)arg1;
- (BOOL)shouldStallAfterConnectionLost;
- (id)versionArray;

@end

