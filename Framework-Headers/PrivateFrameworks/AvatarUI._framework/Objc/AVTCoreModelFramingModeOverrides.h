//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AVTCoreModelFramingModeOverrides : NSObject
{
    NSArray *_orderedTags;
    NSArray *_orderedFramingModeOverrides;
}

@property (readonly, nonatomic) NSArray *orderedFramingModeOverrides; // @synthesize orderedFramingModeOverrides=_orderedFramingModeOverrides;
@property (readonly, nonatomic) NSArray *orderedTags; // @synthesize orderedTags=_orderedTags;

- (void).cxx_destruct;
- (id)initWithCameraOverrides:(id)arg1;

@end
