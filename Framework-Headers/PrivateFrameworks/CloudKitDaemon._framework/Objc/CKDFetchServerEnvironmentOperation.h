//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDOperation.h>

__attribute__((visibility("hidden")))
@interface CKDFetchServerEnvironmentOperation : CKDOperation
{
    long long _environment;
}

@property (nonatomic) long long environment; // @synthesize environment=_environment;

- (unsigned long long)activityStart;
- (void)fillOutOperationResult:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (Class)operationResultClass;
- (BOOL)shouldCheckAppVersion;

@end
