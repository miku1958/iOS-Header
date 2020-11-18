//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDFetchWebAuthTokenOperation : CKDDatabaseOperation
{
    NSString *_webAuthToken;
    NSString *_APIToken;
}

@property (copy, nonatomic) NSString *APIToken; // @synthesize APIToken=_APIToken;
@property (copy, nonatomic) NSString *webAuthToken; // @synthesize webAuthToken=_webAuthToken;

- (void).cxx_destruct;
- (unsigned long long)activityStart;
- (void)fillOutOperationResult:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (Class)operationResultClass;

@end

