//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface BiometricKitTemplateInfo : NSObject
{
    NSArray *_topology;
    NSDictionary *_details;
}

@property (strong, nonatomic) NSDictionary *details; // @synthesize details=_details;
@property (strong, nonatomic) NSArray *topology; // @synthesize topology=_topology;

- (void)dealloc;
- (id)init;

@end

