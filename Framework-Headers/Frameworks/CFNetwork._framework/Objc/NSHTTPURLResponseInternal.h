//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface NSHTTPURLResponseInternal : NSObject <NSCoding>
{
    struct __SecTrust *peerTrust;
    BOOL isMixedReplace;
}

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

