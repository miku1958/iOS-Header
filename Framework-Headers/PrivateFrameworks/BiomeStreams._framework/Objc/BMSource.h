//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BMSource : NSObject
{
    NSString *_identifier;
}

@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

- (void).cxx_destruct;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (void)logMetrics;
- (void)sendEvent:(id)arg1;
- (void)sendEvent:(id)arg1 timestamp:(double)arg2;

@end
