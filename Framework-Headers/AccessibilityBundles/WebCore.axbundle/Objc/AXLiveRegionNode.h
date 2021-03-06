//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AXLiveRegionNode : NSObject
{
    NSString *_label;
    NSString *_value;
    unsigned long long _traits;
    id _object;
}

@property (strong, nonatomic) NSString *label; // @synthesize label=_label;
@property (weak, nonatomic) id object; // @synthesize object=_object;
@property (nonatomic) unsigned long long traits; // @synthesize traits=_traits;
@property (strong, nonatomic) NSString *value; // @synthesize value=_value;

+ (id)createNodeFromObject:(id)arg1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;

@end

