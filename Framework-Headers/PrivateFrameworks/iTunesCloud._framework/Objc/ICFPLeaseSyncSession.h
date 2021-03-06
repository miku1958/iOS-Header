//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICFPLeaseSyncSession : NSObject
{
    unsigned int _mediaKind;
    unsigned long long _accountID;
    id _leaseID;
}

@property (readonly, nonatomic) unsigned long long accountID; // @synthesize accountID=_accountID;
@property (readonly, nonatomic) id leaseID; // @synthesize leaseID=_leaseID;
@property (readonly, nonatomic) unsigned int mediaKind; // @synthesize mediaKind=_mediaKind;

+ (id)leaseSyncSessionWithID:(id)arg1 accountID:(unsigned long long)arg2 mediaKind:(unsigned int)arg3 returningLeaseSyncRequestData:(id *)arg4 error:(id *)arg5;
- (void).cxx_destruct;
- (BOOL)endLeaseSyncAndReturnError:(id *)arg1;
- (BOOL)getLeaseSyncRenewRequestData:(id *)arg1 error:(id *)arg2;
- (BOOL)importLeaseSyncResponseData:(id)arg1 error:(id *)arg2;
- (BOOL)processRenewResponseData:(id)arg1 error:(id *)arg2;

@end

