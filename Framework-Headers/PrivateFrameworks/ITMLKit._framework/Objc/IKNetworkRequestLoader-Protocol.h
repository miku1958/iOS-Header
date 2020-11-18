//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/NSObject-Protocol.h>

@class NSString;
@protocol IKNetworkRequestRecord;

@protocol IKNetworkRequestLoader <NSObject>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *parentIdentifier;

- (id<IKNetworkRequestRecord>)recordWithForResource:(long long)arg1 withInitiator:(long long)arg2;
@end

