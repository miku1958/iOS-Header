//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchML/NSCopying-Protocol.h>
#import <TouchML/TMLPointJSExports-Protocol.h>

@interface TMLPoint : NSObject <TMLPointJSExports, NSCopying>
{
    struct CGPoint _point;
}

@property (readonly, nonatomic) struct CGPoint point; // @synthesize point=_point;
@property (readonly, nonatomic) double x;
@property (readonly, nonatomic) double y;

+ (void)initializeJSContext:(id)arg1;
- (id)CGPointValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithPoint:(struct CGPoint)arg1;

@end

