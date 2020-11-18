//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallKit/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface CXCallDirectoryStoreExtension : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    long long _primaryKey;
    long long _priority;
    long long _state;
    NSDate *_stateLastModified;
}

@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) long long primaryKey; // @synthesize primaryKey=_primaryKey;
@property (nonatomic) long long priority; // @synthesize priority=_priority;
@property (nonatomic) long long state; // @synthesize state=_state;
@property (strong, nonatomic) NSDate *stateLastModified; // @synthesize stateLastModified=_stateLastModified;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

