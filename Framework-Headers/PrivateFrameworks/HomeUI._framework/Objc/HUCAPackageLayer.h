//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, NSSet, NSString;

@interface HUCAPackageLayer : NSObject
{
    NSString *_name;
    CALayer *_layer;
    NSSet *_tags;
}

@property (readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) NSSet *tags; // @synthesize tags=_tags;

+ (id)_allTags;
+ (id)_tagsForName:(id)arg1;
- (void).cxx_destruct;
- (void)_applyPrimaryColorWithModifiers:(id)arg1;
- (void)applyModifiers:(id)arg1;
- (id)initWithName:(id)arg1 layer:(id)arg2;

@end
