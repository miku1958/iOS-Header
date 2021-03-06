//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKServerChangeToken, NSArray;
@protocol OS_os_transaction;

@interface AXSSCloudData : NSObject
{
    CKServerChangeToken *_serverChangeToken;
    NSArray *_recordsToUpdate;
    NSArray *_recordIDsToDelete;
    NSObject<OS_os_transaction> *_openTransaction;
}

@property (strong, nonatomic) NSObject<OS_os_transaction> *openTransaction; // @synthesize openTransaction=_openTransaction;
@property (strong, nonatomic) NSArray *recordIDsToDelete; // @synthesize recordIDsToDelete=_recordIDsToDelete;
@property (strong, nonatomic) NSArray *recordsToUpdate; // @synthesize recordsToUpdate=_recordsToUpdate;
@property (strong, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;

- (void).cxx_destruct;

@end

