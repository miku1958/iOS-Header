//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameController/NSObject-Protocol.h>

@protocol _GCIPCRemoteEndpointInterface <NSObject>
- (void)fetchObjectIdentifierWithReply:(void (^)(id<NSObject><NSCopying><NSSecureCoding>))arg1;
- (void)invalidateConnection;
@end
