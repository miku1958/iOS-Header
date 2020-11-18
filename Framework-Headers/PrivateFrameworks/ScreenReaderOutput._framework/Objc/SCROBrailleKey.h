//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ScreenReaderOutput/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSString;
@protocol NSSecureCoding;

@interface SCROBrailleKey : NSObject <NSSecureCoding>
{
    NSMutableArray *_maskArray;
    NSString *_identifier;
    long long _routerIndex;
    long long _routerToken;
    long long _routerLocation;
    BOOL _hasRouterInfo;
    id<NSSecureCoding> _appToken;
    int _displayToken;
    int _displayMode;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addKeyMask:(unsigned int)arg1;
- (void)addModifierMask:(unsigned int)arg1;
- (void)addSpacebarKeyMask;
- (id)description;
- (int)displayMode;
- (int)displayToken;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)getRouterIndex:(long long *)arg1 token:(long long *)arg2 location:(long long *)arg3 appToken:(id *)arg4;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)keyMasks;
- (void)setDisplayMode:(int)arg1;
- (void)setDisplayToken:(int)arg1;
- (void)setRouterIndex:(long long)arg1 token:(long long)arg2 location:(long long)arg3 appToken:(id)arg4;

@end
