//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRAVBufferedOutputStream.h>

@class IDSService, MRIDSConnectivityManager, NSString;

@interface MRIDSOutputStream : MRAVBufferedOutputStream
{
    IDSService *_service;
    long long _type;
    NSString *_destination;
    NSString *_session;
    MRIDSConnectivityManager *_connection;
}

- (void).cxx_destruct;
- (BOOL)hasSpaceAvailable;
- (id)initWithConnection:(id)arg1 type:(long long)arg2 destination:(id)arg3 session:(id)arg4;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;

@end

