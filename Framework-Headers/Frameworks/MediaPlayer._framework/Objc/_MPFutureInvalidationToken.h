//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPInvalidationFutureToken-Protocol.h>
#import <MediaPlayer/NSCopying-Protocol.h>

@class MPInvalidationFuture, NSString;

@interface _MPFutureInvalidationToken : NSObject <NSCopying, MPInvalidationFutureToken>
{
    MPInvalidationFuture *_future;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) MPInvalidationFuture *future; // @synthesize future=_future;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

