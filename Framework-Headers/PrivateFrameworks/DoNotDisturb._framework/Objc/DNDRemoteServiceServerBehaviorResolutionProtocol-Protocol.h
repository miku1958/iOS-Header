//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DoNotDisturb/NSObject-Protocol.h>

@class DNDClientEventDetails, DNDRequestDetails;

@protocol DNDRemoteServiceServerBehaviorResolutionProtocol <NSObject>
- (void)resolveBehaviorForEventDetails:(DNDClientEventDetails *)arg1 requestDetails:(DNDRequestDetails *)arg2 completionHandler:(void (^)(DNDClientEventBehavior *, NSError *))arg3;
@end

