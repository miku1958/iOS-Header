//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _SKUIInspectablePropertySection : NSObject
{
    NSString *_friendlyName;
    NSMutableArray *_properties;
}

@property (copy, nonatomic) NSString *friendlyName; // @synthesize friendlyName=_friendlyName;
@property (readonly, nonatomic) NSMutableArray *properties; // @synthesize properties=_properties;

- (void).cxx_destruct;
- (id)init;

@end

