//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackBoardServices/NSCopying-Protocol.h>

@interface BKSHIDEventAuthenticationKeyRetentionPolicy : NSObject <NSCopying>
{
    double _keySigningTimeout;
    double _keyVerificationTimeout;
}

@property (nonatomic) double keySigningTimeout; // @synthesize keySigningTimeout=_keySigningTimeout;
@property (nonatomic) double keyVerificationTimeout; // @synthesize keyVerificationTimeout=_keyVerificationTimeout;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

