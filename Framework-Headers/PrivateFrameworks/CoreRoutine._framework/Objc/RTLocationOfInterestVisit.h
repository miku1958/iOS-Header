//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSCopying-Protocol.h>
#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class NSDate;

@interface RTLocationOfInterestVisit : NSObject <NSCopying, NSSecureCoding>
{
    NSDate *_entryTime;
    NSDate *_exitTime;
}

@property (readonly, nonatomic) NSDate *entryTime; // @synthesize entryTime=_entryTime;
@property (readonly, nonatomic) NSDate *exitTime; // @synthesize exitTime=_exitTime;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)_enteredAndExitedOnSameDay;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntryTime:(id)arg1 exitTime:(id)arg2;
- (id)localizedDateDetail;
- (id)localizedDescription;
- (id)localizedTimeDetail;

@end

