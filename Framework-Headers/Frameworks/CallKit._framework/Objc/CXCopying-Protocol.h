//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallKit/CXSanitizedCopying-Protocol.h>
#import <CallKit/NSCopying-Protocol.h>

@protocol NSCopying;

@protocol CXCopying <NSCopying, CXSanitizedCopying>
- (void)updateCopy:(id<NSCopying>)arg1 withZone:(struct _NSZone *)arg2;
@end

