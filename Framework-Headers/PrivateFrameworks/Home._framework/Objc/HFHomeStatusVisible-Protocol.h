//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/NSObject-Protocol.h>

@class NAFuture;

@protocol HFHomeStatusVisible <NSObject>

@property (readonly, nonatomic) BOOL hf_hasSetVisibleInHomeStatus;
@property (readonly, nonatomic) BOOL hf_isVisibleInHomeStatus;

- (NAFuture *)hf_updateIsVisibleInHomeStatus:(BOOL)arg1;
@end

