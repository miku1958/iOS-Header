//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreDAV/CoreDAVLeafDataPayload-Protocol.h>

@class NSArray, NSData, NSString, NSURL;

@interface CoreDAVLeafDataPayload : NSObject <CoreDAVLeafDataPayload>
{
    NSURL *_serverID;
    NSString *_syncKey;
    NSData *_dataPayload;
}

@property (readonly, nonatomic) NSArray *childrenOrder;
@property (readonly, nonatomic) NSData *dataPayload; // @synthesize dataPayload=_dataPayload;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSURL *serverID; // @synthesize serverID=_serverID;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *syncKey; // @synthesize syncKey=_syncKey;

- (void)dealloc;
- (id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5;

@end
