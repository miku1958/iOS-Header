//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SSVPlayActivityFeedSerialization : NSObject
{
    NSString *_currentStoreFrontID;
}

@property (copy, nonatomic) NSString *currentStoreFrontID; // @synthesize currentStoreFrontID=_currentStoreFrontID;

+ (id)defaultOverrideHTTPHeaderFields;
- (void).cxx_destruct;
- (id)propertyListObjectWithPlayActivityEvent:(id)arg1;

@end
