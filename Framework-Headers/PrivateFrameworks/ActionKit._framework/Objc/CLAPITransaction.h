//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHTTPURLResponse, NSMutableData, NSString, NSURLConnection, NSURLRequest;

@interface CLAPITransaction : NSObject
{
    NSURLRequest *_request;
    NSURLConnection *_connection;
    NSMutableData *_receivedData;
    NSHTTPURLResponse *_response;
    long long _requestType;
    NSString *_identifier;
    id _userInfo;
    id _internalContext;
}

@property (strong, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) id internalContext; // @synthesize internalContext=_internalContext;
@property (strong, nonatomic) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
@property (strong, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property (nonatomic) long long requestType; // @synthesize requestType=_requestType;
@property (strong, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
@property (strong, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;

+ (id)transaction;
- (void)dealloc;
- (id)init;

@end
