//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreChart/CCVegaMarkInterface-Protocol.h>

@class CALayer, JSValue, NSString;

@interface CCVegaMark : NSObject <CCVegaMarkInterface>
{
    JSValue *_items;
    JSValue *mark;
}

@property (strong, nonatomic) CALayer *caLayer;
@property (readonly, nonatomic) BOOL clip;
@property (readonly, nonatomic) BOOL interactive;
@property (nonatomic) BOOL isDirty;
@property (readonly, nonatomic) unsigned long long itemCount;
@property (strong) JSValue *mark; // @synthesize mark;
@property (readonly, nonatomic) NSString *marktype;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *role;
@property (readonly, nonatomic) double zindex;

- (void).cxx_destruct;
- (id)getString:(id)arg1 defaultValue:(id)arg2;
- (id)initWithJSValue:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;

@end
