//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface _PASDeviceIdentifier : NSObject
{
    NSString *_path;
}

@property (readonly) NSUUID *UUID;

- (void).cxx_destruct;
- (id)init;
- (id)initWithBasePath:(id)arg1;
- (void)reset;

@end
