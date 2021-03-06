//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSArray;

@interface UIDraggingSystemTouchRoutingPolicy : NSObject <NSSecureCoding>
{
    BOOL _hitTestingDisabled;
    NSArray *_contextIDsToAlwaysSendTouches;
    NSArray *_contextIDsToExcludeFromHitTesting;
}

@property (copy, nonatomic) NSArray *contextIDsToAlwaysSendTouches; // @synthesize contextIDsToAlwaysSendTouches=_contextIDsToAlwaysSendTouches;
@property (copy, nonatomic) NSArray *contextIDsToExcludeFromHitTesting; // @synthesize contextIDsToExcludeFromHitTesting=_contextIDsToExcludeFromHitTesting;
@property (nonatomic, getter=isHitTestingDisabled) BOOL hitTestingDisabled; // @synthesize hitTestingDisabled=_hitTestingDisabled;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

