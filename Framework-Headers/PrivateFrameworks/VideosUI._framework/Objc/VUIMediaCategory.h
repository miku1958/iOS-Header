//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface VUIMediaCategory : NSObject
{
    unsigned long long _type;
    NSSet *_supportedMediaCollectionTypes;
    NSDictionary *_supportedChildMediaCollectionTypes;
}

@property (copy, nonatomic) NSDictionary *supportedChildMediaCollectionTypes; // @synthesize supportedChildMediaCollectionTypes=_supportedChildMediaCollectionTypes;
@property (copy, nonatomic) NSSet *supportedMediaCollectionTypes; // @synthesize supportedMediaCollectionTypes=_supportedMediaCollectionTypes;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;

+ (id)mediaCatgeoryForType:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)_initWithType:(unsigned long long)arg1;
- (id)description;
- (id)init;

@end

