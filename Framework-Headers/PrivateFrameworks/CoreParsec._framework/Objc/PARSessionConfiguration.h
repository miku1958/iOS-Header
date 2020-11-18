//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>

@class NSString;
@protocol PARResultFactory;

@interface PARSessionConfiguration : NSObject <NSSecureCoding>
{
    BOOL _dontPreloadImages;
    BOOL _enablePersonalizedRanking;
    NSString *_identifier;
    NSString *_userAgent;
    id<PARResultFactory> _factory;
}

@property BOOL dontPreloadImages; // @synthesize dontPreloadImages=_dontPreloadImages;
@property BOOL enablePersonalizedRanking; // @synthesize enablePersonalizedRanking=_enablePersonalizedRanking;
@property (readonly) id<PARResultFactory> factory; // @synthesize factory=_factory;
@property (readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy) NSString *userAgent; // @synthesize userAgent=_userAgent;

+ (id)defaultSessionConfiguration;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(id)arg1 userAgent:(id)arg2;
- (id)initWithId:(id)arg1 userAgent:(id)arg2 factory:(id)arg3;

@end
