//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;

@interface ASDUpdatePollMetrics : NSObject
{
    NSDate *_pollTime;
    NSString *_reason;
    NSArray *_bundleIDs;
}

@property (copy, nonatomic) NSArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
@property (copy, nonatomic) NSDate *pollTime; // @synthesize pollTime=_pollTime;
@property (copy, nonatomic) NSString *reason; // @synthesize reason=_reason;

- (void).cxx_destruct;
- (id)description;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;

@end
