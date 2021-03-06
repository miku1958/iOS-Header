//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSSoftwareUpdatesContext.h>

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSArray, NSString;

@interface SSMutableSoftwareUpdatesContext : SSSoftwareUpdatesContext <SSXPCCoding>
{
}

@property (copy, nonatomic) NSString *clientIdentifierHeader; // @dynamic clientIdentifierHeader;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isForced) BOOL forced; // @dynamic forced;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *softwareTypes; // @dynamic softwareTypes;
@property (readonly) Class superclass;

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;

@end

