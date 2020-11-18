//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchML/NSCopying-Protocol.h>
#import <TouchML/TMLInsetsJSExports-Protocol.h>

@interface TMLInsets : NSObject <TMLInsetsJSExports, NSCopying>
{
    struct UIEdgeInsets _insets;
}

@property (readonly, nonatomic) double bottom;
@property (readonly, nonatomic) double left;
@property (readonly, nonatomic) double right;
@property (readonly, nonatomic) double top;

+ (void)initializeJSContext:(id)arg1;
- (struct UIEdgeInsets)UIEdgeInsets;
- (id)UIEdgeInsetsValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithInsets:(struct UIEdgeInsets)arg1;

@end
