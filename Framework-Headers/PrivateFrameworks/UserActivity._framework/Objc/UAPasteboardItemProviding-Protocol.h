//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserActivity/NSObject-Protocol.h>

@class NSString, NSUUID;

@protocol UAPasteboardItemProviding <NSObject>

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSUUID *uuid;

- (void)getDataWithCompletionBlock:(void (^)(NSInputStream *, NSError *))arg1;
@end
