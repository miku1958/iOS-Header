//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TrialServer/NSCopying-Protocol.h>

@interface TRIXPCActivityState : NSObject <NSCopying>
{
    unsigned long long _futureCompletionStatus;
    unsigned long long _capabilities;
}

@property (readonly, nonatomic) unsigned long long capabilities; // @synthesize capabilities=_capabilities;
@property (readonly, nonatomic) unsigned long long futureCompletionStatus; // @synthesize futureCompletionStatus=_futureCompletionStatus;

+ (id)xPCActivityStateWithFutureCompletionStatus:(unsigned long long)arg1 capabilities:(unsigned long long)arg2;
- (id)copyWithReplacementCapabilities:(unsigned long long)arg1;
- (id)copyWithReplacementFutureCompletionStatus:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFutureCompletionStatus:(unsigned long long)arg1 capabilities:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToXPCActivityState:(id)arg1;

@end

