//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Transparency/TransparencyRequest.h>

@class NSData, NSString, NSURL, NSUUID;

@interface KTLogRequest : TransparencyRequest
{
    BOOL _isGET;
    NSString *_application;
    NSURL *_url;
    NSData *_data;
    NSUUID *_uuid;
    double _timeout;
}

@property (strong) NSString *application; // @synthesize application=_application;
@property (strong) NSData *data; // @synthesize data=_data;
@property BOOL isGET; // @synthesize isGET=_isGET;
@property double timeout; // @synthesize timeout=_timeout;
@property (strong) NSURL *url; // @synthesize url=_url;
@property (strong) NSUUID *uuid; // @synthesize uuid=_uuid;

- (void).cxx_destruct;
- (id)copyRequest:(id *)arg1;
- (id)createGETRequestForURL:(id)arg1 timeout:(double)arg2 error:(id *)arg3;
- (id)createPOSTRequestForURL:(id)arg1 timeout:(double)arg2 contents:(id)arg3 error:(id *)arg4;
- (id)initGETWithURL:(id)arg1 application:(id)arg2;
- (id)initPOSTWithURL:(id)arg1 data:(id)arg2 uuid:(id)arg3 application:(id)arg4;

@end
