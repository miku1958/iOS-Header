//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/NSObject-Protocol.h>

@class NSArray, NSData, NSString, NSURL;
@protocol CoreDAVAccountInfoProvider;

@protocol CoreDAVLeafDataPayload <NSObject>

@property (readonly, nonatomic) NSArray *childrenOrder;
@property (readonly, nonatomic) NSData *dataPayload;
@property (strong, nonatomic) NSURL *destinationURL;
@property (strong, nonatomic) NSURL *serverID;
@property (strong, nonatomic) NSURL *sourceURL;
@property (readonly, nonatomic) NSString *syncKey;

- (id)initWithURL:(NSURL *)arg1 eTag:(NSString *)arg2 dataPayload:(NSData *)arg3 inContainerWithURL:(NSURL *)arg4 withAccountInfoProvider:(id<CoreDAVAccountInfoProvider>)arg5;

@optional
@end
