//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchML/TMLAffineTransformJSExports-Protocol.h>

@interface TMLAffineTransform : NSObject <TMLAffineTransformJSExports>
{
    struct CGAffineTransform _transform;
}

@property (readonly, nonatomic) double a;
@property (readonly, nonatomic) double b;
@property (readonly, nonatomic) double c;
@property (readonly, nonatomic) double d;
@property (readonly, nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property (readonly, nonatomic) double tx;
@property (readonly, nonatomic) double ty;

+ (void)initializeJSContext:(id)arg1;
- (id)CGAffineTransformValue;
- (id)initWithAffineTransform:(struct CGAffineTransform)arg1;

@end

