//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SecurityFoundation/NSCopying-Protocol.h>
#import <SecurityFoundation/NSObject-Protocol.h>
#import <SecurityFoundation/NSSecureCoding-Protocol.h>

@class NSData, NSError, _SFKey;

@protocol SFPseudoRandomFunction <NSObject, NSCopying, NSSecureCoding>
- (NSData *)generateBytesWithLength:(long long)arg1 key:(_SFKey *)arg2 error:(NSError *)arg3;
@end

