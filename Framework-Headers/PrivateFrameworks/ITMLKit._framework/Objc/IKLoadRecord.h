//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ISURLOperation, NSString, NSURL, NSURLSessionDataTask, NSUUID;

@interface IKLoadRecord : NSObject
{
    BOOL _loadCompleted;
    NSURL *_URL;
    ISURLOperation *_opertaion;
    NSString *_scriptStr;
    NSUUID *_requestID;
    NSURLSessionDataTask *_dataTask;
}

@property (strong, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (strong, nonatomic) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property (nonatomic) BOOL loadCompleted; // @synthesize loadCompleted=_loadCompleted;
@property (strong, nonatomic) ISURLOperation *opertaion; // @synthesize opertaion=_opertaion;
@property (strong, nonatomic) NSUUID *requestID; // @synthesize requestID=_requestID;
@property (strong, nonatomic) NSString *scriptStr; // @synthesize scriptStr=_scriptStr;

- (void).cxx_destruct;

@end

