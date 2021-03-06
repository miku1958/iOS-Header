//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BoardServices/NSCopying-Protocol.h>

@class NSString;

@interface BSXPCServiceConnectionContext : NSObject <NSCopying>
{
    NSString *_proem;
}

@property (readonly, nonatomic, getter=isChild) BOOL child;
@property (readonly, nonatomic, getter=isClient) BOOL client;
@property (readonly, copy, nonatomic) NSString *endpointDescription;
@property (readonly, nonatomic, getter=isRoot) BOOL root;
@property (readonly, nonatomic, getter=isServer) BOOL server;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;

@end

