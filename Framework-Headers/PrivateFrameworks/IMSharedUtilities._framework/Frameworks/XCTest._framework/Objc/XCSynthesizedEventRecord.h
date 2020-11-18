//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface XCSynthesizedEventRecord : NSObject <NSSecureCoding>
{
    NSMutableArray *_eventPaths;
    NSString *_name;
    long long _interfaceOrientation;
}

@property (readonly) NSArray *eventPaths;
@property (readonly) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property (readonly) double maximumOffset;
@property (readonly, copy) NSString *name; // @synthesize name=_name;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addPointerEventPath:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 interfaceOrientation:(long long)arg2;
- (BOOL)synthesizeWithError:(id *)arg1;

@end
