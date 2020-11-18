//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSError, NSString, NSURL;

@interface MMCSSimpleFile : NSObject
{
    int _fd;
    double _progress;
    NSString *_authToken;
    long long _encryptionBehavior;
    NSString *_localPath;
    NSURL *_requestURL;
    NSString *_requestorID;
    NSString *_guid;
    unsigned long long _itemID;
    NSData *_signature;
    NSData *_fileHash;
    unsigned long long _protocolFileSize;
    NSError *_mmcsError;
    NSData *_authResponseData;
}

@property (strong) NSData *authResponseData; // @synthesize authResponseData=_authResponseData;
@property (strong) NSString *authToken; // @synthesize authToken=_authToken;
@property long long encryptionBehavior; // @synthesize encryptionBehavior=_encryptionBehavior;
@property int fd; // @synthesize fd=_fd;
@property (strong) NSData *fileHash; // @synthesize fileHash=_fileHash;
@property (strong) NSString *guid; // @synthesize guid=_guid;
@property unsigned long long itemID; // @synthesize itemID=_itemID;
@property (strong) NSString *localPath; // @synthesize localPath=_localPath;
@property (strong, setter=setMMCSError:) NSError *mmcsError; // @synthesize mmcsError=_mmcsError;
@property double progress; // @synthesize progress=_progress;
@property unsigned long long protocolFileSize; // @synthesize protocolFileSize=_protocolFileSize;
@property (strong) NSURL *requestURL; // @synthesize requestURL=_requestURL;
@property (strong) NSString *requestorID; // @synthesize requestorID=_requestorID;
@property (strong) NSData *signature; // @synthesize signature=_signature;

- (void)dealloc;
- (id)description;
- (id)init;

@end

