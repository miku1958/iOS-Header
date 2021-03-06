//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHandwriting/NSSecureCoding-Protocol.h>

@interface CHRecognitionSessionVersion : NSObject <NSSecureCoding>
{
    long long _sessionVersion;
    long long _sessionResultVersion;
}

@property (readonly, nonatomic) long long sessionResultVersion; // @synthesize sessionResultVersion=_sessionResultVersion;
@property (readonly, nonatomic) long long sessionVersion; // @synthesize sessionVersion=_sessionVersion;

+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionVersion:(long long)arg1 sessionResultVersion:(long long)arg2;
- (BOOL)isValidSessionResultVersion;
- (BOOL)isValidSessionVersion;

@end

