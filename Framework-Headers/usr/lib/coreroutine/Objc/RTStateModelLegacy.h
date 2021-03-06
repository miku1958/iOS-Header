//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;

@interface RTStateModelLegacy : NSObject <NSSecureCoding>
{
    long long _version;
    NSMutableDictionary *_stateModelLut;
}

@property (strong, nonatomic) NSMutableDictionary *stateModelLut; // @synthesize stateModelLut=_stateModelLut;
@property (nonatomic) long long version; // @synthesize version=_version;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

