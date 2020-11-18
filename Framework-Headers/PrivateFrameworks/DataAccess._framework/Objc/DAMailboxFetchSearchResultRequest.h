//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DAMailboxFetchSearchResultRequest : NSObject
{
    int _bodyFormat;
    int _maxSize;
    NSString *_longID;
    NSString *_folderID;
    NSString *_serverID;
}

@property (nonatomic) int bodyFormat; // @synthesize bodyFormat=_bodyFormat;
@property (copy, nonatomic) NSString *folderID; // @synthesize folderID=_folderID;
@property (copy, nonatomic) NSString *longID; // @synthesize longID=_longID;
@property (nonatomic) int maxSize; // @synthesize maxSize=_maxSize;
@property (copy, nonatomic) NSString *serverID; // @synthesize serverID=_serverID;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initRequestForBodyFormat:(int)arg1 withFolderID:(id)arg2 withServerID:(id)arg3 withLongID:(id)arg4 withBodySizeLimit:(int)arg5;
- (id)initRequestForBodyFormat:(int)arg1 withLongID:(id)arg2 withBodySizeLimit:(int)arg3;
- (BOOL)isEqual:(id)arg1;

@end

